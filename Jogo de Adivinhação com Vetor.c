#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída em C
#include <stdlib.h> // Inclui a biblioteca para gerar números aleatórios
#include <time.h> // Inclui a biblioteca para usar a função time()

#define TAMANHO_VETOR 100 // Sintaxe do tamanho do vetor para armazenar as tentativas

int gerarNumeroSecreto(int min, int max) // Função para gerar um número secreto
{
    return min + rand() / (RAND_MAX / (max - min + 1) + 1);
}

int main() // Função principal do programa
{
    srand(time(NULL)); // Inicializa a semente para gerar números aleatórios 
    
    int numeroSorteado = gerarNumeroSecreto(1, 100); // Gera um número aleatório entre 1 e 100
    int palpite, tentativas = 0, somaTentativas = 0; // Declaração das variáveis
    
    int tentativasRealizadas[TAMANHO_VETOR]; // Declaração do vetor para armazenar as tentativas
    
    do // Laço de repetição do-while para o jogo de adivinhação
    {
        printf("Digite um número entre 1 e 100: "); // Pede ao usuário para digitar um palpite
        scanf("%d", &palpite); // Lê o palpite digitado pelo usuário
        
        tentativasRealizadas[tentativas] = palpite; // Armazena o palpite no vetor de tentativas
        tentativas++; // Incrementa o número de tentativas
        
        if(palpite < numeroSorteado) // Se o palpite for menor que o número sorteado
        {
            printf("Seu palpite é menor do que o número sorteado.\n");
        }
        else if(palpite > numeroSorteado) // Se o palpite for maior que o número sorteado
        {
            printf("Seu palpite é maior do que o número sorteado.\n");
        }
        
        somaTentativas += tentativas; // Soma o número de tentativas para calcular a média
        
    } while(palpite != numeroSorteado); // Repete o laço enquanto o palpite não for igual ao número sorteado
    
    printf("Parabéns, você acertou em %d tentativas!\n", tentativas); // Imprime uma mensagem de parabéns ao usuário
    
    float mediaTentativas = (float)somaTentativas / tentativas; // Calcula a média
    
    printf("Média de tentativas: %.2f\n", mediaTentativas); // Mostra a média
    
    printf("Tentativas realizadas: "); // Mostra as tentativas realizadas pelo usuário
    
    int i; // Declara a variável i fora do laço
	
	for(i = 0; i < tentativas; i++) // Inicializa a variável i antes do laço
	{
    printf("%d ", tentativasRealizadas[i]); // Imprime o valor do vetor de tentativas
	}

    printf("\n"); // Imprime uma quebra de linha
    
    return 0;
    
}


