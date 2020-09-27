#include <stdio.h>

int main(void){
       int casos, i=1,  num_1, num_2, cont_num1 , cont_num2, mdc;
       
        printf("num1: ");
        scanf("%d", &num_1);
        printf("num2: ");
        scanf("%d", &num_2);
 
        cont_num1 =1;
        
        mdc =0;

        while (cont_num1<= num_1){ 
            if((num_1%cont_num1 ==0)) {
                cont_num2 =1;
                while(cont_num2<= cont_num1){

                    if(((num_2%cont_num2) == 0) & (cont_num1==cont_num2)){ 
                        mdc=cont_num2;
                        cont_num2++;
                    }
                    else{
                        cont_num2++;
                    }
                }               
            }           
            cont_num1++;           
        }

        printf("%d \n",mdc);

    return 0;
}