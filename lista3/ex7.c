#include<stdio.h>
#include<string.h>
//e qualquer letra maiúscula está no intervalo de 65 até 90.
void main(){
    char S1[100], S2[100], aux[100], max[100];
    int i=0,j=0, k, q=0, maior=0, c=0;
    printf("digite a string S1\n");
    scanf("%s", S1);
    printf("digite a string S2\n");
    scanf("%s", S2);

    int lenS1= strlen(S1);
    int lenS2 = strlen(S2);
    
        while(S1[i]!='\0'){      
            q=i;
            j=0;
            k=0;
            while(S2[j]!='\0'){ 
                if((S1[q]==S2[j]) ){
                    aux[k]= S1[q];
                    q++;
                    k++;
                }else
                {
                    if(k > maior){
                        maior = k; 
                        aux[k]= '\0';
                        k=0;
                        strcpy(max,aux);
                    }
                }
                j++;               
            }
            i++;
        }

    printf("%s", max);

}