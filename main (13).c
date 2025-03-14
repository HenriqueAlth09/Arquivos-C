//pedido 
//servico de quarto 
//check-in


#include <stdio.h>
#include <locale.h>

int main (){ 
    setlocale (LC_ALL,"");
    char nome[20], cpf[15];
    int opcao, servico, lanche;
    printf("Ola seja Bem vindo(a)\n");
    printf("Qual seu nome efetuar o seu check-in?\n");
    scanf("%s", nome);
    printf("Qual seu cpf??\n");
    scanf("%s", cpf);
    printf("Qual das nossas melhores suites você deseja??\n");
    printf("Suite classic: 290,90\n");
    printf("Suite premium: 325,75\n");
    printf("Suite master: 398,97\n");
    printf("Suite boos: 450,50\n");
    printf("Suite luxury: 600,00\n");
    scanf("%d", &opcao);
    switch(opcao){
         case 1:
        printf("você escolheu a Suite Classic\n");
        break;
        
        case 2:
        printf("você escolheu a Suite Premium\n");
        break;
        
        case 3:
        printf("você escolheu a Suite Master\n");
        break;
        
        case 4:
        printf("você escolheu a Suite Boos\n");
        break;
        
        case 5:
        printf("você escolheu a Suite Luxury \n");
        break;
        
        default:
        printf("Reiniciando o sistema");
        return 1;
    }
    
    printf("Para selecionar o serviço de quarto ligue: (19)77777-7777\n");
    scanf("%d", &servico);
    switch(servico){
        case 1:
        printf("você ligou para o serviço de quarto do hotel\n");
        printf("X-Burguer: 19,90\n");
        printf("X-Salada: 22,00\n");
        printf("X-Egg: 25,00\n");
        printf("X-Bacon: 30,00\n");
        printf("X-Tudo: 37,90\n");
        scanf("%d", &servico);
        
        switch(lanche){
        case 1:
        printf("Você selecionou a 1° opção: X-Burguer\n");
        break;
        
        case 2:
        printf("Você selecionou a 2° opção: X-Salada\n");
        break;
        
        case 3:
        printf("Você selecionou a 3° opção: X-egg\n");
        break;
        
        case 4:
        printf("Você selecionou a 4° opção: X-bacon\n");
        break;
        
        case 5:
        printf("Você selecionou a 5° opção: X-tudo\n");
        break;
        
        case 6:
        printf("")
        
        default:
        printf("encerando o sistema");
        return 2;
        }
        
    }
    
    
    
    


return 0;
    
}