#include <stdio.h>
#include <stdlib.h>
//letra minúscula está no intervalo de 97 até 122 na tabela ASCII
//e qualquer letra maiúscula está no intervalo de 65 até 90.

char * codifica (char *str);

int main(void){

    char str[100];
    char *cod;

    scanf("%s", str);

    cod = codifica(str);

    printf("%s", cod);

    free(cod);

    return 0;
}

char * codifica (char *str){
 int i=0;
 int k=0;

 char *aux = (char *) malloc (sizeof(char) * 100);

    while(str[i]!='\0'){
       
        if((str[i]>=97) && (str[i]<=122)){
            if ((k%2)==0){
                aux[i]= str[i];
                k++;
            }else
            {
                aux[i]= '?';
                k++;
            }
        }else
        {
            aux[i]= str[i];
        }
        
        i++;
    }

    aux[i]='\0';

    return aux;
    
}