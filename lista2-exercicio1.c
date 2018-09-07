/*

  * Exercicio 1 lista 2  
  * Calcular a conta de um hospede ficticio, considere:
  * leitura do nome do hospede 
  * tipo de apartamento determinado segundo tabela
  * Apartamento tipo....:A....:valor da diaria....:150,00 R$
  * Apartamento tipo....:B....:valor da diaria....:100,00 R$
  * Apartamento tipo....:C....:valor da diaria....:75,00 R$
  * Apartamento tipo....:D....:valor da diaria....:50,00 R$
  * O numero de diarias utilizada pelo hospede
  * E o valor do consumo interno do hospede
  * Data de criação: 05/07/2018
  * Autor: Samuel Rodrigues

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{

    int QtdDias, i;
    char Nome[20], TipoAp;
    float ValorDiarias, ConsumoInterno, TotalDiarias, SubTotal, TaxaServico, TotalPagar;

    for(i=0; i<=3; i++)
    {

    printf("\nDidite o nome do hospede\n\n\n");
    scanf("%s", &Nome[30]);

    printf("\nEntre com o tipo de Apartamento\n\n\n");
    fflush(stdin);
    scanf("%c", &TipoAp);

    printf("\nEntre com a quantidade de dias hospedado\n\n\n");
    scanf("%d", &QtdDias);

    printf("\ntDigite o valor do consumo do hospede\n\n\n");
    scanf("%f", &ConsumoInterno);


    switch(TipoAp)
    {
       case 'A':
       case 'a':
        ValorDiarias = 150.00;
        printf("\nO Valor de uma diaria para este tipo de Apartemento eh: %.2f\n\n\n", ValorDiarias);
       break;
       case 'B':
       case 'b':
        ValorDiarias = 100.00;
        printf("\nO Valor de uma diaria para este tipo de Apartemento eh: %.2f\n\n\n", ValorDiarias);
       break;

       case 'C':
       case 'c':
        ValorDiarias = 75.00;
        printf("\nO Valor de uma diaria para este tipo de Apartemento eh: %.2f\n\n\n", ValorDiarias);
       break;

       case 'D':
       case 'd':
        ValorDiarias = 50.00;
        printf("\nO Valor de uma diaria para este tipo de Apartemento eh: %.2f\n\n\n", ValorDiarias);
        break;
    }
        TotalDiarias = (QtdDias * ValorDiarias);

        SubTotal = (TotalDiarias + ConsumoInterno);

        TaxaServico = (SubTotal * 0.1);

        TotalPagar = (SubTotal + TaxaServico);


 printf("\nO nome do hospede...........................:%s\n\n\n",Nome);
 printf("\nO Valor a pagar pelas Diarias eh............:R$ %.2f\n\n\n",TotalDiarias);
 printf("\nO SubTotal a pagar eh.......................:R$ %.2f\n\n\n", SubTotal);
 printf("\nO valor da taxa de servico eh...............:R$ %.2f\n\n\n", TaxaServico);
 printf("\nO Total a pagar eh..........................:R$ %.2f\n\n\n",TotalPagar);

    }

    return 0;
}
