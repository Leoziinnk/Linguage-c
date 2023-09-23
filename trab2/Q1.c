#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"portuguese");
	float tempo, peso;
	int idade,pontuacao;
			
	printf("Idade do competidor :  ");
	scanf("%d", &idade);
	printf("Peso das aboboras em Kg: ");
	scanf ("%f", &peso);
	printf("Tempo do percurso: ");
	scanf("%f", &tempo);
	system("cls");
	
		if (idade < 18 && tempo <=30){
		
		 pontuacao= peso*3;
		 printf ("Categoria: Jovem\n");
		 printf ("Pontos: %d\n", pontuacao);
		 }
			else if (idade < 18 && tempo > 30){
				
					pontuacao= peso*2;
					printf ("Categoria: Jovem\n");
					printf ("Pontos: %d\n", pontuacao);
				}
	 	if (idade >= 18 && idade < 50 && tempo <=30){
	 	  
		  pontuacao = peso * 5;
		  printf("Categoria: Adulto\n");
		  printf("Pontos : %d\n", pontuacao);
		 }
		 	else if(idade >= 18 && idade < 50 && tempo > 30){
		 		
				    pontuacao = peso * 4;
				    printf("Categoria: Adulto\n");
				    printf("Pontos: %d",pontuacao);
				 }
		if (idade > 50 && tempo <= 30){
			
			pontuacao= peso * 7;
			printf("Categoria: Sênior\n");
			printf("Pontos: %d\n", pontuacao);
		 }		 
		 	else if (idade >50 && tempo > 30 ){
		 			
		 			pontuacao = peso * 6;
		 			printf("Categoria : Sênior\n");
		 			printf("Pontos: %d\n", pontuacao);
			 		}
			 	
	system ("pause");
	return 0;
				 
}
