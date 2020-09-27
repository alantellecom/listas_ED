#include <stdio.h>

int main(void){

    int casos, i=1,  fig_1, fig_2, cont_fig1 , cont_fig2, pilha;
       printf("quantas vezes vai testar? ");
        scanf("%d", &casos);

    while(i<=casos){
        printf("fig1: ");
        scanf("%d", &fig_1);
        printf("fig2: ");
        scanf("%d", &fig_2);
 
        cont_fig1 =1;
        
        pilha =0;

        while ((cont_fig1<= fig_1) & (pilha == 0) ){ // loop até numero de cont_fig1 ser igual ao numero de figurinhas ou se pilha recebeu valor.
            
            if((fig_1%cont_fig1 ==0)) {// se não é divisivel, não vale continuar (ambos precisam ser divisiveis). Tetar proximo inteiro cont_fig1

                cont_fig2 =1;
                while(cont_fig2<= fig_2){

                    if(((fig_2%cont_fig2) != 0)){ // se não é divisivel não vale continuar (ambos precisam ser divisiveis). Tentar proximo inteiro cont_fig1                                                           
                        cont_fig1++;
                        break;
                    }
                    else if((fig_1/cont_fig1) > (fig_2/cont_fig2)){ // otimizar e interromper o loop desnecessariamente, pois a divisão de fig_2/cont_fig2 já e menor que fig_1/cont_fig1, nas proximas iterações será menor ainda, ou seja não haverá igualdade.
                        cont_fig1++;
                        break;
                    }
                    else if ((fig_1/cont_fig1) == (fig_2/cont_fig2)) {
                        pilha = (fig_1/cont_fig1);
                        break;
                    }
                    else{// aqui para o caso de fig_2/cont_fig2 ser maior que fig_1/cont_fig1. Nesta situação existe possibilidade de igualdade incrementando o valor de cont_fig2
                        cont_fig2++;
                    }
                }               
            }
            else{
                cont_fig1++;
            } 
        }

        printf("%d \n",pilha);
       
        i++;
    }

     return 0;
}