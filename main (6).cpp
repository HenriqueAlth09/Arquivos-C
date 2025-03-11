//Elabore um programa que apresente um cardápio de lanches para o usuário com as seguintes opções:
//1 - X-Burguer - R$ 10,00
//2 - X-Salada - R$ 12,00
//3 - X-Bacon - R$ 15,00
//4 - Hot Dog - R$ 8,00
//5 - Refrigerante - R$ 5,00
//O usuário deve escolher um número correspondente ao pedido, e o programa deve exibir o nome e o
//preço do item selecionado. Caso o número digitado não esteja no cardápio, exiba uma mensagem 
//informando que a opção é inválida.

#include <stdio.h>
#include <locale.h>

int main (){ 
    setlocale (LC_ALL,"");
    int opcao;
    printf("Selecione qual lanche (1-5): \n");
    printf("1- X-Burguer R$ 10,00\n");
    printf("2- X-Salada R$ 12,00\n");
    printf("3- X-Bacon\n R$ 15,00");
    printf("4- Hot Dog R$ 8,00\n");
    printf("5- Refrigerante R$ 5,00\n");
    scanf("%d", &opcao);
    switch(opcao){
        
        case 1:
        printf("Você selecionou a 1° opção: X-Burguer\n");
        break;
        
        case 2:
        printf("Você selecionou a 2° opção: X-Salada\n");
        break;
        
        case 3:
        printf("Você selecionou a 3° opção: X-Bacon\n");
        break;
        
        case 4:
        printf("Você selecionou a 3° opção: X-Hot Dog\n");
        break;
        
        case 5:
        printf("Você selecionou a 3° opção: Refri\n");
        break;
        
        default:
        printf("encerando o sistema");
    }
    return 0;
    }
    
    
    
    
    
    
    
    
    
 