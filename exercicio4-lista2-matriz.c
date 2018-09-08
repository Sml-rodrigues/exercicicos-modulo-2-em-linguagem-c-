#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j;
    char cidades[5][50];
    float distancias[5][5], consumoCombs, combusNescessario;

    for(i=0; i<=4; i++){
        printf("\nEntre com os nomes das cidades\n");
        fgets(cidades[i],50,stdin);
    }
    for(i=0; i<=4; i++){

        for(j=0; j<=4; j++){

            if(i==j)
                distancias[i][j]=0;
            else{
                if(j>i){
                    printf("\nDigite as distancias entre as cidades %s e %s\n",cidades[i],cidades[j]);
                    scanf("%f",&distancias[i][j]);
                    distancias[j][i]=distancias[i][j];
                }
            }
        }
    }
        printf("\nEntre com o comsumo de combustivel do veiculo\n");
        scanf("%f",&consumoCombs);

    for(i=0; i<=4; i++){
        for(j=0; j<=4; j++){
            if(distancias[i][j] < 250 && i!=j){
                printf("\nAs cidades que contem percurso menor que 250km %s e %s\n",cidades[i],cidades[j]);
            }
        }
    }

    for(i=0; i<=4; i++){
        for(j=0; j<=4; j++){
            if(i<j){
                combusNescessario = distancias[i][j] * consumoCombs;
                printf("\nA quantidade nescessario para percorrer da cidade de origem %s ate a cidade de destino %s eh....: %.2f\n",cidades[i], cidades[j],combusNescessario);
            }
        }
    }
    return 0;
}
