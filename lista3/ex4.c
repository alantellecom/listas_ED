#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//letra minúscula está no intervalo de 97 até 122 na tabela ASCII
//e qualquer letra maiúscula está no intervalo de 65 até 90.

void retira_inicio_n (char *str, int n);

int main(void){

    char str[100];
    int n;

    scanf("%s", str);

    printf("\n pref ");

    scanf("%d", &n);

    retira_inicio_n (str,n);

    return 0;
}

void retira_inicio_n (char *str, int n){
 char aux[100];
 int i=0;
 int j=0;
   if (strlen(str)<n){
       printf("erro");
   }
   else{
    while(str[i]!='\0'){
        if(i>=n){
            aux[j]=str[i];
            j++;
        }       
        i++;
    }
    aux[j]='\0';
   }
   
   printf("%s", aux);  
}