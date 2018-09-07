/*

  * faca um algoritmo que avalie a satisfacao do clente
  * referente ao atendiemnto do hotel
  * clasifque-as conforme tabela:
  * Nota....: 0 ate 6.....: Classificacao....: Nao Satisfatorio
  * Nota....: 6,1 ate 7...: Classificacao....: Satisfatorio
  * Nota....: 7,1 ate 8...: Classificacao....: Bom
  * Nota....: 8,1 ate 10..: Classificacao....: Otimo
  * mostre a faixa de calssificacao
  * quantidade de votos 
  * resultado final
  * o total de hospedes para efeito da pesquisa e 20
  * Data de criação: 02/07/2018
  * Autor: Samuel Rodrigues

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, contNaoSatisfatorio=0, contSatisfatorio=0, contBom=0, contOtimo=0;
    float Nota;

        printf("\nPesquisa de satisfacao do cliente\n\n");
        printf("\nDigite de 0 a 6 para nota: Nao Stisfatorio\n\n");
        printf("\nDigite de 6.1 a 7 para nota: Satisfatorio\n\n");
        printf("\nDigite de 7.1 a 8 para nota: Bom\n\n");
        printf("\nDigite de 8.1 a 10 para nota: Otimo\n");

     for(i = 0; i<=20; i++)
    {

        printf("\nDigite uma nota\n");
        scanf("%f", &Nota);


        if(Nota<=6)
        {
            contNaoSatisfatorio =  contNaoSatisfatorio + 1;
            printf("\nNota..........:%.1f\n", Nota);
        }
        else
            if(Nota>=6.1 && Nota<=7)
        {
            contSatisfatorio = contSatisfatorio + 1;
        }
        else
            if(Nota>=7.1 && Nota<=8)
        {
            contBom = contBom + 1;
        }
        else
            if(Nota>=8.1 && Nota<=10)
        {
            contOtimo = contOtimo + 1;
        }
    }
       printf("Total de votos: %d\n\n",i);
       printf("\nNao satisfatorio..........:%.1d\n", contNaoSatisfatorio);
       printf("\nSatisfatorio..............:%.1d\n", contSatisfatorio);
       printf("\nBom.......................:%.1d\n", contBom);
       printf("\nOtimo.....................:%.1d\n", contOtimo);

    return 0;
}

