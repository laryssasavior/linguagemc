#include <stdio.h> // Biblioteca de entrada e sa�da
#include <string.h> // Biblioteca de strings

int main() {
   // Declarando um array de strings com tamanho 10
   char lista[10][50];
   
   // Inicializando os elementos do array com strings
   strcpy(lista[0], "Arroz");
   strcpy(lista[1], "Feij�o");
   strcpy(lista[2], "Macarr�o");
   strcpy(lista[3], "Carne");
   strcpy(lista[4], "Frutas");
   
   // Contador para controlar a posi��o do pr�ximo elemento a ser adicionado na lista
   int posicao = 5;
   
   // Exibindo os elementos da lista na tela
   printf("Lista de compras:\n");
   
   int i;
   for (i = 0; i < posicao; i++) {
      printf("%d - %s\n", i+1, lista[i]);
   }
   
   // Lendo a entrada do usu�rio e adicionando novos elementos � lista
   while (posicao < 10) {
      char entrada[50];
      printf("\nDigite uma nova compra ou 'sair' para encerrar: ");
      fgets(entrada, 50, stdin);
      
      // Removendo o caractere '\n' que fica na entrada ap�s a tecla 'Enter'
      entrada[strcspn(entrada, "\n")] = 0;
      
      // Encerrando o loop caso o usu�rio digite 'sair'
      if (strcmp(entrada, "sair") == 0) {
         break;
      }
      
      // Adicionando a nova compra ao final da lista
      strcpy(lista[posicao], entrada);
      posicao++;
   }
   
   // Exibindo os elementos da lista atualizada na tela
   printf("\nLista de compras atualizada:\n");
   
   // Loop para exibir cada elemento da lista na tela
   for (i = 0; i < posicao; i++) {
      printf("%d - %s\n", i+1, lista[i]);
   }
   
   return 0;
}

