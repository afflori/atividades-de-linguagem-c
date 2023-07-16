#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1;
    printf("querido, digite um valor: ");
    scanf("%d", &num1);
    printf("muito bem, seu antecessor é %d e seu sucessor é %d", num1-1,num1+1);
}
