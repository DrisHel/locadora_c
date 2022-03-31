#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "locadora.c"

int main()
{

//******************DATA************************************

    time_t agora;
    char data[100];
    /* Recupera a quantidade de segundos desde 01/01/1970 */
    agora = time(NULL);
    /* Formata a data e a hora da forma desejada */
    strftime( data, sizeof(data), "%d.%m.%Y", localtime( &agora ) );

//************************CLIENTE****************************
  Cliente **vcli, *p; 
  int numero_clientes = 5;
  int numero_dvd = 5;
  int numero_locacao = 5;
  int retorno;

vcli = (Cliente **)malloc(sizeof(Cliente)*numero_clientes);

 for(int i=0;i<5;i++){
    vcli[i] = NULL;
  }
 
printf( "==================================\n");
printf("       Locadora Studio Livre!\n\n");
printf( "        Data: %s\n", data);
printf( "==================================\n");
 retorno = cadastrarCliente(vcli,numero_clientes,1,"Pedro Scooby","51999999999\n");
 (retorno)?printf("\nCadastro com Sucesso!\n"):printf("\nCadastro nao realizado!\n");

 retorno = cadastrarCliente(vcli,numero_clientes,2,"Arthur Aguiar","51991567889\n");
 (retorno)?printf("\nCadastro com Sucesso!\n"):printf("\nCadastro nao realizado!\n");

  retorno = cadastrarCliente(vcli,numero_clientes,3,"Maria Eduarda","579915678478\n");
 (retorno)?printf("\nCadastro com Sucesso!\n"):printf("\nCadastro nao realizado!\n");

 retorno = cadastrarCliente(vcli,numero_clientes,4,"Marcelo Novaes","51999999025\n");
 (retorno)?printf("\nCadastro com Sucesso!\n"):printf("\nCadastro nao realizado!\n");

 retorno = cadastrarCliente(vcli,numero_clientes,5,"Bianca Bin","51999569399\n");
 (retorno)?printf("\nCadastro com Sucesso!\n\n"):printf("\nCadastro nao realizado!\n");


mostraClientes(vcli,5);


  return 0;
}