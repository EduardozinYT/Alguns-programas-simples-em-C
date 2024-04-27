#include <stdio.h>
#include <stdlib.h>

int main(){
	float D;
	
	printf("Insira a nota\n");
	scanf("%f", &D);
	
	if(D >= 4.0 && D < 7.0){
		printf("Voce tem direita ao exame!\n");
		system("pause");
	}
	if(D < 4.0){
		printf("Voce nao tem direito ao exame\n");
		system("pause");
	}
	if(D >= 11.0){
		printf("Essa nota nao existe!\n");
		system("pause");
	}
	if(D >= 7.0 && D < 11.0){
		printf("Voce nao precisa do exame vc ja passou!\n");
		system("pause");
	}
}
