//faca uma variavel que some 5 caso seja par ou 8 caso seja impar 

#include<stdio.h>
#include <stdlib.h>

int main(){
	int a;
	
	printf("Digite um numero");
	scanf("%d",&a);
	
	if(a%2==0){
		
		printf("O resultado da soma eh:%d",a+5);
	}else{
		printf("O resultado da soma eh:%d",a+8);
	}
	
	return 0;
	
}
