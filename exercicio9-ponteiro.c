#include <stdio.h>
#include <stdlib.h>


int main(void){

    float *v;
    int i, num_componentes;

    printf("\nInforme o numero de componentes do vetor\n");
    scanf("%d",&num_componentes);

    v = (float *) malloc(num_componentes * sizeof(float));

    for(i=0; i < num_componentes; i++){
        printf("\nDigite o valor para posicao %d do vetor", i+1);
        scanf("%f",&v[i]);
    }

    printf("\nVALORES DO VETOR DINAMICO\n\n\n");

    for(i=0; i < num_componentes; i++){

        printf("\n%.2f\n",v[i]);
    }
    free(v);
    return(0);

}
