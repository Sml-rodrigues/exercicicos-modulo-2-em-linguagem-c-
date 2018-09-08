#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1416

void calc_esfera(float R, float *area, float *volume);

int main(){

    float R, res_area, res_volume;

    printf("\n Entre com um valor do raio:\n");
    setbuf(stdin,NULL);
    scanf("%f",&R);

    calc_esfera(R, &res_area, &res_volume);
    printf("\n A  aera da esfera eh....: %.2f\n",res_area);
    printf("\n O volume da esfera eh...: %.2f\n",res_volume);


    return 0;
}

void calc_esfera(float R, float *area, float *volume){


    *area = 4 * pi * pow(R,2);

    *volume = 4/3 * pi * pow(R,3);

}
