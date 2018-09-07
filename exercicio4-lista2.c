/*

  * Exercicio 4 lista 2 logica de programçao 
  * crie um algoritmo que leia um numero entre 2 e 20
  * gerando uma tabela com a seguinte configuracao
  * Ex: digite um numero: 4
  * 1
  * 12
  * 123
  * 1234
  * 123
  * 12
  * 1
  * Data de criação: 07/07/2018
  * Autor: Samuel Rodrigues

*/

#include<stdlib.h>
#include<stdio.h>
int main (void)
{
    int codigo,i,j;
    
      //recebe e valida os n�meros
      do
      {
          puts("Digite um numero entre 2 e 20 por favor.");
          puts("Digite o valor");
          scanf("%d",&codigo);
          printf("\n");
      }
      while((codigo<2) || (codigo>20));
      // repete enquanto codigo < 2 ou codigo >20
      
      
      //Montando a metade superior
      for(i = 1; i <= codigo; i++)//I controla a linha
      {
        for (j = 1; j <= i; j++)//j controla os valores e escrever em cada linha         
        {
            printf("%d",j);
        }          
        printf("\n");
      }
       
       // montando a metade inferior
      for(i = codigo-1; i >= 1; i--)
      {
         for(j = 1; j<= i; j++)
         {
            printf("%d",j);
         } 
         printf("\n");
      }
      printf("\n");
      return (0); 
}         
        
