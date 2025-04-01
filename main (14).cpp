#include <stdio.h>
#include <locale.h>

int main() {
    float sal, impr = 0.0;
    
    
    printf("Digite o salario mensal:\n");
    scanf("%f", &sal);

    if (sal <= 1903.98){
    impr = 0.0; 
    } 
	else if (sal <= 2826.65){
    impr = (sal * 0.075) - 142.80;
    } 
	else if (sal <= 3751.05) {
    impr = (sal * 0.15) - 354.80;// 15%
    } 
	else if (sal <= 4664.68){
    impr = (sal * 0.225) - 636.13;// 22.5%
    } 
	else {
    impr = (sal * 0.275) - 869.36; // 27.5%
	}

    if (impr > 0) {
    printf("O imposto de renda retido na IRRF e: R$%.2f\n", impr);
    } else {
    printf("Trabalhador esta isento do IRRF.\n");
    }

    return 0;
}