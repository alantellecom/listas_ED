#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//letra minúscula está no intervalo de 97 até 122 na tabela ASCII
//e qualquer letra maiúscula está no intervalo de 65 até 90.
// nuemros 0-9 de 48 a 57

void shift_troca_string (char *str);

int main(void){

    char str[100];

    scanf("%s", str);

    shift_troca_string (str);
   
    return 0;
}

void shift_troca_string (char *str){
 int i=0;
 int num=0; //1
 int upcase=0; //1
 int downcase=0; //1
 int espc_char=0; //1
 char aux[100];

    if(strlen(str)<8) {
            printf("ruim");
    }
    else{
        while(str[i]!='\0'){
            if((str[i]>= 48) && (str[i]<= 57) ) num++;
            else if ((str[i]>= 97) && (str[i]<= 122)) downcase++;
            else if ((str[i]>=65) && (str[i]<=90)) upcase++;
            else espc_char++;
            i++;
        }

        if( num >0 && downcase >0 && upcase>0 && espc_char >0){
            printf("senha boa");
        }else
        {
            printf("senha ruim");
        }
    }

}