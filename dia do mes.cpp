//Escreva um programa que solicite ao usuC!rio um nC:mero de 1 a 12 e exiba o nome do mC*s
//correspondente. Por exemplo, se o usuC!rio digitar 1, o programa deve exibir "Janeiro";
//se digitar 2, deve exibir "Fevereiro", e assim por diante. Caso o nC:mero digitado seja
//invC!lido, exiba uma mensagem de erro.





//Biblioteca
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL,"");
	int opcao;
	printf("Selecione o numero correspondente ao mes (1-12): \n");
	scanf("%d", &opcao);
	switch(opcao){
	   case 1:
	   printf("Você escolheu o mes 1");
	   printf(" Seu mes é: Janeiro", opcao);
	   break;
	   
	   case 2:
	   printf("Você escolheu o mes 2");
	   printf(" Seu mes é: Fevereiro", opcao);
	   break;
	   
	   case 3:
	   printf("Você escolheu o mes 3");
	   printf(" Seu mes é: Março", opcao);
	   break;
	   
	   case 4:
	   printf("Você escolheu o mes 4");
	   printf(" Seu mes é: Abril", opcao);
	   break;
	   
	   case 5:
	   printf("Você escolheu o mes 5");
	   printf(" Seu mes é: Maio", opcao);
	   break;
	   
	   case 6:
	   printf("Você escolheu o mes 6");
	   printf(" Seu mes é: Junho", opcao);
	   break;
	   
	   case 7:
	   printf("Você escolheu o mes 7");
	   printf(" Seu mes é: Julho", opcao);
	   break;
	   
	   case 8:
	   printf("Você escolheu o mes 8");
	   printf(" Seu mes é: Outubro", opcao);
	   break;
	   
	   case 9:
	   printf("Você escolheu o mes 9");
	   printf(" Seu mes é: Setembro", opcao);
	   break;
	   
	   case 10:
	   printf("Você escolheu o mes 10");
	   printf(" Seu mes é: Outubro", opcao);
	   break;
	   
	   case 11:
	   printf("Você escolheu o mes 11");
	   printf(" Seu mes é: Novembro", opcao);
	   break;
	   
	   case 12:
	   printf("Você escolheu o mes 12");
	   printf(" Seu mes é: Dezembro", opcao);
	   break;}
	   return 0;
}
