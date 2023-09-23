#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int n, N1,N2,c=1; 
	
 		do {			
			printf("Insira um valor: ");
			scanf("%d",&n);
	
		} while (n <= 0 );
		
			do {
				printf("Insira um numero inteiro: ");
				scanf("%d", &N1);
				printf("Insira um numero inteiro: ");
				scanf("%d", &N2);
						
							if ( N1 % N2 == 0 ){
								printf("é divisivel\n");
							}
							else {
								printf("não é divisivel\n");
							}
			
				c++;
			}while(c <= n);
			
		system("pause");
		return 0;	
}
