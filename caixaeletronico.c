
#include<stdio.h>

int main(){
	float saque , saldo;
	saldo = 10.000;
	
	printf("Informe o valor do saque :");
	scanf("f",&saque);
	getch();
	
	if(saque<= saldo ){
		
		printf("saque liberado");
	}
	else{
		
		printf("saldo insuficiente ");
	}
	
	return 0;
}
