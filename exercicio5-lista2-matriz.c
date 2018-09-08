#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N[3][3],j,i;

    for(i=0; i<=2; i++)
    {
        printf("\nEntre com os valores das linhas %d\n",i);
        for(j=0; j<=2; j++)
        {
            printf("\nEntre com os valores das colunas %d\n",j);
            scanf("%d",&N[i][j]);
        }
    }
        for(i=0; i<=2; i++)
        {
            for(j=0; j<=2; j++)
            {
                if(i == j)
                {
                    printf("\nA diagonal da matriz eh....: %d\n", N[i][j]);
                }
            }

            printf("\n----------------------------------------------------\n");

        }

        for(i=0; i<=2; i++)
        {
            for(j=0; j<=2; j++)
            printf("\nOs valores da matriz eh....: %d\n",N[i][j]);
        }
return 0;
}
