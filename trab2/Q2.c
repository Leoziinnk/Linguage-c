#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"portuguese");
	
	int angulo_1, angulo_2, angulo_3;
	printf("Digite o primeiro angulo: ");
			scanf("%d", &angulo_1);
	printf("Digite o segundo angulo:  ");
			scanf("%d", &angulo_2);
	printf("Digite o terceiro angulo: ");
   			 scanf("%d", &angulo_3);
	
	// se a soma dos angulos n�o der 180, n�o � um triangulo 
	 if ( (angulo_1 == 90 || angulo_2 == 90 || angulo_3 == 90 )&& angulo_1 + angulo_2 + angulo_3 == 180){
	 	
	 	printf("Triangulo retangulo\n");
	 }
			else if ((angulo_1 > 90 || angulo_2 > 90 || angulo_3 > 90 )&& angulo_1 + angulo_2 + angulo_3 == 180){
		
				printf ("Triangulo obtusangulo");
				}
						else if ((angulo_1 < 90 && angulo_2 < 90 && angulo_3 < 90) && angulo_1 + angulo_2 + angulo_3 == 180){
							printf("Triangulo acutangulo");
						}
	else {
		printf("N�o � triangulo");
	}

	system("pause");
	return 0;
}
