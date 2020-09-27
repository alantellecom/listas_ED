#include <stdio.h>
#include <stdlib.h>
//letra minúscula está no intervalo de 97 até 122 na tabela ASCII
//e qualquer letra maiúscula está no intervalo de 65 até 90.

int* transf_i_p_1 (int *vet, int n);
void transf_i_p_2 (int *vet, int n);

int main(void){

    int n, i;
    int *res_1;
    
    printf("qtd:");

    scanf("%d", &n);

    int num[n];

    printf("num:");
    for(i=0; i<n; i++) scanf("%d", &num[i]);
    
    transf_i_p_2 (num, n);
    res_1 = transf_i_p_1 (num, n);
    
     printf("\n");

    for(i= 0; i<n ;i++) printf("%d ", res_1[i]);

    free(res_1);

    return 0;
}

int* transf_i_p_1 (int *vet, int n){
 int i=0;
 int par[n];
 int imp[n];
 int i_par=0;
 int i_imp=0;

 int *aux = (int *) malloc (sizeof(int) * n);


    while(i<n){    
        if((vet[i]%2)==0){
            par[i_par]=vet[i];
            i_par++;
        }
        else{
            imp[i_imp]=vet[i];
            i_imp++;
        }
        
        i++;
    }

    i=0;
    int j=0;

    while(i<i_par){ 
        aux[i]= par[j];
        j++;
        i++;
    }
    j=0;

    while(i<n){ 
        aux[i]= imp[j];
        j++;
        i++;
    }

    return aux;
    
}

void transf_i_p_2 (int *vet, int n){
 int i=0;
 int aux[n];
 int par[n];
 int imp[n];
 int i_par=0;
 int i_imp=0;

      while(i<n){    
        if((vet[i]%2)==0){
            par[i_par]=vet[i];
            i_par++;
        }
        else{
            imp[i_imp]=vet[i];
            i_imp++;
        }
        
        i++;
    }

    i=0;
    int j=0;


    while(i<i_par){ 
        aux[i]= par[j];
        j++;
        i++;
    }
    j=0;

    while(i<n){ 
        aux[i]= imp[j];
        j++;
        i++;
    }

    
 for(i= 0; i<n ;i++) printf("%d ", aux[i]);


}