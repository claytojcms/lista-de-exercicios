#include <stdio.h>
#include <stdlib.h>


void bubbleSort_otimizado(int v[], int n) {
    int comparacoes = 0;
    int trocas = 0;
    for(int i=0; i< n ;i++){
       int houvetroca =0 ;
        for(int j=0 ; j<n-i-1 ; j++){
    comparacoes++;
            if(v[j]>v[j+1]){
                int temp= v[j+1];
                v[j+1]= v[j];
                v[j]= temp;
                trocas ++;
                houvetroca=1;
            }
        }
        if(houvetroca==0) //essa condição faz com que se ele rodar o vetor e não for necessario nenhuma troca ele para, ou seja se no melhor caso(o vetor ja está ordenado) ele roda o vetor uma unica vez(ou seja O(n)) e para o algoritmo e não roda o vetor mais vezes desnecessariamente.
            break;
    }
     printf("Otimizado:\n Trocas=%d  comparacoes:%d\n",trocas,comparacoes);
}


void imprimirVetor(int v[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main() {
    int n=6;
    int dados[]={10,2,7,8,1,6};
    printf("VETOR ORIGINAL:\n");
    imprimirVetor(dados,n);
    bubbleSort_otimizado(dados,n);
    printf("VETOR ORDENADO:\n");
    imprimirVetor(dados,n);


    return 0;
}

