//O antecessor do numero e o sucessor
#include<stdio.h>

int main (){
	
	int a,b,c;
	
	printf("Digite o numero inteiro:");
	fflush(stdout);
	scanf("%d",&b);
	
	a = b - 1;
	c = b + 1;
	
	printf("O antecessor e o sucessor deste numero sao %d e %d.",a ,c);
}
