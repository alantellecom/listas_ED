#include <stdio.h>

int main(void){

    int n, i;
    int prev_nums, atual_num, flag_pri; 

    while(1){
        printf("\n entre com valor: \n ");
        scanf("%d", &n);

        if (n<=0) break;
        i=1;
        atual_num = 2;// sempre começa por 2, pois 1 não é numero primo.
        while(i<=n){  // quantida n de numeros primos desejado.
            flag_pri = 1;
            prev_nums= atual_num -1; //inicia o decremento para validar se o numero sobre avaliação (atual) não é divsivel por nenhum outro anterior a ele

            while(prev_nums >= 2){// o loop vai decair até o limite dos divisores (2). No primeiro ciclo do loop em i, esse valor sempre é falso, pois prev_num=1 e com isso atual_num=2 leva flag_pri igual a 1 para o print.

                if ((atual_num%prev_nums)==0){// a cada ciclo ele valida se  atual_num divido por algum numero anterior ao atual_num te resto 0
                    flag_pri=0;// se tem resto zero não é primo, e sinaliza isso para o print. Esse loop pode ser interrompido.
                    break;
                } 
                prev_nums--;
            }
            
            if (flag_pri==1) {// se atual num passou pelo loop anterior, a flag_pri continua igula a 1, e ele é um numero primo.
                i++;// esse valor so é incrementado se flag_pri=1. Isso garante um numero n de numeros primos.
                printf("%d ; ", atual_num); 
            }
            atual_num++;// incrementa atual num, se o valor de i ainda for menor que n, todo o ciclo se repete para o proximo numero na sequencia para validar se ele é um numero primo.
            

        }

    }

    return 0;
     
}