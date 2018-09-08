#include <stdio.h>
#include <stdlib.h>

enum meses_do_ano{Janeiro=1, Fevereiro, Marco, Abril, Maio, Junho,
Julho, Agosto, Setembro, Outubro, Novembro, Dezembro}meses;

int main()
{
    printf("\nDigite o numero do mes\n");
    scanf("%d",&meses);

    if((meses >= Janeiro) &&(meses <= Dezembro)){

        switch(meses){

    case Janeiro:
        printf("%d - Janeiro",meses);
    break;

    case Fevereiro:
        printf("%d - Fevereiro", meses);
    break;

    case Marco:
        printf("%d - Marco", meses);
    break;

    case Abril:
        printf("%d - Abril", meses);
    break;

    case Maio:
        printf("%d - Maio", meses);
    break;

    case Junho:
        printf("%d - Junho", meses);
    break;

    case Julho:
        printf("%d - julho", meses);
    break;

    case Agosto:
        printf("%d - Agosto", meses);
    break;

    case Setembro:
        printf("%d - Setembro",meses);
    break;

    case Outubro:
        printf("%d - Outrubo", meses);
    break;

    case Novembro:
        printf("%d - Novembro", meses);
    break;

    case Dezembro:
        printf("%d  - Dezembro", meses);
    break;
    }
}
else{
    printf("\nValor Invalido!!!\n");

    printf("\nOs valores validos sao: \n\n");

    for(meses = Janeiro; meses <= Dezembro; meses++)
        printf("\nMeses: %d\n",meses);
}
    return 0;
}
