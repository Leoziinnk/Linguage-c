#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
 {
 	setlocale(LC_ALL,"portuguese");
 	
 	int frutas;
 	float kg, preco_kg, valor_total, valor_total_desconto;
 	
 		printf("==================\nSelecione a Fruta\n==================\n1. Bergamota\n2. Laranja\n3. Banana\n==================\n");
		scanf("%d", &frutas);
		system("cls");
		
		switch(frutas){
			case 1 : printf("Informe o peso das frutas: ");
					 	scanf("%f", &kg);
					 printf("Informe o preço por kg: ");
					 	scanf("%f",&preco_kg);
					 system("cls");
					 
					 if (kg <= 1,5){
					 		valor_total = kg * preco_kg;
					 		
							printf("Fruta: Bergamota \n Peso: %.2f kg \nValor total da compra:R$ %.2f\n", kg, valor_total);
					 }
				
					 else if(kg > 1,5 && kg <= 3){	
							valor_total = (kg*preco_kg);
							valor_total_desconto= valor_total * 0.05 ;    // 0.05 valor em decimal de 5%
							valor_total_desconto= valor_total - valor_total_desconto;
								
							printf("Fruta: Bergamota \nPeso: %.2f kg \nValor total da compra:R$ %.2f\nDesconto: 5%%\nValor com desconto: R$%.2f\n",kg, valor_total,valor_total_desconto);
							
		        	 }
					 else if(kg > 3){
					  		valor_total = kg * preco_kg;
					  		valor_total_desconto = valor_total * 0.15 ;   // 0.15 valor em decimal de 15%
					  		valor_total_desconto= valor_total - valor_total_desconto;
					  		
					  		printf("Fruta: Bergamota \nPeso: %.2f kg \nValor total da compra: R$ %.2f\nDesconto: 15%%\nValor com desconto: R$%.2f\n",kg, valor_total,valor_total_desconto);
					  }
					  break;
					  
			case 2 : printf("Informe o peso das frutas: ");
						 scanf("%f", &kg);
					 printf("Informe o preço por kg: ");
						 scanf("%f",&preco_kg);	
					 system("cls");  
					 
					if(kg <= 2){
						
						valor_total= kg * preco_kg;
						
						printf("Fruta: Laranja\n");
						printf("Peso: %.2f\nValor total da compra: R$%.2f",kg,valor_total);
					}
					else if (kg > 2 && kg <= 4.5){
						valor_total = kg * preco_kg;
						valor_total_desconto = valor_total * 0.10;  // 0.10 valor em decimal de 10%
						valor_total_desconto= valor_total - valor_total_desconto;
						
						printf("Fruta: Laranja\n");
						printf("Peso: %.2f\nValor total da compra: R$%.2f\n", kg , valor_total);
						printf("Desconto: 10 %%\nValor com desconto: R$%.2f\n",valor_total_desconto);
					}
					else if (kg > 4.5){
						valor_total = kg * preco_kg;
						valor_total_desconto = valor_total * 0.20;  // 0.20 valor em decimal de 20%
						valor_total_desconto= valor_total - valor_total_desconto;
						
						printf("Fruta: Laranja\n");
						printf("Peso: %.2f\nValor total da compra: R$%.2f\n", kg , valor_total);
						printf("Desconto: 20%%\nValor com desconto: R$%.2f\n",valor_total_desconto);
					}
					 break;	
						
			case 3 : printf("Informe o peso das frutas: ");
					 	scanf("%f", &kg);
					 printf("Informe o preço por kg: ");
					 	scanf("%f",&preco_kg);	  
					 system("cls");
					 
					 if (kg <= 3){
					    valor_total = kg * preco_kg;
					 	
					    printf("Fruta: Banana\n");
					    printf("Peso: %.2f\nValor total da compra: R$ .2f\n", kg, valor_total);
					 	
					 }		
					else if (kg > 3 ){
						valor_total = kg * preco_kg;
						valor_total_desconto = valor_total * 0.15 ; // 0.15 valor em decimal de 15%
						valor_total_desconto= valor_total - valor_total_desconto;
						
						printf("Fruta: Banana\n");
						printf("Peso: %.2f\nValor total da caompra: R$.2f\n", kg, valor_total);
						printf("Desconto: 15%% \nValor com desconto: R$.2f\n",valor_total_desconto);
					}
					break;
					
			default : {
				printf("Operação Inválida\n");
			}		
			system("pause");
			return 0;
    }	
} 
