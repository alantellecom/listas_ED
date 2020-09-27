#include <stdio.h>

int main(void){

    int g, resize_n, i=0, j;

    printf("grau: ");
    scanf("%d", &g);

    int coef[g];
    int graus[g];
    int dev[g-1];
    int integ[g+1];

    while(i<=g){
        printf("coeficiente grau %d:",i);
        scanf("%d", &coef[i]);
        i++;
    }

    for (i=0; i<= g; i++) graus[i]=i;


    printf("integral \n");
    
    for (i=-1; i<=g; i++){

        if (i==-1){
            integ[0]= 0;
            printf("%d;", integ[0]);
            continue;
        } 

        integ[i]= coef[i]/(graus[i]+1);
        
        printf("%d;", integ[i]);
    }

    printf("\n");

    printf("derivada \n");
    
    for (i=0; i<=(g-1); i++){
        dev[i]= coef[i+1]*graus[i+1];
        printf("%d;", dev[i]);
    }
    
    
    printf("\n");

    return 0;
}