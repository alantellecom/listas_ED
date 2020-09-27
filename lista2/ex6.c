#include <stdio.h>

int main(void){

     int bilhetes[20];
     int i=0, j, num1, num2, count=0, repete=0;

    printf("bilhetes: ");
    scanf("%d", &num1);

    printf("pessoas: ");
    scanf("%d", &num2);

    for(i=0; i< num2; i++) scanf("%d", &bilhetes[i]);
    
    i=1;
    while(i<= num1){
        j=1;
        count=0;
        while(j <= num2){            
            if(bilhetes[(j-1)] == i) count++; 
            j++;    
        }
        if(count >=2){
            repete += (count -1);
        }
       i++;            
    }

     printf("%d ", repete);
     printf("\n ");
        
return 0;

}
