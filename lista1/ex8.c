#include <stdio.h>

int main(void){

    int pos, i=1, num_now, num_prev, fib;

    printf("num: ");
    scanf("%d", &pos);

    num_prev=0;
    num_now=1;
   
    while(i <= pos){

        fib = num_prev + num_now;
        num_prev = num_now;
        num_now = fib;
        
        i++;
    }
    printf("\n%d\n", fib);

    return 0;
}