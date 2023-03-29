#include <stdio.h>

// Definição da função recursiva para calcular o fatorial
int fatorial(int n) {
    // Condição de parada: se n é 0 ou 1, o fatorial é 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Chamada recursiva da função, multiplicando n pelo fatorial do número anterior
    else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int n = 0;
    while (n >= 0) {
        printf("Digite o número que deseja fatorar (-1 para sair): ");
        scanf("%d", &n);
        
        if (n >= 0) {
            // Chama a função fatorial com o valor digitado pelo usuário
            int resultado = fatorial(n);
            printf("O fatorial de %d é %d\n", n, resultado);
        }
    }
    
    printf("Programa encerrado.\n");
    return 0;
}

