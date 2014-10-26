#include <stdio.h>
#include <stdlib.h>


// metodo de ordenação selection sort
void selecao(int Vet[],int n){

    int Menor, aux;

    for(int i=0;i<n-1;i++){
        Menor=i;
        for(int j=i+1 ; j<n ; j++){
            if(Vet[Menor] > Vet[j])
                Menor=j;
        }
        if(i!=Menor){
            aux=Vet[i];
            Vet[i]=Vet[Menor];
            Vet[Menor]=aux;
        }
    }
}

// metodo de ordenação quick sort
int dividir(int vetor[],int esq, int dir){
    int aux; //troca de posicoes
    int cont = esq;

    for(int i=esq+1 ; i<=dir ; i++){

        if( vetor[i] < vetor[esq] ){
            cont++;
            aux=vetor[i];
            vetor[i]=vetor[cont];
            vetor[cont]=aux;
        }
    }

    aux=vetor[esq];
    vetor[esq]=vetor[cont];
    vetor[cont]=aux;

    return cont;
}

void quick(int vetor[],int esq, int dir){
    int pos;
    if(esq < dir){
        pos = dividir(vetor,esq,dir);
        quick(vetor,esq,pos-1);
        quick(vetor,pos+1,dir);
    }
}


int main(){

    int n=13;
    int Vetor[] = {3,6,5,1,2,8,7,9,4,10,13,12,11};

    selecao(Vetor,n);

    printf("\n\n ");

    for(int i=0;i<n;i++){
        printf("%d - ",Vetor[i]);
    }

    printf("\n\n\n");

// quick sort
    int vetor[]={3,5,8,1,9,2,4,7,0,6};
    int n2=10;

    quick(vetor,0,n2);

    printf("\n\n\n");

    for(int i=0;i<n;i++)
        printf("%d - ",vetor[i]);

    printf("\n\n\n");




    system("pause");
    return 0;
}
























