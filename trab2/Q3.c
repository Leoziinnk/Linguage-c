#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main ()
{
	int peso;
	float  altura;
	
			printf("Insira o peso do participante em kg:  ");
			scanf("%f", &peso);
			printf("Insira a altura do participante em metros:  ");
			scanf("%f", &altura);
			
			if (peso >= 70 && peso <= 80 && altura >= 1.75 && altura <= 1.90){
				
				printf("ACEITO\n");
			}
			else if ( altura < 1.75 && altura > 1.90){
				
							printf("RECUSADO POR ALTURA\n");
						}	
			else if (peso < 70 && peso > 80 ){
									printf("RECUSADO POR PESO\n");
								}			
			else if (peso < 70 && peso > 80 && altura < 1.75 && altura > 1.90 ) {
					printf("TOTALMENTE RECUSADO\n");
			}
		system("pause");
		return 0;		
		
}
