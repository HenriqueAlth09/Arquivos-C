//Escreva um programa que solicite ao usuário um número de 1 a 4 correspondente a uma estação do ano 
//e exiba o nome da estação correspondente:
//1 - Verão
//2 - Outono
//3 - Inverno
//4 - Primavera
//Caso o usuário digite um valor inválido, o programa deve exibir uma mensagem de erro.

#include <stdio.h>
#include <locale.h>

int main (){ 
    setlocale (LC_ALL,"");
    int opcao;
    printf("Escolha um numero (1-4): \n");    
    printf("1- verão\n");
    printf("2- outono\n");
    printf("3- inverno\n");
    printf("4- primavera\n");
    scanf("%d", &opcao);
    switch(opcao){
    case 1:
    printf("Você selecionou a 1° opção: Verão\n");
    break;
    
    case 2:
    printf("Você selecionou a 2° opção: outono\n");
    break;
    
    case 3:
    printf("Você selecionou a 3° opção: inverno\n");
    break;
    
    case 4:
    printf("Você selecionou a 4° opção: primavera\n");
    break;
    
    default:
    printf("Opção inválida!\n");
            break;
  }
  return 0;
}
    
    
    
    
