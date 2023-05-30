//Digite um numero real e volte o quadrado do mesmo.
#include<stdio.h>


int main(){
	
	float real,quadrado;
	
	printf("Digite um numero real:");
	fflush(stdout);
	
	scanf("%d",&real);
	
	quadrado = (real * real);
	
	printf("O quadrado do numero eh: %f ", quadrado);
	
	return 0;
	
}
