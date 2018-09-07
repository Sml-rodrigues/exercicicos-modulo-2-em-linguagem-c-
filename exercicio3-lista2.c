/*

  * Exercicio 3 lista 2 logica de programçao 
  * faça um algoritmo para:
  * A) ler o numero do candidato, a idade, o sexo, a experiencia profissional
  * B) mostrar a idade media dos candidatos 
  * C) mostrar o numero toral de candidatos e candidatas
  * D) candidatos (H/M) maiores de idade e que tenha experiencia profissional
  * Data de criação: 07/07/2018
  * Autor: Samuel Rodrigues

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numCandidato, idade, cont=0, contCandidato=0, contidade=0, totalidade=0, contsexo=0;
    char sexo, expProfissional;
    float  idadeMedia=0;

    do
    {
        printf("\nDigite o numero do candidato\n");
        scanf("%d", &numCandidato);

        printf("\nQual a idade do candidato\n");
        scanf("%d", &idade);

        printf("\nDigite M para masculino e F para feminino\n");
        fflush(stdin);
        scanf("%c",&sexo);

        printf("\nEste candidato possui experiencia profissional, tecle S para sim e N para nao\n");
        fflush(stdin);
        scanf("%c",&expProfissional);

        totalidade = totalidade + idade;
        contidade = contidade +1;
        contCandidato = contCandidato +1;
        contsexo = contsexo + 1;

        printf("Tecle 1 para fazer outra leitura dos dados ou 2 para sair\n");
        scanf("%d", &cont);
    }
        while(cont==1);

        printf("\ntotal idade eh....:%d\n", totalidade);
        printf("\ntotal de canditatos:%d\n", contCandidato);
        printf("\nO total de sexo eh:%d\n", contsexo);

        idadeMedia = (totalidade / contidade);
        printf("\nA media das idade eh:.........:%.2f", idadeMedia);

        if(sexo == 'M')
        {
            printf("\nO total de candidatos do sexo Masculino eh.....:%c", sexo);
        }
        else
            {
		    (sexo == 'F');
		    printf("\nO total de candidato do sexo Feminino eh....:%c", sexo);
            }
	return 0;
}
