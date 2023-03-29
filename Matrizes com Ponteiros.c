#include <stdio.h>

#define LIN 3 // define o número de linhas da matriz
#define COL 3 // define o número de colunas da matriz

void preencheMatriz(int matriz[][COL], int linhas, int colunas);
void somaMatrizes(int matriz1[][COL], int matriz2[][COL], int linhas, int colunas);

int main() {
   // Declarando as matrizes
   int matriz1[LIN][COL];
   int matriz2[LIN][COL];
   
   // Preenchendo as matrizes com valores informados pelo usuário
   printf("Preencha a primeira matriz:\n");
   preencheMatriz(matriz1, LIN, COL);
   
   printf("\nPreencha a segunda matriz:\n");
   preencheMatriz(matriz2, LIN, COL);
   
   // Realizando a soma das matrizes
   somaMatrizes(matriz1, matriz2, LIN, COL);
   
   return 0;
}

void preencheMatriz(int matriz[][COL], int linhas, int colunas) {
   int i, j;
   
   for (i = 0; i < linhas; i++) {
      for (j = 0; j < colunas; j++) {
         printf("[%d][%d]: ", i, j);
         scanf("%d", (*(matriz+i)+j)); // lendo a entrada do usuário utilizando ponteiros
      }
   }
}

void somaMatrizes(int matriz1[][COL], int matriz2[][COL], int linhas, int colunas) {
   int i, j;
   
   printf("\nResultado da soma das matrizes:\n");
   
   for (i = 0; i < linhas; i++) {
      for (j = 0; j < colunas; j++) {
         // somando os elementos das matrizes utilizando ponteiros
         printf("%d ", *(*(matriz1+i)+j) + *(*(matriz2+i)+j)); 
      }
      
      printf("\n");
   }
   
}


