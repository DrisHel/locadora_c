#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cliente
{
    int cod;
    char nome[15];
    char telefone [14];

}Cliente;

typedef struct dvd
{
    int cod;
    char titulo[15];
    int ano_lancamento;
    int status;
    int valor;

}Dvd;

int cadastrarCliente(Cliente *vetor_clientes[], int n_elementos, int cod, char nome[],char telefone[]){
    Cliente *novo = (Cliente *)malloc(sizeof(Cliente));    
    for(int i=0;i<n_elementos;i++){
      if(vetor_clientes[i] == NULL){
        novo->cod = cod;
        strcpy(novo->nome,nome);
        strcpy(novo->telefone,"53999445566");
        vetor_clientes[i] = novo;
        return 1;
      }
    }
    return 0;
}



void mostraClientes(Cliente **vetor_clientes, int n_elementos){
  Cliente *aux = NULL;
  for(int i=0;i<n_elementos;i++){
      if(vetor_clientes[i] != NULL){
        aux = vetor_clientes[i];
        printf("\n ***********************************\n");
        printf("\tCodigo: %d  \n",aux->cod);
        printf("\tCliente: %s \n",aux->nome);
        printf("\tTelefone: %s \n",aux->telefone);
        
      }
  }
}

