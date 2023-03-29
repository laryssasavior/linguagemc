#include <stdio.h> // Inclusão da biblioteca padrão de entrada e saída
#include <stdbool.h> // Inclusão da biblioteca para uso da sintaxe booleana

int main() { // Sintaxe principal do sistema
	
    char nome[30]; // Declaração da variável para armazenar o nome
    int anoNascimento, idade; // Declaração das variáveis para armazenar o ano de nascimento e a idade
    float altura; // Declaração da variável para armazenar a altura
    bool maiorDeIdade; // Declaração da variável booleana para verificar se a pessoa é maior de idade

    // Solicitação do nome e do ano de nascimento
    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &anoNascimento);

    // Cálculo da idade
    idade = 2023 - anoNascimento;

    // Verificação se a pessoa é maior de idade
    if (idade >= 18) {
        maiorDeIdade = true;
    } else {
        maiorDeIdade = false;
    }

    // Solicitação da altura
    printf("Digite a sua altura (em metros): ");
    scanf("%f", &altura);

    // Apresentação do resultado utilizando sintaxe booleana
    printf("%s tem %d anos, ", nome, idade);
    if (maiorDeIdade) {
        printf("é maior de idade ");
    } else {
        printf("é menor de idade ");
    }
    printf("e mede %.2f metros de altura.", altura);

    return 0;
}

