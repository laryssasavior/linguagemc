#include <stdio.h> // Inclus�o da biblioteca padr�o de entrada e sa�da
#include <stdbool.h> // Inclus�o da biblioteca para uso da sintaxe booleana

int main() { // Sintaxe principal do sistema
	
    char nome[30]; // Declara��o da vari�vel para armazenar o nome
    int anoNascimento, idade; // Declara��o das vari�veis para armazenar o ano de nascimento e a idade
    float altura; // Declara��o da vari�vel para armazenar a altura
    bool maiorDeIdade; // Declara��o da vari�vel booleana para verificar se a pessoa � maior de idade

    // Solicita��o do nome e do ano de nascimento
    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &anoNascimento);

    // C�lculo da idade
    idade = 2023 - anoNascimento;

    // Verifica��o se a pessoa � maior de idade
    if (idade >= 18) {
        maiorDeIdade = true;
    } else {
        maiorDeIdade = false;
    }

    // Solicita��o da altura
    printf("Digite a sua altura (em metros): ");
    scanf("%f", &altura);

    // Apresenta��o do resultado utilizando sintaxe booleana
    printf("%s tem %d anos, ", nome, idade);
    if (maiorDeIdade) {
        printf("� maior de idade ");
    } else {
        printf("� menor de idade ");
    }
    printf("e mede %.2f metros de altura.", altura);

    return 0;
}

