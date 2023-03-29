#include <stdio.h>

// Defini��o da fun��o para calcular o n�mero Fibonacci
int fibonacci(int n) {
    if (n == 0 || n == 1) {
        // Caso base: o Fibonacci de 0 e 1 � igual a eles mesmos
        return n;
    }
    else {
        // Chamada recursiva para calcular o n�mero Fibonacci anterior
        int anterior1 = fibonacci(n - 1);
        // Chamada recursiva para calcular o n�mero Fibonacci dois n�meros antes
        int anterior2 = fibonacci(n - 2);
        // Retorna a soma dos dois n�meros anteriores
        return anterior1 + anterior2;
    }
}

int main() {
    int n = 0;
    while (n >= 0) {
        printf("Digite o n�mero da sequ�ncia Fibonacci (-1 para sair): ");
        scanf("%d", &n);
        
        if (n >= 0) {
            // Chama a fun��o fibonacci com o valor digitado pelo usu�rio
            int resultado = fibonacci(n);
            printf("O n�mero Fibonacci de %d � %d\n", n, resultado);
        }
    }
    
    printf("Programa encerrado.\n");
    return 0;
}

