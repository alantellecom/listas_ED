#include <stdio.h>

int main(void){

    int qtd, i=1, maior=0, num, prev_num , cont=1;

    printf("qtd: ");
    scanf("%d", &qtd);

    printf("numero: ");
    scanf("%d", &num);
    prev_num = num;
    i++;

    while(i<= qtd){

        printf("numero: ");
        scanf("%d", &num);

        if (num < prev_num){
            cont++;
        }
        prev_num = num;
        i++;      
    }

    printf("%d \n", cont);

    return 0;
}