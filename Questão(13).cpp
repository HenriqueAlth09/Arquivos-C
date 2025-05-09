#include <stdio.h>
#include <locale.h>

int main() {
    float sal, impr = 0.0;
    
    
    printf("Digite o salario mensal:\n");
    scanf("%f", &sal);

    if (sal <= 2000.00){
    impr = 0.0; 
    } 
	else if (sal <= 2000.01){
    impr = (sal * 0.08) - 142.80;
    } 
	else if (sal <= 3000.01) {
    impr = (sal * 0.18) - 354.80;// 15%
    } 
	else if (sal <= 4500.00){
    impr = (sal * 0.28) - 636.13;// 22.5%
    }


    if (impr > 0) {
    printf("O imposto de renda retido na IRRF e: R$%.2f\n", impr);
    } else {
    printf("Trabalhador esta isento do IRRF.\n");
    }

    return 0;
}
