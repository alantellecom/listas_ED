#include <stdio.h>

int main(void){

    int n, aux, flag_pri;

    while(1){
        printf("\n entre com valor: \n ");
        scanf("%d", &n);
        
        if (n<=0) break;
        
        if (n==2){
            printf("%d \n", 2);
            continue;
        }
        
        while(n >= 2){
            aux= n;
            flag_pri= 1;
            
            while(aux > 2){
                aux--;
                //ret=n%aux;
                if ((n%aux)==0){
                    flag_pri=0;
                    break;
                } 
            }

            if (flag_pri==1) printf("%d ; ", n);    
            n--;   
       } 

    }

    return 0;
     
}