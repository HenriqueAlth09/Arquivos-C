
#include <stdio.h>
int main () {
    float num1;
    printf("Digite o numero:\n");
    scanf("%f",&num1);
    if (num1>0) {
        printf("O numero e positivo!");
    }
    else if (num1==0) {
        printf("O numero e 0!");
    }
    else {
        printf("O numero e negativo!");
    }
    return 0;
}
   