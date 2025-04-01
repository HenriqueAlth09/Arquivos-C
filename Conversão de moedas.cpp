//Desenvolva um programa que solicite ao usuário um valor em reais e uma opção de conversão:
//1 - Dólar
//2 - Euro
//3 - Libra
//O programa deve utilizar switch case para converter o valor e exibir o resultado correspondente.
//Considere valores fixos para as cotações das moedas. Caso o usuário escolha uma opção inválida,
//exiba uma mensagem de erro.


#include <stdio.h>
#include <locale.h>

int main (){ 
    setlocale (LC_ALL,"");
    float res, val, dol, eur, lib;
    int opcao;
    printf("Informe qual moeda ira usar (1-3): \n");
    printf("1- Dólar\n");
    printf("2- Euro\n");
    printf("3- Libra\n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
        printf("Você escolheu a moeda Dolar");
        printf(" Qual o valeu em Real??");
        scanf("%f", &val);
        dol= val / 5.38;
        printf("O valor em Dolar que vc tem é de: %.2f", dol);
        break;
        
        case 2:
        printf("Você escolheu a moeda Euro");
        printf(" Qual o valeu em Real??");
        scanf("%f", &val);
        eur= val / 6.36;
        printf("O valor em Dolar que vc tem é de: %.2f", eur);
        break;
        
        case 3:
        printf("Você escolheu a moeda Dolar");
        printf(" Qual o valeu em Real??");
        scanf("%f", &val);
        lib= val / 7.64;
        printf("O valor em Dolar que vc tem é de: %.2f", lib);
        break;}
        return 0;}
        
        
        
