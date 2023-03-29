#include <stdio.h>

// Definição da função para calcular o número Fibonacci
int fibonacci(int n) {
    if (n == 0 || n == 1) {
        // Caso base: o Fibonacci de 0 e 1 é igual a eles mesmos
        return n;
    }
    else {
        // Chamada recursiva para calcular o número Fibonacci anterior
        int anterior1 = fibonacci(n - 1);
        // Chamada recursiva para calcular o número Fibonacci dois números antes
        int anterior2 = fibonacci(n - 2);
        // Retorna a soma dos dois números anteriores
        return anterior1 + anterior2;
    }
}

int main() {
    int n = 0;
    while (n >= 0) {
        printf("Digite o número da sequência Fibonacci (-1 para sair): ");
        scanf("%d", &n);
        
        if (n >= 0) {
            // Chama a função fibonacci com o valor digitado pelo usuário
            int resultado = fibonacci(n);
            printf("O número Fibonacci de %d é %d\n", n, resultado);
        }
    }
    
    printf("Programa encerrado.\n");
    return 0;
}

