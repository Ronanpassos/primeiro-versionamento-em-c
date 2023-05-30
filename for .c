//Desenvolva um algoritmo em linquagem c que deselvolva as sequintes operações:
//Apresentar todos os numeros de 0 ate o numero digitado em ordem crescente.
//Apresente todos os numeros digitatos em ordem decrecente 

#include<stdio.h>

int main(){
	
	int numero, i  ;
	
	printf("Digite um numero ");
	scanf("%d",& numero);
	
	printf("crescente");
	
	for (i = 0 ; i <= numero; i++ ){
		
		printf("%d\n",i);
	}
	
	printf("Decrescente");
	
	for(i = numero; i >= 0;i--){
		
		printf("%d",i);
	}
	
	
	
}
