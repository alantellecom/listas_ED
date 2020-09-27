#include <stdio.h>

int main(void){

    int h_init, m_init, h_fim, m_fim, int_min;

    while(1){

        printf("hora init: ");
        scanf("%d", &h_init);
        printf("Minuto init: ");
        scanf("%d", &m_init);
        printf("hora fim: ");
        scanf("%d", &h_fim);
        printf("Minuto fim: ");
        scanf("%d", &m_fim);

        if ((h_init || m_init || h_fim || m_fim)==0 ) break;
        
        if ((h_fim*60 + m_fim) > (h_init*60 + m_init) ){
            int_min = (h_fim-h_init)*60 + (m_fim -m_init);
        }
        else{

            int_min = ((23-h_init)*60 + (60 -m_init)) + (h_fim*60 + m_fim);
        }
        

        printf("\n %d \n", int_min);

    }
    return 0;
}