#include <stdio.h> // inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // inclui a biblioteca para usar a função exit()

int main() {
    char operador; // operador que o usuário vai digitar
    float num1, num2; // números que o usuário vai digitar

    printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &operador); // lê o operador do usuário

    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2); // lê os dois números do usuário

    // faz a operação de acordo com o operador escolhido
    switch (operador) {
        case '+':
            printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0) { // divisão por zero não é permitida
                printf("Não é possível dividir por zero!");
                exit(0); // sai do programa
            } else {
                printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
            }
            break;
        default:
            printf("Operador inválido!");
            break;
    }

    return 0;
}

