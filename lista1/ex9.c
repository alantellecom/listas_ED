#include <stdio.h>

int main(void){

    int num, i=1, num_now, num_prev, fib;

    printf("num: ");
    scanf("%d", &num);

   
    while(i <= num){
        if((num%i) == 0){
            printf("%d;",i);
        }
        i++;
    }
    printf("\n");

    return 0;
}