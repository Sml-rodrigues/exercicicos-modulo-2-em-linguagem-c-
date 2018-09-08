#include <stdio.h>
#include <stdlib.h>

void exercicio_7(int *inteiro, float *real, char *caracter);

int main(){

    int inteiro;
    float real;
    char caracter;

    printf("\n Digite um numero inteiro\n");
    setbuf(stdin,NULL);
    scanf("%d",&inteiro);

    printf("\n Digite um numero real (ponto flutuante)\n");
    setbuf(stdin,NULL);
    scanf("%f",&real);

    printf("\n Digite um caracter\n");
    setbuf(stdin,NULL);
    scanf("%c",&caracter);

    printf("\n Voce digitou um numero inteiro = %d\n",inteiro);
    printf("\n Voce digitou um numero real = %f\n",real);
    printf("\n Voce digitou Um caracter = %c\n ",caracter);

    exercicio_7(&inteiro, &real, &caracter);
    printf("\n O numero inteiro modificado eh....: %d\n",inteiro);
    printf("\n O numero real modificado eh.......: %.2f\n",real);
    printf("\n O  caracter modificado  eh........: %c\n",caracter);

    getchar();
    return 0;
}

void exercicio_7(int *inteiro, float *real, char *caracter){



    *inteiro = 10;
    *real = 5.5;
    *caracter = 'Z';

}
