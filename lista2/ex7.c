#include <stdio.h>

int sec_max(int *vet, int n);

int main(void){
  while(1){
    int n, i;
    scanf("%d", &n);
    if(n <= 0) break;
    int vet[n];
    int idx[n];
    for(i = 0; i < n; i++) scanf("%d", &vet[i]);

        int second_max =sec_max (vet, n);
    printf("\n");
    printf("culpado %d", (second_max+1) );
    printf("\n");

  }
  return 0;
}

int sec_max(int *vet, int n){
     int j, i, max, old_max;

     for (i=1; i<=2; i++){
        old_max = max;
        max =0;
        for(j = 0; j < n; j++) {      
            if(j!=old_max){
                if(vet[j] > vet[max]) max = j;

            }
        }
     }

     return max;
}

