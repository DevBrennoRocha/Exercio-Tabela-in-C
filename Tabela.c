#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define t 60

int main (){
	
	int num_agencia=0, opcao;
	float saldo=0,valor=0;
	char conta_bancaria[25];
	char nome[25];
		
	//menu começo canto e meio
	
	printf("%c",201);
	
	for(int i=0 ; i<t; i++){
		printf("%c",205);
	}
	
	printf("%c",187);
	printf("\n");
	
	//meio de codigo:
		printf("%c   APP DO BANCO DA TURMA DE PROGRAMA%c%cO ESTRUTURADA:        %c",186,128,199,186);
		
		printf("\n");
	
	printf("%c",200);
	
	for(int i=0; i<t; i++){
		printf("%c",205);
	}	
	
	printf("%c",188);
	printf("\n");
	
	//menu login:
	
	
	printf("%c",201);
	
	for(int i=0 ; i<t; i++){
		printf("%c",205);
	}
	
	printf("%c",187);
	printf("\n");
	
	//meio de codigo:
		printf("%c          Bem vindo fa%ca o login:      \t             %c",186,128,186);
		
		printf("\n");
	
	printf("%c",200);
	
	for(int i=0; i<t; i++){
		printf("%c",205);
	}	
	
	printf("%c",188);
	printf("\n");
	
	printf("digite numero da sua agencia: ");
	scanf("%d",&num_agencia);
	
	printf("digite numero da sua conta: ");
	scanf("%s",&conta_bancaria);
	
	printf("digite seu nome: ");
	scanf("%s",&nome);
	
	printf("carregando...\n");
	
	system("pause");
	
	system("cls");
	printf("\n");
	puts("Pressione Enter para continuar: \n");
	
	//ultilização do MENU
	
	do{
		
		printf("%c",201);
		
		for(int i=0 ; i<t; i++){
			printf("%c",205);
		}
		
		printf("%c",187);
		printf("\n");
		
		//menu texto 
		//meio de codigo:
			printf("%c   APP DO BANCO DA TURMA DE PROGRAMA%c%cO ESTRUTURADA:        %c",186,128,199,186);
			printf("\n");
			printf("%c Ola, Sr <%s>\t Agencia: <%d> | Conta: <%s>        %c\n",186,nome,num_agencia,conta_bancaria,186);
			printf("%c[1] Depositar		\t\t\t\t\     %c\n"     ,186,186);
	        printf("%c[2] Sacar    		\t\t\t\t\     %c\n"          ,186,186);
	        printf("%c[3] Saldo    		\t\t\t\t\     %c\n"         ,186,186);
	        printf("%c[0] Sair do Sistema \t\t\t\t\             %c\n",186,186);
	        
		printf("%c",200);
		
		for(int i=0; i<t; i++){
			printf("%c",205);
		}	
		
		printf("%c",188);
		printf("\n");
	// parte grafica acima
	
	//ultilizaçao do programa
	
	printf("\nDigite uma das opcoes acima: ");

		scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                printf("Digite o valor a ser depositado: ");
                scanf("%f", &valor);
                if (valor > 0) {
                    saldo += valor;
                    printf("Deposito realizado com sucesso!\n");
                    printf("\n");
                    system("pause");
                    system("cls");
                } else {
                    printf("Valor de deposito invalido!\n");
                    printf("\n");
                    system("pause");
                    system("cls");
                }
                break;
            case 2:
                printf("Digite o valor a ser sacado: ");
                scanf("%f", &valor);
                if (valor > 0 && valor <= saldo) {
                    saldo -= valor;
                    printf("Saque realizado com sucesso!\n");
                    printf("\n");
                    system("pause");
                    system("cls");
                } else {
                    printf("SALDO INSUFICIENTE!\n");
                    printf("\n");
                    system("pause");
                    system("cls");
                }
                break;
            case 3:
                printf("Saldo atual: R$ %.2f\n", saldo);
                break;
            case 0:
                printf("Saindo do Sistema...\n");
                
                break;
            default:
                printf("OPCAO INVALIDA!\n");
                printf("\n");
        }

        // Pausa a tela para o usuário ver a mensagem antes de continuar
        printf("Pressione Enter para continuar...");
        printf("\n");
    
    
   } while (opcao != 0);

// meu deus X_X
}