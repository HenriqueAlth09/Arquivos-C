#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    int quant, num, soma = 0 ;

   
    printf("Quantos números você quer somar?\n");
    scanf("%d", &quant);

    for (int i = 0; i < quant; i++) {
        do {
            
            printf("Digite o número %d: ", i + 1);
            scanf("%d", &num);

            if (num < 0) {
                printf("Número inválido! digite um número positivo.\n");
            }
        } while (num < 0); 
        
        soma += num;
    }

   
    printf("A soma dos números é: %d\n", soma);

    return 0;
}
