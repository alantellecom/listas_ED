#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//e qualquer letra maiúscula está no intervalo de 65 até 90.
int** mult (int m1, int n1, int **mat1, int m2, int n2, int **mat2);

int main(){
    int m1,m2, n1, n2;

    printf("digite m1:");
    scanf("%d:",&m1);
    printf("digite n1:");
    scanf("%d:",&n1);
    printf("digite m2:");
    scanf("%d",&m2);
    printf("digite n2:");
    scanf("%d",&n2);

    if(n1!=m2){
    printf("não mutiplicavel \n");
    return 0;
    } 

    int **mat1 = (int **) malloc (sizeof(int *) * m1);
    for(int k=0; k< m1; k++) (mat1[k] = (int *) malloc (sizeof(int)* n1));

    int **mat2 = (int **) malloc (sizeof(int *) * m2);
    for(int k=0; k< m1; k++) mat2[k] = (int *) malloc (sizeof(int)* n2);

    printf("mat1 \n");
    for(int i=0; i<m1;i++){
    for(int j=0; j<n1;j++) scanf("%d",&mat1[i][j]);
    }

    printf("mat2 \n");
    for(int i=0; i<m2;i++){
    for(int j=0; j<n2;j++) scanf("%d",&mat2[i][j]);
    }

int ** result = mult (m1, n1, mat1, m2, n2, mat2);

for(int i=0; i<m1;i++){
    for(int j=0; j<n2;j++) printf("%d ", result[i][j]);
}

for (int i=0;i<m1;i++) free(result[i]);
free(result);

for (int i=0;i<m1;i++) free(mat1[i]);
free(mat1);

for (int i=0;i<m2;i++) free(mat2[i]);
free(mat2);

return 0;

}

int** mult (int m1, int n1, int **mat1, int m2, int n2, int **mat2){
    int i, j;

    int **result = (int **)malloc(sizeof(int *) * m1);
    for(int k=0; k< m1; k++) result[k] = (int *) malloc (sizeof(int)* n2);

    for(int i= 0 ; i< m1; i++){
        for( int j=0; j < n2;  j++){
            result[i][j]= 0;
            for (int k=0; k < m1; k++) result[i][j] = result[i][j] + mat1[i][k]*mat2[k][j];
       }
    }

    return result;
}