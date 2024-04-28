#include <stdio.h>

int main(){
	int m;
	printf("Digite o codigo\n");
	scanf("%d", &m);
	while(m != 10){
	printf("Codigo errado\n");
	printf("Digite o codigo\n");
	scanf("%d", &m);
	}
	while(m == 10){
		printf("AAAAAAAA");
	}
	return 0;	
}
