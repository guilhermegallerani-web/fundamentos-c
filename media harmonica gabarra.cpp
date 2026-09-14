//Algoritimo para calcular a média harmônica
//de uma quantidade n de valores


#include<stdio.h>
#include<stdlib.h>

int i, n;
float mh, soma = 0;

main()
{
		printf("Informe a quantidade de valores (n): ");
		scanf("%i", &n);
		float x[n];
		
		for(i=0;i<n;i++)
		{
			printf("Informe o valor %i: " , i+1);
			scanf("%f", &x[i]);
			if(x[i] > 0)	
					soma += 1 / x[i]; // soma = soma + 1/x[i];						
		
		else
		{
			printf("\n Voce entrou valor invalido (<=0) - entre um valor valido");
			i--;
		}		
		
		
		}
		
		
		mh = n / soma;
		printf("\nA media harmonica dos %1 valores e %.2f\n\n" , n , mh);
		
		
		system("pause");
	
}
		
		