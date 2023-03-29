#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CLIENTES 100 // define o número máximo de clientes suportados

// Declaração da struct Cliente
typedef struct {
    char nome[50];
    int idade;
} Cliente;

// Declaração das funções
void inserirCliente(Cliente *clientes, int *numClientes);
void pesquisarCliente(Cliente *clientes, int numClientes);

int main() {
    Cliente clientes[MAX_CLIENTES]; // declara o array de clientes
    int numClientes = 0; // inicializa o número de clientes como 0

    // Menu da aplicação
    int opcao;
    do {
        printf("Selecione uma opcao:\n");
        printf("1 - Inserir cliente\n");
        printf("2 - Pesquisar cliente\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                inserirCliente(clientes, &numClientes);
                break;
            case 2:
                pesquisarCliente(clientes, numClientes);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while(opcao != 0);

    return 0;
}

// Função para inserir um novo cliente no array
void inserirCliente(Cliente *clientes, int *numClientes) {
    // Verifica se o número máximo de clientes foi atingido
    if (*numClientes == MAX_CLIENTES) {
        printf("Erro: numero maximo de clientes atingido.\n");
        return;
    }

    // Lê as informações do novo cliente
    Cliente novoCliente;
    printf("Informe o nome do cliente: ");
    scanf("%s", novoCliente.nome); // lê o nome diretamente na string
    printf("Informe a idade do cliente: ");
    scanf("%d", &novoCliente.idade);

    // Adiciona o novo cliente no final do array
    *(clientes + *numClientes) = novoCliente;
    (*numClientes)++;

    printf("Cliente adicionado com sucesso.\n");
}

// Função para pesquisar um cliente no array
void pesquisarCliente(Cliente *clientes, int numClientes) {
    char nomeBusca[50];
    printf("Informe o nome do cliente a ser pesquisado: ");
    scanf("%s", nomeBusca); // lê o nome diretamente na string

    int i, encontrado = 0;
    for (i = 0; i < numClientes; i++) {
        // Compara o nome do cliente atual com o nome buscado, ignorando o case-sensitive
        if (strcasecmp((clientes + i)->nome, nomeBusca) == 0) {
            printf("Cliente encontrado: %s, %d anos.\n", (clientes + i)->nome, (clientes + i)->idade);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Cliente nao encontrado.\n");
    }
}

