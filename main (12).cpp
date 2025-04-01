#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
   setlocale(LC_ALL,""); 
   char nome[50];
   int opc, quant, total;
   total = 0;
   
   do{
    printf("Seja bem-vindo a farmalife:\n");
    printf ("selecione a opção: \n");
    printf("1 - Paracetamol- R$ 5,00 :\n");
    printf("2 - Ibuprofeno - R$ 7,50 :\n");
    printf("3 - Dipirona - R$ 4,00 :\n");
    printf("4 -  Amoxicilina - R$ 12,00:\n");
    printf("5 - sair:\n");
    scanf("%d", &opc);

switch (opc) {
    case 1:
    printf("Quantos paracetamol você deseja comprar?\n");
    scanf("%d", &quant);
    total = total + quant * 5,00;
    printf("O total de sua compra é: R$ %d\n", total);
    break;
    
    case 2:
    printf("Quantos ibuprofeno você deseja comprar?\n");
    scanf("%d", &quant);
    total = total + quant * 7,50;
    printf("O total de sua compra é: R$ %d\n", total);
    break;
    
    case 3:
    printf("quantos Dipirona você deseja comprar?\n");
    scanf("%d", &quant);
    total = total + quant * 4,00;
     printf("O total de sua compra é: R$ %d\n", total);
     break;
     
     case 4:
     printf("quantas Amoxicilina você deseja comprar?\n");
    scanf("%d", &quant);
    total = total + quant * 12,00;
     printf("O total de sua compra é: R$ %d\n", total);
     break;
     
     case 5:
     printf("saindo...");
     break;
     
     default:
     printf("opção inválida! Tente novamente");
     
     
    
    }
    printf("Deseja continuar comprando?\n");
    printf("1-sim\n");
    printf("2-não\n");
    scanf("%d",&opc);
    system("clear");
 

}while (opc == 1);

   return 0;
}