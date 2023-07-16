#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2;
    printf("digite um valor: ");
    scanf("%d", &n1);
    printf("digite outro valor: ");
    scanf("%d", &n2);
    if (n2 % n1 == 0){
        printf("olha né, eles são divisiveis");
    }else{
    printf("eles não são divisiveis");}
    if (n2 == 0){
    printf("perdão, o valor 0 não é aceito");}
}
