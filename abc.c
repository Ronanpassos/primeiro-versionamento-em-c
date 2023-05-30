#include<stdio.h>

int main(){
	
    int a,b,c,soma;
    
    	printf("Digite o valor de a b c:");
    	scanf("%d %d %d",&a,&b,&c);
    	getchar();	
    	
    	soma = a + b;
    	
    	if(soma< c ){
    		printf("A soma d A + B %d e menor que C!" ,soma);
		}else{
			printf("A soma de a + B nao e maior que c !",soma);
		}
    	
    	
	return 0;
}
