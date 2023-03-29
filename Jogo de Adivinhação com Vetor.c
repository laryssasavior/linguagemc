#include <stdio.h> // Inclui a biblioteca padr�o de entrada e sa�da em C
#include <stdlib.h> // Inclui a biblioteca para gerar n�meros aleat�rios
#include <time.h> // Inclui a biblioteca para usar a fun��o time()

#define TAMANHO_VETOR 100 // Sintaxe do tamanho do vetor para armazenar as tentativas

int gerarNumeroSecreto(int min, int max) // Fun��o para gerar um n�mero secreto
{
    return min + rand() / (RAND_MAX / (max - min + 1) + 1);
}

int main() // Fun��o principal do programa
{
    srand(time(NULL)); // Inicializa a semente para gerar n�meros aleat�rios 
    
    int numeroSorteado = gerarNumeroSecreto(1, 100); // Gera um n�mero aleat�rio entre 1 e 100
    int palpite, tentativas = 0, somaTentativas = 0; // Declara��o das vari�veis
    
    int tentativasRealizadas[TAMANHO_VETOR]; // Declara��o do vetor para armazenar as tentativas
    
    do // La�o de repeti��o do-while para o jogo de adivinha��o
    {
        printf("Digite um n�mero entre 1 e 100: "); // Pede ao usu�rio para digitar um palpite
        scanf("%d", &palpite); // L� o palpite digitado pelo usu�rio
        
        tentativasRealizadas[tentativas] = palpite; // Armazena o palpite no vetor de tentativas
        tentativas++; // Incrementa o n�mero de tentativas
        
        if(palpite < numeroSorteado) // Se o palpite for menor que o n�mero sorteado
        {
            printf("Seu palpite � menor do que o n�mero sorteado.\n");
        }
        else if(palpite > numeroSorteado) // Se o palpite for maior que o n�mero sorteado
        {
            printf("Seu palpite � maior do que o n�mero sorteado.\n");
        }
        
        somaTentativas += tentativas; // Soma o n�mero de tentativas para calcular a m�dia
        
    } while(palpite != numeroSorteado); // Repete o la�o enquanto o palpite n�o for igual ao n�mero sorteado
    
    printf("Parab�ns, voc� acertou em %d tentativas!\n", tentativas); // Imprime uma mensagem de parab�ns ao usu�rio
    
    float mediaTentativas = (float)somaTentativas / tentativas; // Calcula a m�dia
    
    printf("M�dia de tentativas: %.2f\n", mediaTentativas); // Mostra a m�dia
    
    printf("Tentativas realizadas: "); // Mostra as tentativas realizadas pelo usu�rio
    
    int i; // Declara a vari�vel i fora do la�o
	
	for(i = 0; i < tentativas; i++) // Inicializa a vari�vel i antes do la�o
	{
    printf("%d ", tentativasRealizadas[i]); // Imprime o valor do vetor de tentativas
	}

    printf("\n"); // Imprime uma quebra de linha
    
    return 0;
    
}


