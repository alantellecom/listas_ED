#include <stdio.h>

int main(void){

     int bin[20], dec, resto, result, i =0, j;

    printf("numero1: ");
    scanf("%d", &dec);

    result = dec;

    while (result > 1)
    {   resto = result%2;
        result = result/2;

        bin[i]= resto;
        i++;    
    }

    bin[i]= result;
    
    for (j=0; j <= i; j++) printf("%d;", bin[j]);
    printf("\n");      
return 0;

}
