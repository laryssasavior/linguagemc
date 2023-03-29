#include <stdio.h> // Inclusão da biblioteleca de entrada e saída de dados
#include <stdlib.h> // Inclusão da biblioteca de para alocação de memória
#include <math.h> // Inclusão da biblioteca de funções matemáticas
#include <ctype.h> // Inclusão biblioteca que contém funções de teste e conversão de caracteres

int main() {
    char op, resp;  // Variáveis de operação e resposta do usuário
    float num1, num2, result; // Variáveis dos números e o resultado das operações
    
    // Inicia um laço que será executado pelo menos uma vez
    do {
        // Solicita ao usuário que digite a operação desejada
        printf("Digite a operacao (+, -, *, /, ^): ");
        scanf(" %c", &op);
        
        // Solicita ao usuário que digite os números que serão usados na operação
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);
        
        // Realiza a operação correspondente com base na entrada do usuário
        switch(op) {
        	// caso em que a variável op tenha o valor do operador correspondente
            case '+': //  Caso adição
                result = num1 + num2;
                printf("Resultado: %.2f\n", result);
               	// palavra-chave que interrompe a execução do bloco switch após um caso concluído
                break; 
            case '-':  // Caso subtração
                result = num1 - num2;
                printf("Resultado: %.2f\n", result);
                break;
            case '*': // Caso multiplicação
                result = num1 * num2;
                printf("Resultado: %.2f\n", result);
                break;
            case '/': // Caso divisão
                if(num2 == 0) {
                    // Imprime uma mensagem de erro caso o usuário tente dividir por zero
                    printf("Nao e possivel dividir por zero.\n");
                } else {
                    result = num1 / num2;
                    printf("Resultado: %.2f\n", result);
                }
                break;
            case '^': // Caso exponenciação
                result = pow(num1, num2);  // Função que retorna a potência 
                printf("Resultado: %.2f\n", result);
                break;
            //caso em que a variável op não corresponde a nenhum dos casos definidos em switch
            default:
                // Imprime uma mensagem de erro caso o usuário digite uma operação inválida
                printf("Operacao invalida.\n");
        }
        
        // Pergunta ao usuário se ele deseja realizar outra operação
        printf("Deseja realizar outra operacao? (S/N): ");
        scanf(" %c", &resp);
        
    } while (toupper(resp) == 'S'); // Continua executando o loop enquanto a resposta do usuário for 'S'
    
    return 0; // Indica que o programa terminou com sucesso
}



