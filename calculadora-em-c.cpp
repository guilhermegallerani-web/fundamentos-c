#include <stdio.h>

int main() {

	int numero1;
	int numero2;
	
	int soma;
	int subtracao;
	int multiplicacao;

	float divisao;
	
	
	printf("Digite seu primeiro numero: ");
	scanf("%d" , &numero1);

	printf("Digite seu segundo numero: ");
	scanf("%d", &numero2);
	
	
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
	divisao = (float)numero1 / numero2;
	
	
    printf("A soma é: %d\n", soma);
    printf("A subtracao é: %d\n", subtracao);
    printf("A multiplicacao é: %d\n", multiplicacao);
	printf("Divisao é: %.2f\n", divisao);
    
	return 0;
}