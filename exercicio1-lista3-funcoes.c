#include<stdio.h>
#include<stdlib.h>

//-----------------------------------prototipos das funcoes------------------------------------------

float convertegramas(float peso_kilo);

float calculaPrecoTotal(float precogramas, float pesogramas);

float calculaImposto(float Alicota, float precototal);

float valorFinal(float precototal, float Imposto);

//-----------------------------------main-----------------------------------------------------------

int main()
{
	int codPais, codProduto;
	float Alicota, precogramas, pesogramas, peso_kilo, precototal, Imposto, valfinal;

	printf("\nDigite o peso em kilo do produto\n");
    scanf("%f", &peso_kilo);

	pesogramas = convertegramas(peso_kilo);

	printf("\no valor do peso em Gramas eh........................:%.2f\n", pesogramas);

	do
	{
	    printf("\nDigite o codigo entre 1 a 3 para o pais de origem\n");
	    scanf("%d", &codPais);

		if(codPais > 3)
		{
		    printf("\nDigite um codigo valido para o pais\n");
		}
	}while(codPais > 3);

		if(codPais == 1)
		{
		    do
		    {
		        printf("\nDigite entre 1 a 4 para o codigo deste produto\n");
                scanf("%d", &codProduto);
            if(codProduto >= 1 && codProduto <= 4)
                {
                    precogramas = 10;
                    Alicota = 0.0;
                    printf("\nO valor da alicota deste produto eh........:%.2f\n", Alicota);
                    printf("\nO preco deste produto por grama eh.........:%.2f\n", precogramas);
                }
                else
                    printf("\nDigite um valor valido\n");
            }while(codProduto <  1 || codProduto > 4);
                }

                if(codPais == 2)
                {
                    do
                {
                    printf("\nDigite entre 5 a 7 para o codigo deste produto\n");
                    scanf("%d", &codProduto);

                if(codProduto >= 5 && codProduto <= 7)
                {
                    precogramas = 25;
                    Alicota = 0.15;
                    printf("\nO valor da alicota deste produto eh........:%.2f\n", Alicota);
                    printf("\nO preco deste produto por grama eh.........:%.2f\n", precogramas);
                }
                else
                    printf("\nDigite um valor valido\n");
                }while(codProduto <  5 || codProduto > 7);
                }

                if(codPais == 3)
                {
                do
                {
                    printf("\nDigite entre 8 a 10 para o codigo deste produto\n");
                    scanf("%d", &codProduto);

                    if(codProduto >= 8 && codProduto <= 10)
                    {
                            precogramas = 35;
                            Alicota = 0.25;
                            printf("\nO valor da alicota deste produto eh:%.2f\n", Imposto);
                            printf("\nO preco deste produto por grama eh.:%.2f\n", precogramas);
                    }
                    else
                        printf("\nDigite um valor valido\n");
                }while(codProduto <  8 || codProduto > 10);
                }
                precototal = calculaPrecoTotal(precogramas, pesogramas);
                printf("\nO preço do total do produto comprado eh........:%.2f\n",precototal);

                Imposto = calculaImposto(Alicota, precototal);
                printf("\nO valor do imposto do produto eh...............:%.2f\n",Imposto);

                valfinal = valorFinal(precototal, Imposto);
                printf("\nO valor de repasse ao consumidor eh............:%.2f\n",valfinal);


return (0);

}

//-----------------------------------funcoes----------------------------------------------

float convertegramas(float peso_kilo)
{
    float resultadogr;
    resultadogr = peso_kilo * 1000;
    return(resultadogr);
}

float calculaPrecoTotal(float precogramas, float pesogramas)
{
	float total;
	total = precogramas * pesogramas;
	return(total);
}

float calculaImposto(float Alicota, float precototal)
{
    float restotal;
    restotal = precototal * Alicota;
    return(restotal);
}

float valorFinal(float precototal, float Imposto)
{
    float precoreal;
    precoreal = precototal + Imposto;
    return(precoreal);
}

