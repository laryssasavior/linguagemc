#include <stdio.h> // inclui a biblioteca padr�o de entrada e sa�da
#include <stdlib.h> // inclui a biblioteca para usar a fun��o exit()

int main() {
    char operador; // operador que o usu�rio vai digitar
    float num1, num2; // n�meros que o usu�rio vai digitar

    printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &operador); // l� o operador do usu�rio

    printf("Digite dois n�meros: ");
    scanf("%f %f", &num1, &num2); // l� os dois n�meros do usu�rio

    // faz a opera��o de acordo com o operador escolhido
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
            if (num2 == 0) { // divis�o por zero n�o � permitida
                printf("N�o � poss�vel dividir por zero!");
                exit(0); // sai do programa
            } else {
                printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
            }
            break;
        default:
            printf("Operador inv�lido!");
            break;
    }

    return 0;
}

