#include <stdio.h>

#define MAX_TAMANHO_VETOR 10 // Define o tamanho máximo do vetor

// Função para calcular a média de um vetor de valores
float calcularMedia(float vetor[], int tamanho) {
    float media = 0;
    
    int i;
   	for(i = 0; i < tamanho; i++)
    {
        media += vetor[i];
    }
    media /= tamanho; // Calculará a média
    return media;
}

int main() {
    int tamanhoVetor;
    float vetor[MAX_TAMANHO_VETOR];

    // Solicita ao usuário o tamanho do vetor e lê o valor digitado
    printf("Digite o tamanho da Nota Final (no máximo %d): ", MAX_TAMANHO_VETOR);
    scanf("%d", &tamanhoVetor);

    // Solicita ao usuário que insira os valores do vetor
    printf("Insira os valores das notas obtidas nos 4 bimestres:\n");
    
	int i;	
	for(i = 0; i < tamanhoVetor; i++) {
        scanf("%f", &vetor[i]);
    }

    // Calcula a média dos valores inseridos
    float media = calcularMedia(vetor, tamanhoVetor);

    // Exibe o resultado da média calculada
    printf("A media final das notas do aluno é: %.2f\n", media);

    return 0;
}


