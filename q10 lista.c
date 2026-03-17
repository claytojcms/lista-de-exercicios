#include <stdio.h>
#include <stdlib.h>

static void print_array(const int v[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", v[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]");
}

static void swap_int(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void selectionSort(int v[], int n, int ordem) {
if( !v || n<=1)
return;
int comparacoes=0;
int trocas=0;

for(int i=0; i<n-1;i++){
    int idx=i ;
for(int j=i ;j<n ;j++){
    if(ordem==1 && v[j] < v[idx]){
    comparacoes++;
    idx=j;
        }

    if(ordem== -1 && v[j]> v[idx]){
        comparacoes++;
        idx= j;
    }
}
     if (idx!=i){
         trocas++;
       swap_int(&v[i],&v[idx]);
}
}      printf("\ntrocas: %d comparacoes:%d\n",trocas,comparacoes);
}

int main(void) {

    int dados[]  = {9, 5, 7, 1, 4};
    int dados1[]  = {9, 5, 7, 1, 4};
    int n = 5;
    printf("VETOR ORIGINAL\n");
    print_array(dados,n);
    printf("\nVETOR CRESCENTE");
    selectionSort(dados,n,1);
    print_array(dados,n);

    printf("\nVETOR DECRESCENTE");
    selectionSort(dados1,n,-1);
    print_array(dados1,n);


    return 0;
}
