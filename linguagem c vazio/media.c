#include <stdio.h>
#include <stdlib.h>

int main(){
    int a1, razao, decimot;
    printf("digite o primeiro termo da PA: ");
    scanf("%d", &a1);
    printf("Qual sera a razao da PA: ");
    scanf("%d", &razao);
    decimot = a1 + (10-1)*razao;
    printf("o decimo termo é: %d", decimot);
}
