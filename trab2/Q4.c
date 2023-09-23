#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");

	int saldo_cc, saldo_poupanca,limite,limite2;
	printf("==================================\n BEM VINDO AO BANCO URUBU DO PIX\n==================================\n\n");
	printf("Insira o saldo da sua conta corrente:  ");
	scanf("%d", &saldo_cc);
	printf("Insira o saldo da sua poupanca:  ");
	scanf("%d", &saldo_poupanca);
	
			if (saldo_cc < 1000 && saldo_poupanca < 1000){
			printf("Sem conta especial\n");
		}
				else {
					if (saldo_cc > saldo_poupanca){
						limite = saldo_cc * 2;
						limite2 = saldo_poupanca * 3;
							if(limite > limite2 ){
								printf("Limite da conta especial: %d\n", limite);
								
							}
								else {
									printf("Limite da conta especial : %d\n", limite2);
								}
					}
				else if (saldo_cc < saldo_poupanca){
						limite = saldo_poupanca * 2;
						limite2 = saldo_cc * 3;
							if (limite > limite2){
								printf("Limite da conta especial : %d\n", limite);
								
							}
								else{
									printf("limite da conta especial: %d\n", limite2);
								}
					}
			}	
		system ("pause");
		return 0;			
}
