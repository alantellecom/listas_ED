#include <stdio.h>
#include <stdlib.h>

//void qsort(void* vet, int nelem, int tam_bytes, int (*cmp) (const void *, const void *));


typedef struct data{
  int ano;
} TD;

typedef struct prod{
  int cod; float preco; 
  TD *valid;
} TPROD;

/*typedef struct candidato{
  int num_insc;
  float nota;
}TCAND;*/


//a ordenação de n produtos na prateleira - void ordena1 (TPROD **prat, int n); - de
//acordo com os seguintes critérios:
//1. em ordem crescente de código;
//2. se dois produtos possuem o mesmo código, o critério de desempate é a data de validade,
//isto é, o produto que possui a data de validade mais próxima aparecerá primeiro na
//prateleira; e
//3. se os empates persistirem, o critério de desempate é o preço, em ordem decrescente.

int cmp(const void *x, const void *y);

//void ordena1 (TPROD **prat, int n);

int main(void){
  int n;
  scanf("%d", &n);
  if(n > 0){
    TPROD vet[n];
    int i;
    for(i = 0; i < n; i++) scanf("%d%f%d", &vet[i].cod, &vet[i].preco, &vet[i].valid->ano);// Erro desconhecido....
 
    printf("Depois da ordenacao...\n");
    qsort(vet, n, sizeof(TPROD), cmp);
    for(i = 0; i < n; i++) printf("%d: %d: %f:\n", vet[i].cod, vet[i].valid->ano,vet[i].preco);    
  }
  return 0; 
}

int cmp(const void *x, const void *y){
  TPROD *px = (TPROD *) x, *py = (TPROD *) y;
  if(px->cod < py->cod) return -1;
  if(px->cod > py->cod) return 1;
  if(px->valid->ano < py-> valid->ano) return -1;
  if(px->valid->ano > py-> valid->ano) return  1;
  if(px->valid->ano > py-> preco) return -1;
  if(px->valid->ano < py-> preco) return  1;
  return 1;
}

void ordena1 (TPROD **prat, int n){


}
