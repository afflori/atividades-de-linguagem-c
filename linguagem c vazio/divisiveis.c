#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2;
    printf("digite um valor: ");
    scanf("%d", &n1);
    printf("digite outro valor: ");
    scanf("%d", &n2);
    if (n2 % n1 == 0){
        printf("olha n�, eles s�o divisiveis");
    }else{
    printf("eles n�o s�o divisiveis");}
    if (n2 == 0){
    printf("perd�o, o valor 0 n�o � aceito");}
}
