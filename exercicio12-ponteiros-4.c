#include <stdio.h>
#include <stdlib.h>

void Exercicio_4( int *A, int *B);

int main(){

    int A, B;

    printf("\nDigite uma valor para a variavel A: ");
    setbuf(stdin,NULL);
    scanf("%d",&A);
    printf("\nDigite uma valor para a variavel B: ");
    setbuf(stdin,NULL);
    scanf("%d",&B);

    printf("\nO valor original de A eh: %d\n\nOvalor original de B eh: %d\n",A,B);

    Exercicio_4(&A,&B);
    printf("\nO valor da variavel A foi modificado para: %d\n",A);
    printf("\no valor da variavel B nao sofre alteracao: %d\n",B);


    return 0;
}

void Exercicio_4( int *A, int *B){

    *A = *A + *B;
}
