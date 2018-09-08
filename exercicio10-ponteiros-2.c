#include <stdio.h>
#include <stdlib.h>

 void troca_valor2(int *pontA, int *pontB);

int main()
{
    int primeiro, segundo;

    printf("\nDigite um valor inteiro:\n");
    setbuf(stdin,NULL);
    scanf("%d",&primeiro);

    printf("\nDigite outro valor inteiro:\n");
    setbuf(stdin,NULL);
    scanf("%d",&segundo);

    printf("\n");
    //Mostrando os valores na ordem digitada pelo usuario.
    printf("\nOs valores foram digitados na seguinte ordem %d e %d\n\n", primeiro, segundo);

    troca_valor2(&primeiro, &segundo);
    printf("os valores trocados....: %d e %d\n",primeiro, segundo);

    getchar();
    return 0;
}

 void troca_valor2(int *pontA, int *pontB){
    int aux;

    if(*pontA < *pontB){

        aux = *pontA; // aux recebera o conteudo apontado por pontA

        *pontA = *pontB; // coloca o valor que esta no local apontado por pontB em pontA

        *pontB = aux; // pontB recebe o valor armazenado em aux

        printf(" %d -  %d - %d\n", *pontA, *pontB, aux);
    }
}
