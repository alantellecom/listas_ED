#include <stdio.h>

int main(void){

    int n, resize_n, i, j;

    printf("n: ");
    scanf("%d", &n);

    resize_n = n-2;
    int num_aux[resize_n];

    for (i=0; i<= resize_n; i++) num_aux[i]=(i+2);
    
    for (i=0; i<= resize_n; i++){
        if (num_aux[i]!=0){
            for (j=(i+1); j<= resize_n; j++ ){
                if (!(num_aux[j]%(num_aux[i]))) num_aux[j]=0;
            }
        }
    }

    for (i=0; i<= resize_n; i++){
        if (num_aux[i]!=0) printf("%d;",num_aux[i]);
    } 

    printf("\n");

    return 0;
}