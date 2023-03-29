#include <stdio.h>

// Defini��o da fun��o recursiva para calcular o fatorial
int fatorial(int n) {
    // Condi��o de parada: se n � 0 ou 1, o fatorial � 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Chamada recursiva da fun��o, multiplicando n pelo fatorial do n�mero anterior
    else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int n = 0;
    while (n >= 0) {
        printf("Digite o n�mero que deseja fatorar (-1 para sair): ");
        scanf("%d", &n);
        
        if (n >= 0) {
            // Chama a fun��o fatorial com o valor digitado pelo usu�rio
            int resultado = fatorial(n);
            printf("O fatorial de %d � %d\n", n, resultado);
        }
    }
    
    printf("Programa encerrado.\n");
    return 0;
}

