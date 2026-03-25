#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int v[], int n) {
    int comparacoes = 0;
    int trocas = 0;
    for(int i=0; i< n ;i++){
        for(int j=0 ; j<n-i-1 ; j++){
    comparacoes++;
            if(v[j]>v[j+1]){
                int temp= v[j+1];
                v[j+1]= v[j];
                v[j]= temp;
                trocas ++;
            }
        }
    }
    printf("Tradicional:\n Trocas=%d || comparacoes:%d\n",trocas,comparacoes);
}

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
        if(houvetroca==0)
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
    int item;
    int n=20;
    printf("Voce quer qual tipo de vetor para ordenar:\n 1-ja ordenado \n 2-reverso \n 3-aleatorio\n");
    scanf("%d",&item);

if(item==1){
    int dados[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int dados1[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    bubbleSort(dados,n);
    bubbleSort_otimizado(dados1,n);
    imprimirVetor(dados,n);
}
if(item==2){
    int dados[]={20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    int dados1[]={20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    bubbleSort(dados,n);
    bubbleSort_otimizado(dados1,n);
    imprimirVetor(dados,n);
}
if(item==3){
    int dados[]={54,76,10,65,8,90,43,81,13,25,67,40,7,14,38,51,18,2,45,20};
    int dados1[]={54,76,10,65,8,90,43,81,13,25,67,40,7,14,38,51,18,2,45,20};
    bubbleSort(dados,n);
    bubbleSort_otimizado(dados1,n);
    imprimirVetor(dados,n);


    return 0;
}
}
