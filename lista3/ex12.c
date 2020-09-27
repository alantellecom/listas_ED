#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//e qualquer letra maiúscula está no intervalo de 65 até 90.
char** mult (char *wrd);

int main(){
    int  w=0, i=0;
    char wrd[100], **result;

    printf("digite wrd:");

    scanf("%s:", wrd);

    result=  mult (wrd);

  while(wrd[i]!='\0'){ 
       if(wrd[i]=='/'){
           w++;
       }
       i++;
  }

for(int i=0; i<(w+1);i++){
    printf("%s \n",result[i]);
}

for (int i=0;i<(w+1);i++) free(result[i]);
free(result);

return 0;

}

char** mult (char *wrd){
    int i=0, j=0,l=0,m=0;
    char aux[100];

    while(wrd[i]!='\0'){ 
       if(wrd[i]=='/'){
           l++;
       }
       i++;
    }
    char **lista = (char **) malloc (sizeof(char *) * (l+1));
    for(int m=0; m< (l+1); m++) (lista[m] = (char *) malloc (sizeof(char)* 100));
    m=0;
    for(int i=0; i<(l+1); i++){
        j=0;
        while(wrd[m]!='\0'){
          if(wrd[m]!='/'){
            lista[i][j]=wrd[m];
            j++;
            lista[i][j]='\0';
          }else
          {
            m++;
            break;     
          }
            m++;
        }
    }
    return lista;
}