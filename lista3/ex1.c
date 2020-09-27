#include <stdio.h>
#include <stdlib.h>
//letra minúscula está no intervalo de 97 até 122 na tabela ASCII
//e qualquer letra maiúscula está no intervalo de 65 até 90.

void shift_troca_string (char *str);

int main(void){

    char str[100];
    scanf("%s", str);
    shift_troca_string (str);
   
    return 0;
}

void shift_troca_string (char *str){
 int i=0;
 char aux[100];
    while(str[i]!='\0'){
        if((str[i]== 97) || (str[i]== 65) ){
            aux[i]= str[i] + 25;
        }
        else
        {
            aux[i]= str[i] -1;
        }
        
        if((aux[i]>=65) && (aux[i]<=90)){
            aux[i]= 97 + (aux[i] - 65); 
        }else{
            aux[i]= 65 + (aux[i] - 97); 
        }

        i++;
    }

    aux[i]='\0';

    printf("%s", aux);
    printf("\n");    
}