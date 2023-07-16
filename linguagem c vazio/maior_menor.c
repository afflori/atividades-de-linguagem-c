#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2;
    printf("digite um valor: ");
    scanf("%d", &n1);
    printf("digite outro valor: ");
    scanf("%d", &n2);
    if (n1 > n2){
    printf("em ordem %d, %d", n1, n2);
    }
    if (n2 > n1){
    printf("em ordem %d, %d", n2, n1);
    }
    if(n1 == n2){
    printf("ambos os numeros são iguais");
    }
}
