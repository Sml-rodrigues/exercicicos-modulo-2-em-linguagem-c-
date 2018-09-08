#include <stdio.h>
#include <stdlib.h>

void ler_notas(float *n1, float *n2);

void clacular_media(float *n1, float *n2, float *simples, float *ponderada);

void main(){
    float nota1, nota2, res_media_sim, res_media_pond;

    ler_notas(&nota1, &nota2);
    printf("\nO valor digitado na primeira nota: %.2f\nO valor digitado na segunda nota: %.2f\n",nota1, nota2);

    clacular_media(&nota1, &nota2, &res_media_sim, &res_media_pond);
    printf("\nresultado da media simples eh....: %.2f\n",res_media_sim);
    printf("\nResultado da media Ponderada eh..: %.2f\n",res_media_pond);

    return(0);
}

void ler_notas(float *n1, float *n2){

    do{
        printf("\nEntre com a primeira nota\n");
        setbuf(stdin,NULL);
        scanf("%f",n1);

        if(*n1 < 0 || *n1 > 10)
            printf("\nEntre com uma nota valida\n");
    }
    while(*n1 < 0 || *n1 > 10);

    do{
        printf("\nEntre com a segunda nota\n");
        setbuf(stdin,NULL);
        scanf("%f",n2);

        if(*n2 < 0 || *n2 > 10)
            printf("\nEntre com uma nota valida\n");
    }
    while(*n2 < 0 || *n2 > 10);
}

void clacular_media(float *n1, float *n2, float *simples, float *ponderada){

    *simples = (*n1 + *n2)/2;

    *ponderada = (*n1 + (*n2 * 2))/3;
}

