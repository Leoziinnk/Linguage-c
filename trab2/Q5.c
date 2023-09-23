#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{     
	setlocale(LC_ALL,"portuguese"); 
	float R1, R2, C1, C2, H1, H2, req;
	int componentes, op;
      
	printf("==================================================\nAssocia��o de resistores, Capacitores e Indutores\n==================================================");
    printf("\nEscolha um componente\n 1. Resistor \n 2. Capacitor \n 3. Indutor\n");
    scanf("%d", &componentes);
        
	switch(componentes){
		case 1 : printf("Informe o valor de R1: ");
				 	scanf("%f", &R1);
				 printf("Informe o valor de R2: ");
				 	scanf("%f", &R2);
				 printf("selecione a associa��o\n 1. S�rie\n 2. Paralelo\n");
				 scanf("%d", &op);
		        switch (op){
		        	case 1 : req = R1 + R2 ;
		        			printf("O resultado da associa��o serie dos resistores informados � %.2f ohms\n\n", req);
		        				break;
		        	case 2 : if (!R2 || !R1 ){
		        					printf("\nOpera��o inv�lida\n\n");
								break;
								}
							 req = (R1*R2)/ (R1+R2);
		        	    	printf("\nO resultado da associa��o em paralelo dos resistores informados � %.2f ohms\n", req);
		        	    		break;
		        	default : printf("\nOpera��o inv�lida");					
				}
				break;
	case 2 : printf("Informe o valor de C1: ");
			 	scanf("%f", &C1);
			  	
			 printf("Informe o valor de C2: ");
				 scanf("%f", &C2); 	
				
			 printf("Selecione a associa��o\n 1. S�rie\n 2. Paralelo\n");
			 	scanf("%d", &op);
			 		switch(op){
			 			case 1: if (!C1 || !C2){
			 				printf("\nOpera��o inv�lida\n");
							break;
						 }
					 			req = (C1*C2)/(C1+C2);
					 			printf("\nO resultado da associa��o serie dos capacitores informados � %.2f �F \n ", req);
					 				break;
					 
						 case 2 : req = C1 + C2 ;
					 			printf("\nO resultado da associa��o em paralelo dos capacitores informados � %.2f �F\n",req);
									break; 			
			 				
			 			default: printf("\nOpera��o inv�lida");
					 }
					 break; 
	case 3 : printf("Informe o valor de H1: ");
			 	scanf("%f", &H1);
			 printf("Informe o valor de H2: ");
			 	scanf("%f", &H2);
			 printf("Selecione a associa��o\n 1. S�rie\n 2. Paralelo\n");;
				 scanf("%d",&op);
			 		switch (op){
			 			case 1 : req = H1 + H2;
			 					 printf("\nO resultado da associa��o serie dos indutores informados � %.2f  mH \n ",req);
			 						break;
			 		   	
						case 2 : if (!H1 || !H2){
								 printf("\nOpera��o inv�lida\n");
								 	break;
						}		 	
								 req = (H1*H2)/(H1+H2);
								 printf("\nO resultado da associa��o em paralelo dos indutores informados � %.2f  mH \n ",req);
									break;
					
						default : printf("\nOpera��o inv�lida\n");
					 }
		default : printf("\nOpera��o inv�lida\n");	
	}        
     	
	system("pause");
	return 0;
	
}
