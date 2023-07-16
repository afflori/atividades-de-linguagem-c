#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1;
    printf("Digite um valor: ");
    scanf("%d", &n1);
    if (n1 > 0){
    printf("seu negativo é %d", n1 - 2*n1);
    }else{
    printf("O valor ja é negativo baby");
    }
}
