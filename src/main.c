#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "locadora.c"

int main()
{
    printf("******Locadora Studio Livre!******\n\n");  
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
 printf( "Data: %s\n", data);
 retorno = cadastrarCliente(vcli,numero_clientes,1,"Pedro Scooby","51999999999\n");
 (retorno)?printf("\nCadastro com Sucesso!\n"):printf("\nCadastro nao realizado!\n");

 retorno = cadastrarCliente(vcli,numero_clientes,2,"Arthur Aguiar","51991567889\n");
 (retorno)?printf("\nCadastro com Sucesso!\n"):printf("\nCadastro nao realizado!\n");

 retorno = cadastrarCliente(vcli,numero_clientes,3,"Nathalia Santos","53996199009\n");
 (retorno)?printf("\nCadastro com Sucesso!\n"):printf("\nCadastro nao realizado!\n");

 retorno = cadastrarCliente(vcli,numero_clientes,4,"Marcelo Novaes","51999999025\n");
 (retorno)?printf("\nCadastro com Sucesso!\n"):printf("\nCadastro nao realizado!\n");

 retorno = cadastrarCliente(vcli,numero_clientes,5,"Bianca Bin","51999569399\n");
 (retorno)?printf("\nCadastro com Sucesso!\n\n"):printf("\nCadastro nao realizado!\n");

//************************DVD********************************
/* struct dvd produto;

produto.cod = 10;
strcpy(produto.titulo, "Como eu era antes de você");
produto.ano_lancamento =2015;
produto.status = 0;
produto.valor = 12.99;
    
struct dvd produto1 = {11,"Vingadores : Ultimato", 2019,1,11.90};
struct dvd produto2 = {12,"Star Wars : Os Ultimos Jedi", 2017,1,10.90};
struct dvd produto3 = {13,"Harry Potter", 2001,0,13.90};
struct dvd produto4 = {14,"007 : Sem tempo para morrer", 2021,1,13.90};
struct dvd produto5 = {15,"Caminhos da memória", 2021,0,13.90};
 */


//************************LOCACAO****************************   
   // struct locacao saida = {100,};

  
//SAÍDA NO TERMINAL - PRINT
mostraClientes(vcli,5);

// removeCliente(vcli,numero_clientes,2);

 mostraClientes(vcli,5);
         
  return 0;
}