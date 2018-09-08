#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i;

//---------------INICIO DA ESTRUTURA LISTA ENCADEADA--------------------
struct listaligada{
int valor;
char nome[40];
struct listaligada *proximo;//cria um ponteiro que indica o proximo elemento da lista
}inicio, *no;

//---------------INICIALIZANDO A LISTA ENCADEADA---------------------------
inicio.proximo = NULL;//indica que a lista esta vazia
no = &inicio;//no aponta para o inicio da lista

//---------------ENTRADA DE DADOS DA LISTA----------------------------------
for(i=1; i<=10; i++){
    no->proximo = (struct listaligada *) malloc(sizeof(struct listaligada));

    //atribui ao no o valor de no proximo
    no->valor = i;

     printf("\nDigite um nome\n");
     fgets(no->nome,40,stdin);

    //atribui o valor do menbro ao no
    no->valor = i;

    //atribui no->proximo NULL para indicar que e o novo final da lista
    no->proximo = NULL;
}
//----------------------PERCORRENDO E EXIBINDO A LISTA----------------------

no = inicio.proximo;//inicio.proximo aponta para o primeiro elemento da lista

while(no !=NULL){//emquanto o no for diferente de NULL entra no loop
        printf("%d",no->valor);//exibe o valor do elemento
        printf("%s",no->nome);
        no = no->proximo;//atribuiem no o endereco do proximo elemento da lista

}
getchar();

return (0);
}
