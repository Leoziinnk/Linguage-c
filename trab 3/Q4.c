#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	
	int n, limite_inf, limite_sup, N=1, d=0, f=0, V;


	do {			
	printf("Insira um valor: ");
	scanf("%d",&n);
	
	} while (n <= 0 );
	
	printf("Limite inferior: ");
	scanf("%d",&limite_inf);
	printf("Limite superior: ");
	scanf("%d",&limite_sup);
	
	if (limite_inf < limite_sup){
	
		do {
		printf("Insira um valor: ");
		scanf("%d", &V);
		
		
				if(V >= limite_inf && V <= limite_sup){
						d++;
				}
			
				else{
					f++;
				}
		N++;	
		} while (N <= n );
		
			printf("Dentro: %d\n", d);
			printf("Fora: %d\n", f);
		}	
	system ("pause");	
}
