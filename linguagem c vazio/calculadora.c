#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2;
    char op;

    printf("digite o primeiro numero, a operação e o segundo numero:  ");
    scanf("%d %c %d", &n1, &op,&n2);

    switch (op){
    case "+":
        printf("=%d\n", n1 + n2);
        break;
    case "-":
        printf("=%d\n", n1 - n2);
        break;
    case 3:
        printf("terça.\n");
        break;
    default:
        printf("O valor é invalido");
        break;
}
}
