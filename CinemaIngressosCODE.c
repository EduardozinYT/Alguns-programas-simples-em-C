#include <stdio.h>
#include <stdlib.h>

int main(){
	int A;
    printf("Qual filme vc quer assistir?\n\n");
    printf("1 = Kung fu panda 4\n");
    printf("2 = Kong e Goodzila-Novo imperio\n");
    printf("3 = Divertida Mente 2 para julho\n");
    printf("4 = Ghostbusters: Frozen Empire\n");
    printf("5 = O Planeta dos macacos\n");
    scanf("%d", &A);
	switch(A){
		case 1:
			printf("Ingresso comprado para: Kung fu panda 4\n");
			system("pause");
			break;
		case 2:
			printf("Ingresso comprado para: Kong e Goodzila-Novo imperio\n");
			system("pause");
			break;
		case 3:
			printf("Igresso comprado para: Divertida Mente 2 para julho\n");
			system("pause");
			break;
		case 4:
			printf("Ingresso comprado para: Ghostbusters: Frozen Empire\n");
			system("pause");
			break;
		case 5:
			printf("Ingresso comprado para: O Planeta dos macacos\n");
			system("pause");
			break;	
		default:
		printf("Valor invalido.\n");
		system("pause");
		break;
	}
	return 0;
}    
