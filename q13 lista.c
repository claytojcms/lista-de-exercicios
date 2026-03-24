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
    int comparacoes=0;
    int movimentacoes=0;
    for (i = 1; i < n; i++) {

    chave = V[i];
    j = i;

    while (j > 0){
        comparacoes++;
        if(chave < V[j - 1]){
        V[j] = V[j - 1];
        j--;
        movimentacoes++;
    }
    else
        break;
    }
        V[j] = chave;
        movimentacoes++;

    }
    printf("movimentacoes:%d\n  comparacoes:%d\n",movimentacoes,comparacoes);
    }



        int main()
        {

            int n=20;
          int A[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
          int B[]={20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
          int C[]={54,76,10,65,8,90,43,81,13,25,67,40,7,14,38,51,18,2,45,20};

            printf("\nVETOR A: Antes \n");
            imprimir_vetor(A,n);
            insertionSort(A,n);
            printf("DEPOIS:\n");
            imprimir_vetor(A,n);

            printf("\nVETOR B: ANTES \n");
            imprimir_vetor(B,n);
            insertionSort(B,n);
            printf("DEPOIS:\n");
            imprimir_vetor(B,n);

            printf("\nVETOR C: ANTES \n");
            imprimir_vetor(C,n);
            insertionSort(C,n);
            printf("DEPOIS:\n");
            imprimir_vetor(C,n);



            return 0;
        }
