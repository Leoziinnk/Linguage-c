#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	
	int c=0, num=1, den, div, soma;
	
	while(num=1){
		soma=0;
		
		printf("Insira um numero: ");
		scanf("%d", &num);
				if(num<=0){
					break;
				}
				
			for(den = 1; den < num; den++){
				
				 	if(num % den == 0 ){
				 		soma = soma + den;
					 }
			}
			if (soma == num){
				printf("eh perfeito\n");
			}
				
			else{
				printf("nao eh perfeito\n");
			}
	}
	
	system("pause");
	return 0;
	
}
