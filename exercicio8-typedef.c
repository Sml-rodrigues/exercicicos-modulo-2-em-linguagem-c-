#include <stdio.h>
#include <stdlib.h>

int main(){
    typedef float nota;

    nota prova1=0, prova2=0, media=0;

    printf("\nInforme o valor da primeira prova:");
    scanf("%f",&prova1);
    printf("\nInforme o valor da primeira prova:");
    scanf("%f",&prova2);

    media = prova1 + prova2 / 2;

    printf("\nMedia do aluno ....: %.2f\n", media);

    return 0;
}
