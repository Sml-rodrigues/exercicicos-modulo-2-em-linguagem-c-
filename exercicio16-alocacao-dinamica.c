#include <stdio.h>
#include <stdlib.h>

void negativos(float *vet, int N);

int main(void){

     int num_componente;
     float *vet;

    do{
        printf("\n Informe o numero de componentes do vetor:\n");
        scanf("%d",&num_componente);

        if(num_componente <= 0){
            printf("\a\n Erro: digite um valor maior que zero\n");
        }
    }
    while(num_componente <= 0);

    vet = (float *) malloc(num_componente *sizeof(float));

    negativos(vet, num_componente);

    free(vet);

    return NULL;
}
void negativos(float *vet, int N){
    int i, negativos=0;

     for(i = 0; i < N; i++){
        printf("\n Digite o valor para posicao %d do vetor: ", i+1);
        scanf("%f",&vet[i]);
    }

    for(i = 0; i < N; i++){
            if(vet[i] < 0){
                negativos = negativos + 1;
        }
    }
     printf("\n Qtd de numeros negativos: %d\n",negativos);
}
