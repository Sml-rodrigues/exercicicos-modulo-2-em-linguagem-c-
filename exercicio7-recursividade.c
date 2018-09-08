#include <stdio.h>
#include <stdlib.h>

double fatorial(int n);

int main(void){
    int numero;
    double f;

    printf("\nDigite um numero que que deseja calcular o fatorial:\n");
    scanf("%d",&numero);

    f = fatorial(numero);
    printf("\nFatorial de %d = %.1f\n", numero,f);

    getchar();
    return 0;
}

double fatorial(int n){
    double vfat;

    if(n<=1){
        return(1);
    }
    else{
        vfat = n * fatorial(n -1);
        return(vfat);
    }
}

