#include<stdio.h>
#include<string.h>
//e qualquer letra maiúscula está no intervalo de 65 até 90.
void main(){
    char S1[100], S2[100];
    int i,c=0;
    printf("digite a string S1\n");
    scanf("%s", S1);
    printf("digite a string S2\n");
    scanf("%s", S2);

    int lenS1= strlen(S1);
    int lenS2 = strlen(S2);
    
    if(lenS1!=lenS2){
        printf("tamanhos diferente\n");
    }else{
        for(i=0;i<lenS1;i++){

            if((S1[i]>=65) && (S1[i]<=90)) S1[i]= 97 + (S1[i] - 65); 
            if((S2[i]>=65) && (S2[i]<=90)) S2[i]= 97 + (S2[i] - 65); 
                
                if(S2[i]==S1[i]){
                    c++;
                }           
        }
    }
    
    if(c==lenS2) printf("eh igual\n");
    else printf("nao he igual\n");
    
}