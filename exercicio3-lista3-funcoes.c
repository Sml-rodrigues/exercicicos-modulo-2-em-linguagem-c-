#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//-----------------PROTOTIPOS DAS FUNCOES----------------------------------
float calcula_imposto(float preco_unitario, float imposto);

//---------------------------MAIN------------------------------------------

int main()
{
    int pais_de_origem;
    float preco_unitario, imposto;
    char meio_de_transporte, cargas_perigosas;

    do
    {
        //esta passando tanto nº maior quanto menor que zero
        printf("\nEntre com o valor unitario do produto\n");
        scanf("%f",&preco_unitario);

        //if(preco_unitario <= 0)
        //{
            //printf("\aDigite um valor valido!\n");
       // }

    }while(preco_unitario > 1);// esta aceitando zero como numero valido

    do
    {
        printf("\n\t\tDigite: \n......: 1 para produtos do EUA\n......: 2 para produtos do MEXICO\n......: 3 para produtos de Outros Paises\n");
        scanf("%d", &pais_de_origem);

        if(pais_de_origem > 3)
        {
            printf("\a\nDigite um numero valido!\n");
        }

    }while(pais_de_origem > 3);// esta aceitando zero como numero valido

   //do
   //{
        printf("\n\t\tDigite: \n......: T para transporte Terrestre\n......: F para transporte Fluvial\n......: A para transporte Aereo\n");
        scanf("%c",meio_de_transporte);
        meio_de_transporte = toupper(meio_de_transporte);

   //}while();

   printf("\n\t\tDigite:\n......: S ou N para Carga Perigosa\n");

   printf("\nPreco unitario ate.........: 100.00 R$\nPercentual de imposto de...: 5%% sobre o valor unitario\n");
   printf("Preco unitario acima de......: 100.00 R$\nPrecentual de imposto de...: 10%% sobre o valor unitario\n");

    return 0;
}

//---------------------------FUNCOES------------------------------------

float calcula_imposto(float preco_unitario, float imposto)
//falta chamar esta funcao na main
{
    float res_calc_imposto;

    if(preco_unitario <=100)
    {
        imposto = 0.05;
        res_calc_imposto = preco_unitario * imposto;
    }
    else
        if(preco_unitario >100)
    {
        imposto = 0.10;
        res_calc_imposto = preco_unitario * imposto;
    }
    return(res_calc_imposto);
}
