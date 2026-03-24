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

void selectionSort(int v[], int n) {
if( !v || n<=1)
return;
int comparacoes=0;
int trocas=0;

for(int i=0; i<n-1;i++){
    int idx=i ;
for(int j=i+1 ;j<n ;j++){
    comparacoes++;
    if(v[j] < v[idx]){
    idx=j;
}
}
if (idx!=i){
         trocas++;
       swap_int(&v[i],&v[idx]);
}
}
     printf("\ntrocas: %d comparacoes:%d\n",trocas,comparacoes);
}

int main() {

    int ordenado[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int reverso[]={20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    int aleatorio[]={54,76,10,65,8,90,43,81,13,25,67,40,7,14,38,51,18,2,45,20};
    int n = 20;
    printf("\n\nVETOR ORDENADO ORIGINAL:\n");
    print_array(ordenado,n);
    selectionSort(ordenado,n);
    printf("VETOR ORDENADO:\n");
    print_array(ordenado,n);

    printf("\n\nVETOR REVERSO ORIGINAL:\n");
    print_array(reverso,n);
    selectionSort(reverso,n);
    printf("VETOR ORDENADO:\n");
    print_array(reverso,n);

    printf("\n\nVETOR ALEATORIO ORIGINAL:\n");
    print_array(aleatorio,n);
    selectionSort(aleatorio,n);
    printf("VETOR ORDENADO:\n");
    print_array(aleatorio,n);

    printf("\n\n\nO selection sort tende a ser mais constante pois ele sempre vai ser O(n2) enquanto no caso do bubble se ele for otmizado ele pode variar entre pior caso(O(n2)) e o melhor caso(O(n))\n");

    return 0;
}
