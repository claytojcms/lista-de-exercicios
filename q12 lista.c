    #include <stdio.h>
    #include <stdlib.h>

void imprimir_vetor(int V[],int n){
 for(int i = 0;i < n; i++)
    printf(" %d",V[i]);
    printf("\n");
 }

    void insertionSort(int V[], int n) {
int i, j;
int chave;
for (i = 1; i < n; i++) {
chave = V[i];
j = i;

while (j > 0 && chave < V[j - 1]) {
    V[j] = V[j - 1];
    j--;

}
    V[j] = chave;
    printf("I=%d ESTADO POS-ITERACAO:",i);
    imprimir_vetor(V,n);
}
}


    int main()
    {

        int n=5;
        int A[]={9,6,1,4,7};

        printf("VETOR A: Antes \n");
        imprimir_vetor(A,n);
        insertionSort(A,n);
        printf("ORDENADO:\n");
        imprimir_vetor(A,n);

        return 0;
    }
