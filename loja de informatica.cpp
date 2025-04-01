#include <stdio.h>
#include <locale.h>


int main (){ 
     setlocale (LC_ALL,"");
     int opcao, res, quant;
     float valor, total,total2;
     char opcao2;
     do{
         printf("Olá seja bem-vindo em nossa loja\n");
         printf("Qual o pruduto deseja comprar?\n");
         printf("1- Teclado - R$ 100,00\n");
         printf("2- Mouse - R$ 50,00 \n");
         printf("3- Monitor - R$ 800,00\n");
         printf("4- Placa de Vídeo - R$ 2000,00\n");
         scanf("%d", &opcao);
         switch(opcao){  
         case 1:
         printf("Teclado - R$ 100,00\n");
         valor= 100.00;
         break;
        
         case 2:
         printf("Mouse - R$ 50,00\n");
         valor= 50.00;
         break;
        
         case 3:
         printf("Monitor - R$ 800,00\n");
         valor= 800.00;
         break;
        
         case 4:
         printf("Placa de Vídeo - R$ 2000,00\n");
         valor= 2000.00;
         break;
        
         default:
         printf("Reiniciando o sistema");
         return 1;
    } 
     printf("Você deseja quantas unidades desse pruduto? \n");
     scanf("%d", &quant);
     total=(quant*valor);
     total2 += total;
     printf("A sua conta deu: %.2f", total2);
         
         printf("Você deseja continuar comprando?\n");
         printf("Digite s para continuar ou n para sair: ");
         scanf("%s", &opcao2);
   
            if (opcao2=='s'){
            }
        } while (opcao2 != 'n');
              printf("Saindo\n");
    
   return 0;}
    
