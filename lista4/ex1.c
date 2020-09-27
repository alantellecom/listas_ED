#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//e qualquer letra maiúscula está no intervalo de 65 até 90.

 struct aluno
    {
        int prob[100];
    };
    

int main(){
    int  i=0,j=0,k=0,q=0, n_alunos, n_problemas, soma_1=0, cond_1=1, soma_2=0, soma_3=0;
    struct aluno teste[2];

    printf("digite n alunos:");
    scanf("%d:", &n_alunos);
    printf("digite n problemas:");
    scanf("%d:", &n_problemas);

    int aux_prob[n_problemas-1];
    for (i=0; i<n_problemas;i++) aux_prob[i]=0;
    int aux_alu[n_alunos-1];

    for(i=0; i< (n_alunos); i++){
        printf("alunos %d: \n", (i+1) );
        for(j=0; j<(n_problemas); j++){
            printf("problema %d:", (j+1));
            scanf("%d", &teste[i].prob[j]);
        }
    }

     for(i=0; i< (n_alunos); i++){
        for(j=0; j<(n_problemas); j++){
            soma_1 = soma_1 + teste[i].prob[j];
        }

        for(int k=0; k < (n_problemas); k++){   
            if(teste[i].prob[k]==1) aux_prob[k] = 1;
        }

        if(soma_1<n_problemas) cond_1++;
    }

    printf("\n \n");

//
        if(cond_1==n_alunos) printf("1 \n");

//
        for(int i=0; i< (n_problemas); i++) soma_2 =soma_2 + aux_prob[i];
        if(soma_2==n_problemas) printf("2 \n");

//        

        for(j=0; j<(n_problemas); j++){
            for(i=0; i< (n_alunos); i++){
                soma_3 = soma_3 + teste[i].prob[j];
            }
            aux_alu[j] = soma_3;
        }

        int cond_3=0;
        for(int i=0; i< (n_alunos); i++) 
            if(aux_alu[i]==n_problemas) {
                cond_3=1;      
            }
        if(cond_3==0) printf("3 \n");
        

//
        int cond_4=0;
        for(int i=0; i< (n_alunos); i++) 
            if(aux_alu[i]==0) {
                cond_4=1;      
            }
        if(cond_4==0) printf("4 \n");



        


return 0;

}