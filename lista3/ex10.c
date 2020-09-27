#include<stdio.h>
#include<string.h>
//e qualquer letra maiúscula está no intervalo de 65 até 90.
void valida(int init_j,int end_j,int init_i, int end_i, int mat[][9]);
void main(){
    int init_j, end_j, init_i,end_i;
    int S1[9][9]= {{5, 3, 4, 6, 7, 8, 9, 1, 2},{6, 7, 2, 1, 9, 5, 3, 4, 8},{1, 9, 8, 3, 4, 2, 5, 6, 7},{8, 5, 9, 7, 6, 1, 4, 2, 3},{4, 2, 6, 8, 5, 3, 7, 9, 1},{7, 1, 3, 9, 2, 4, 8, 5, 6},{9, 6, 1, 5, 3, 7, 2, 8, 4},{2, 8, 7, 4, 1, 9, 6, 3, 5},{3, 4, 5, 2, 8, 6, 1, 7, 9}};

    
        for(int j=0; j<=2 ; j++){      
            init_j = j*3;
            end_j= init_j +2;

            for(int i=0; i<=2; i++){ 
                init_i = j*3;
                end_i= init_j +2;

                valida(init_i, end_i, init_j,end_j, S1);

            }
        }
}

void valida(int init_j,int end_j,int init_i, int end_i,int mat[][9]){
    int val[8], verd=0;

    for(int k =0; k<=8; k++) val[k]=0;

    for(int i= init_i; i<=end_i; i++){
        for( int j= init_j; j<= end_j; j++){

            for(int k =0; k<=8; k++ ) 
            if(mat[i][j]==(k+1)) {
                val[k]=1;
                break;
            }
    }  }

    for(int k=0; k<=8;k++){
        if (val[k]==0){
            printf("\n não é sudoko \n");
            break;
        }else
        {
            verd=1;
        }
    }

    if (verd==1) printf("\n é sudoko \n");

}