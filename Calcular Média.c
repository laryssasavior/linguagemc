#include <stdio.h>

#define MAX_TAMANHO_VETOR 10 // Define o tamanho m�ximo do vetor

// Fun��o para calcular a m�dia de um vetor de valores
float calcularMedia(float vetor[], int tamanho) {
    float media = 0;
    
    int i;
   	for(i = 0; i < tamanho; i++)
    {
        media += vetor[i];
    }
    media /= tamanho; // Calcular� a m�dia
    return media;
}

int main() {
    int tamanhoVetor;
    float vetor[MAX_TAMANHO_VETOR];

    // Solicita ao usu�rio o tamanho do vetor e l� o valor digitado
    printf("Digite o tamanho da Nota Final (no m�ximo %d): ", MAX_TAMANHO_VETOR);
    scanf("%d", &tamanhoVetor);

    // Solicita ao usu�rio que insira os valores do vetor
    printf("Insira os valores das notas obtidas nos 4 bimestres:\n");
    
	int i;	
	for(i = 0; i < tamanhoVetor; i++) {
        scanf("%f", &vetor[i]);
    }

    // Calcula a m�dia dos valores inseridos
    float media = calcularMedia(vetor, tamanhoVetor);

    // Exibe o resultado da m�dia calculada
    printf("A media final das notas do aluno �: %.2f\n", media);

    return 0;
}


