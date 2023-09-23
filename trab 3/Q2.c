#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	
	int B=0 , F=0 , P=0, opcao, idade, Brasil=0, Farroupilha= 0, Pelotas=0, total=0;
	
	do {
	
		printf("Selecione um time\n1. Brasil\n2. Pelotas\n3. Farroupilha\n ");
		scanf("%d",&opcao);
		if (opcao >=1 && opcao <= 3){
				
			printf(	"Insira a idade: ");
			scanf("%d", &idade);

		   switch(opcao){
	   	  
				case 1 : Brasil++;
					
					if (idade > 15 && idade <20){
					 B++;
					break;
			}
				case 2 : Pelotas++;
					break;
	 		
				case 3 : Farroupilha++;
					break; 
			
			    default : break;	
	   		}
	   		
			total++;
		}		 
	 } while (x=opcao >=1 && opcao <=3);

	 float torcedorf = (float) (Farroupilha*100)/total;
	 float torcedorp = (float)(Pelotas*100)/total;
	 float torcedorb = (float) (Brasil *100)/total;
	 
	printf("Brasil: %.2f%%\n", torcedorb);
	printf("Pelotas: %.2f%%\n", torcedorp);
	printf("Farroupilha: %.2f%%\n", torcedorf);
	printf("Brasil entre 15 e 20: %d\n", B);

}
