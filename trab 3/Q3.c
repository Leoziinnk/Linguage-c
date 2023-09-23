#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	
	int a , b , c , cont_a,cont_b,cont_c, total, porca, porcb,porcc;
	
		printf("Informe a quatidade de votos do candidato 1: ");
		scanf("%d",&a);
		printf("Informe a quatidade de votos do candidato 2: ");
		scanf("%d",&b);
		printf("Informe a quatidade de votos do candidato 3: ");
		scanf("%d",&c);
	
		total= a+ b+c;
		porca = (float)a * 100 / total;
		porcb = (float)b * 100 / total;
		porcc = (float)c * 100 / total;
	
	
		for (cont_a=1; cont_a <=(int)porca/5  ; cont_a++){
		
		printf("*");
		
		}
				printf("%d%%\n",porca);
		
		for (cont_b=1; cont_b <=(int)porcb/5  ; cont_b++){
		
		printf("*");
		
		}
				printf("%d%%\n",porcb);
			
		for (cont_c=1; cont_c<=(int)porcc/5  ; cont_c++){
		
		printf("*");
		
		}
				printf("%d%%\n",porcc);
	
	system("pause");
	return 0;
		
}
