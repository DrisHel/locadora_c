#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct data
{
    int dia,mes,ano;

}Data;

typedef struct cliente
{
    int cod;
    char nome[15];
    int idade;
    char telefone [30];

}Cliente;

typedef struct dvd
{
    int cod;
    char titulo[20];
    int ano_lancamento;
    int status;
    double valor;

}Dvd;

typedef struct locacao
{
    int cod;
    Cliente *cliente;
    Dvd *dvd;
    Data locacao, devolucao;
    double totalLocacao;

}Locacao;


Locacao emprestimo(Cliente *cliente,Dvd *dvd, Data *locacao, Data *devolucao){
 Locacao l;
 
return l;
}


void imprimeLocacao(){

}


 int main()
{
    printf("******Locadora Studio Livre!******\n\n");  
//******************DATA************************************
    struct data primeiraData;

    primeiraData.ano = 2022;
    primeiraData.mes = 3;
    primeiraData.dia = 27;
//************************CLIENTE****************************
struct cliente um;

  um.cod = 1;
  um.idade=31;
  strcpy(um.nome,"Joao Carlos");
  strcpy(um.telefone, "53991111111");

  struct cliente primeiroCliente = {2,"Juliano Silva",19,"53999999999"};

//************************DVD********************************
struct dvd produto;

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



//************************LOCACAO****************************   
   // struct locacao saida = {100,};


//LEITURA DA STRUCT
   printf("\tData: %d/%d/%d\n ", primeiraData.dia,primeiraData.mes,primeiraData.ano);
    printf("\tCodigo: %d \n",um.cod);
    printf("\tCliete: %s \n",um.nome); 
    printf("\tIdade: %d \n",um.idade);
    printf("\tTelefone: %s \n\n",um.telefone);
  
//SAÍDA NO TERMINAL - PRINT
    printf("\tCodigo: %d \n",primeiroCliente.cod);
    printf("\tCliente: %s \n",primeiroCliente.nome); 
    printf("\tIdade: %d \n",primeiroCliente.idade);
    printf("\tTelefone: %s \n",primeiroCliente.telefone);
         
  return 0;
}