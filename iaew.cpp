#include <stdio.h>
#include <string.h> //necessário para strcpy
#include <conio.h>
int main (void)
{
   char nome[15];
   strcpy(nome, "Fulano de Tal");
   printf("Nome = %s", nome);
   getch();
   return 0;
}

