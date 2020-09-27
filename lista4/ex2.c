#include <stdio.h>
#include <stdlib.h>

int cmp_int (const void *px, const void *py);

int main(void){
    
    int i, k=0, atual, cont=0, n; //vet[n];
    
    //scanf("%d", &n);

    int vet[4]

    //for(i = 0; i < n; i++)
    //   scanf("%d", &vet[i]);

    qsort(vet, n, sizeof(int), cmp_int);
    
    atual = vet[0];
    
    i=0;

    printf("\n");
    
    while(i<n){
        
        if(atual == vet[i]){
            
            cont++;
            
        }else{
            printf("%d : %d vezes; ",vet[i-1], cont);
            cont=0;
            atual = vet[i];
        }
        i++;
    }
      
  return 0;
}

int cmp_int (const void *px, const void *py){
  int *ix = (int *)px, *iy = (int *)py;
  if ((*ix) < (*iy)) return -1;
  if ((*ix) > (*iy)) return 1;
  return 0;
}

