#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[5];
    int i;

    for (i = 0;i < 5; i++){
        printf("digite um valor: ");
        scanf("%d", &vet[i]);
    }
    printf("dados Inseridos: \n");
        for(i=0; i < 5; i++){
        printf("%d - ", vet[i]);
    }
}

