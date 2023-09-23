#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	int m, a,n,ca,cb ,mesas , branco, nulo, candidato_A, candidato_B;
	float votos_validos, votos_invalidos, votos_b, votos_a, votos_totais;
	
	setlocale(LC_ALL,"portuguese");
	
	m=1;
	a=0;
	n=0;
	ca=0;
	cb=0;
	
	printf("Informe o numero de mesas: ");
	scanf("%d", &mesas);
	
	while ( m <= mesas ){
		printf ("Informe a quantidade de votos Brancos: ");
		scanf ("%d", &branco);
		printf ("Informe a quantidade de votos nulos: ");
		scanf ("%d", &nulo);
		printf ("Informe a quantidade de votos do cantidato A: ");
		scanf ("%d", &candidato_A);
		printf ("Informe a quantidade de votos do cantidato B: ");
		scanf ("%d", &candidato_B);
		
		 a = a+branco;
		 n = n+nulo;
		 ca = ca + candidato_A;
		 cb = cb + candidato_B;
	 
		m++;
	}
	
	votos_validos= (float)cb + ca;
	votos_totais=(float) ca + cb + n + a;
	votos_invalidos = (float)((n+a)* 100)/votos_totais;
	votos_b =(float) (cb * 100)/votos_validos;
	votos_a =(float) (ca*100)/votos_validos;
	
	if (votos_a > votos_b){
		printf("candidato A ganhou\n");
		printf("votos em a: %.2f%% \n", votos_a);
		printf("votos em b: %.2f%% \n", votos_b);
		printf("votos invalidos: %.2f%% \n", votos_invalidos);
	}
	else if (votos_a < votos_b){
		printf("candidato B ganhou\n");
		printf("votos em a: %.2f%% \n", votos_a);
		printf("votos em b: %.2f%% \n", votos_b);
		printf("votos invalidos: %.2f%%\n", votos_invalidos);
	}
	else {
		
		printf("empate\n");
		printf("votos em a: %.2f%%\n", votos_a);
		printf("votos em b: %.2f%%\n", votos_b);
		printf("votos invalidos: %.2f%%\n", votos_invalidos);
	}
	
	system("pause");
	
}
