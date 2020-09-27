#include<stdio.h>
#include<string.h>
//e qualquer letra maiúscula está no intervalo de 65 até 90.
void main(){
    char S1[100], S2[100];
    int i,j, k, c=0;
    printf("digite a string S1\n");
    scanf("%s", S1);
    printf("digite a string S2\n");
    scanf("%s", S2);

    int lenS1= strlen(S1);
    int lenS2 = strlen(S2);
    
    if(lenS1<=lenS2){
        printf("S2 nao he substring de S1\n");
    }else{
        for(i=0;i<lenS1;i++){
            k=i;
            for(j=0;j<lenS2;j++){
                if((S1[k]>=65) && (S1[k]<=90)) S1[k]= 97 + (S1[k] - 65); 
                if((S2[j]>=65) && (S2[j]<=90)) S2[j]= 97 + (S2[j] - 65); 
                
                if(S2[j]==S1[k]){
                    c++;
                    k++;
                }else
                {
                    break;
                }               
            }
            if(c==lenS2){
                break;
        }
    }
    
    if(c==lenS2)
        printf("S2 he string de S1\n");
    else
        printf("S2 nao he string de s1\n");
    }
}