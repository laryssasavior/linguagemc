#include <stdio.h> // Inclus�o da biblioteleca de entrada e sa�da de dados
#include <stdlib.h> // Inclus�o da biblioteca de para aloca��o de mem�ria
#include <math.h> // Inclus�o da biblioteca de fun��es matem�ticas
#include <ctype.h> // Inclus�o biblioteca que cont�m fun��es de teste e convers�o de caracteres

int main() {
    char op, resp;  // Vari�veis de opera��o e resposta do usu�rio
    float num1, num2, result; // Vari�veis dos n�meros e o resultado das opera��es
    
    // Inicia um la�o que ser� executado pelo menos uma vez
    do {
        // Solicita ao usu�rio que digite a opera��o desejada
        printf("Digite a operacao (+, -, *, /, ^): ");
        scanf(" %c", &op);
        
        // Solicita ao usu�rio que digite os n�meros que ser�o usados na opera��o
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);
        
        // Realiza a opera��o correspondente com base na entrada do usu�rio
        switch(op) {
        	// caso em que a vari�vel op tenha o valor do operador correspondente
            case '+': //  Caso adi��o
                result = num1 + num2;
                printf("Resultado: %.2f\n", result);
               	// palavra-chave que interrompe a execu��o do bloco switch ap�s um caso conclu�do
                break; 
            case '-':  // Caso subtra��o
                result = num1 - num2;
                printf("Resultado: %.2f\n", result);
                break;
            case '*': // Caso multiplica��o
                result = num1 * num2;
                printf("Resultado: %.2f\n", result);
                break;
            case '/': // Caso divis�o
                if(num2 == 0) {
                    // Imprime uma mensagem de erro caso o usu�rio tente dividir por zero
                    printf("Nao e possivel dividir por zero.\n");
                } else {
                    result = num1 / num2;
                    printf("Resultado: %.2f\n", result);
                }
                break;
            case '^': // Caso exponencia��o
                result = pow(num1, num2);  // Fun��o que retorna a pot�ncia 
                printf("Resultado: %.2f\n", result);
                break;
            //caso em que a vari�vel op n�o corresponde a nenhum dos casos definidos em switch
            default:
                // Imprime uma mensagem de erro caso o usu�rio digite uma opera��o inv�lida
                printf("Operacao invalida.\n");
        }
        
        // Pergunta ao usu�rio se ele deseja realizar outra opera��o
        printf("Deseja realizar outra operacao? (S/N): ");
        scanf(" %c", &resp);
        
    } while (toupper(resp) == 'S'); // Continua executando o loop enquanto a resposta do usu�rio for 'S'
    
    return 0; // Indica que o programa terminou com sucesso
}



