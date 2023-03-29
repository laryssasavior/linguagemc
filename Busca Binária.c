#include <stdio.h>

#define MAX 10 // define o tamanho m�ximo do vetor

void bubbleSort(int vetor[], int tamanho); // declara��o da fun��o de ordena��o
int buscaBinaria(int vetor[], int chave, int tamanho); // declara��o da fun��o de busca

int main() {
    int vetor[MAX], tamanho, chave, posicao;

    // l� o tamanho do vetor
    printf("Digite o tamanho do vetor (maximo %d): ", MAX);
    scanf("%d", &tamanho);

    // l� os elementos do vetor
    printf("Digite os %d elementos do vetor: ", tamanho);
    int i;
	for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    // realiza a ordena��o do vetor
    bubbleSort(vetor, tamanho);

    // imprime o vetor ordenado
    printf("Vetor ordenado: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    // l� a chave de busca
    printf("\nDigite a chave de busca: ");
    scanf("%d", &chave);

    // realiza a busca bin�ria no vetor ordenado
    posicao = buscaBinaria(vetor, chave, tamanho);

    // imprime a posi��o da chave de busca no vetor
    if (posicao == -1) {
        printf("Chave nao encontrada.\n");
    } else {
        printf("Chave encontrada na posicao %d.\n", posicao);
    }

    return 0;
}

// implementa��o da fun��o de ordena��o Bubble Sort
void bubbleSort(int vetor[], int tamanho) {
    int i, j, temp;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j+1]) {
                // troca de posi��o dos elementos
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}

// implementa��o da fun��o de busca bin�ria
int buscaBinaria(int vetor[], int chave, int tamanho) {
    int inicio = 0, fim = tamanho - 1, meio;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (vetor[meio] == chave) {
            // chave encontrada
            return meio;
        } else if (vetor[meio] < chave) {
            // descarta metade inferior do vetor
            inicio = meio + 1;
        } else {
            // descarta metade superior do vetor
            fim = meio - 1;
        }
    }

    // chave n�o encontrada
    return -1;
    
}

