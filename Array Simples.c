#include <stdio.h> // Biblioteca de entrada e saída
#include <string.h> // Biblioteca de strings

int main() {
   // Declarando um array de strings com tamanho 10
   char lista[10][50];
   
   // Inicializando os elementos do array com strings
   strcpy(lista[0], "Arroz");
   strcpy(lista[1], "Feijão");
   strcpy(lista[2], "Macarrão");
   strcpy(lista[3], "Carne");
   strcpy(lista[4], "Frutas");
   
   // Contador para controlar a posição do próximo elemento a ser adicionado na lista
   int posicao = 5;
   
   // Exibindo os elementos da lista na tela
   printf("Lista de compras:\n");
   
   int i;
   for (i = 0; i < posicao; i++) {
      printf("%d - %s\n", i+1, lista[i]);
   }
   
   // Lendo a entrada do usuário e adicionando novos elementos à lista
   while (posicao < 10) {
      char entrada[50];
      printf("\nDigite uma nova compra ou 'sair' para encerrar: ");
      fgets(entrada, 50, stdin);
      
      // Removendo o caractere '\n' que fica na entrada após a tecla 'Enter'
      entrada[strcspn(entrada, "\n")] = 0;
      
      // Encerrando o loop caso o usuário digite 'sair'
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

