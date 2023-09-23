#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{     
	setlocale(LC_ALL,"portuguese"); 
	float R1, R2, C1, C2, H1, H2, req;
	int componentes, op;
      
	printf("==================================================\nAssociação de resistores, Capacitores e Indutores\n==================================================");
    printf("\nEscolha um componente\n 1. Resistor \n 2. Capacitor \n 3. Indutor\n");
    scanf("%d", &componentes);
        
	switch(componentes){
		case 1 : printf("Informe o valor de R1: ");
				 	scanf("%f", &R1);
				 printf("Informe o valor de R2: ");
				 	scanf("%f", &R2);
				 printf("selecione a associação\n 1. Série\n 2. Paralelo\n");
				 scanf("%d", &op);
		        switch (op){
		        	case 1 : req = R1 + R2 ;
		        			printf("O resultado da associação serie dos resistores informados é %.2f ohms\n\n", req);
		        				break;
		        	case 2 : if (!R2 || !R1 ){
		        					printf("\nOperação inválida\n\n");
								break;
								}
							 req = (R1*R2)/ (R1+R2);
		        	    	printf("\nO resultado da associação em paralelo dos resistores informados é %.2f ohms\n", req);
		        	    		break;
		        	default : printf("\nOperação inválida");					
				}
				break;
	case 2 : printf("Informe o valor de C1: ");
			 	scanf("%f", &C1);
			  	
			 printf("Informe o valor de C2: ");
				 scanf("%f", &C2); 	
				
			 printf("Selecione a associação\n 1. Série\n 2. Paralelo\n");
			 	scanf("%d", &op);
			 		switch(op){
			 			case 1: if (!C1 || !C2){
			 				printf("\nOperação inválida\n");
							break;
						 }
					 			req = (C1*C2)/(C1+C2);
					 			printf("\nO resultado da associação serie dos capacitores informados é %.2f µF \n ", req);
					 				break;
					 
						 case 2 : req = C1 + C2 ;
					 			printf("\nO resultado da associação em paralelo dos capacitores informados é %.2f µF\n",req);
									break; 			
			 				
			 			default: printf("\nOperação inválida");
					 }
					 break; 
	case 3 : printf("Informe o valor de H1: ");
			 	scanf("%f", &H1);
			 printf("Informe o valor de H2: ");
			 	scanf("%f", &H2);
			 printf("Selecione a associação\n 1. Série\n 2. Paralelo\n");;
				 scanf("%d",&op);
			 		switch (op){
			 			case 1 : req = H1 + H2;
			 					 printf("\nO resultado da associação serie dos indutores informados é %.2f  mH \n ",req);
			 						break;
			 		   	
						case 2 : if (!H1 || !H2){
								 printf("\nOperação inválida\n");
								 	break;
						}		 	
								 req = (H1*H2)/(H1+H2);
								 printf("\nO resultado da associação em paralelo dos indutores informados é %.2f  mH \n ",req);
									break;
					
						default : printf("\nOperação inválida\n");
					 }
		default : printf("\nOperação inválida\n");	
	}        
     	
	system("pause");
	return 0;
	
}
