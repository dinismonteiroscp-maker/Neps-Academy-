#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL,"");
	char jn;
	
	do{
    int n1,n2, op;
    printf("===============================\n");
    printf("   Calculadora Simples         \n");
    printf("===============================\n");
    printf("Selecione uma operação:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Sair\n");
    printf("Opção: ");
    scanf("%d",&op);
    printf("\n");
    if(op<0 || op>5){
    	printf("Opção inválida");
    	continue;
	}
    if(op==5){
    	break;
	}else{
		system("cls");
		printf("Digite o primeiro número: ");
		scanf("%d",&n1);
		printf("\nDigite o segundo número: ");
		scanf("%d",&n2);
		printf("\n");
		switch (op){
			case 1: // soma
				printf("Resultado: %d + %d = %d", n1, n2, n1+n2); break;
			case 2: //subtração
				printf("Resultado: %d - %d = %d", n1, n2, n1-n2); break;
			case 3: //multiplicação
				printf("Resultado: %d x %d = %d", n1, n2, n1*n2); break;
			case 4: // divisão
			if(n2==0)
				printf("Erro: divisão por zero!\n");
			else
				printf("Resultado: %d/%d = %d", n1, n2, n1/n2); break;
			default:
				printf("Opção inválida!\n");
				
			
		}
		printf("\nDeseja realizar outra operação? (s/n): ");
		scanf(" %c",&jn);	
		printf("\n");
		}
	}while(jn=='s' || jn == 'S');
	system("cls");
	printf("\nObrigado por usar a calculadora! Até a próxima.");
    
    

}

