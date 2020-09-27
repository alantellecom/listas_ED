#include <stdio.h>

int main(void){

     char num1[20], num2[20];
     int i=0, l=0, comb=1;

    printf("numero1: ");
    scanf("%s", num1);

    while (num1[l] != '\0')
    {
        l++;
    }


  if (l%2){

       while(i < (l-1)/2 ){
       
        if((num1[i] != num1[(l-1)-i])){
            printf("Não é  \n");
            return 0;
        }
        i++;    
       } 
        
     printf("É  \n");

  }else{

        while(i < l/2 ){
       
        if((num1[i] != num1[(l-1)-i])){
            printf("Não é  \n");
            return 0;
        }
        i++;    
       } 
        
     printf("É  \n");

     

  }
        
return 0;

}
