#include <stdio.h>

int main(void){

     char num1[20], num2[20];
     int i=0, j, comb;

    printf("numero1: ");
    scanf("%s", num1);

    printf("numero1: ");
    scanf("%s", num2);

    while(num1[i] != '\0'){
        j=0;
        comb=0;
        while(num2[j] != '\0'){
            
            if((num1[i] == num2[j])){
                num2[j]= 'x';
                comb = 1;
                break;
            } 
            j++;    
        }
        if (comb==0){
            printf("Não é combinação \n");
            return 0;
        }
       i++;            
    }

     printf("É combinação \n");
        
return 0;

}
