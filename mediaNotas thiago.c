#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char nomes[30][50];
    float notas_prova[30], notas_trabalho[30], soma_sala, nota_final_aluno, media_sala;
    int opcao = -1, contador = 0, i;

    printf("---gerenciador de notas---\n");

    while(opcao =! 0){
        printf("=====MENU DO PROFESSOR=====\n\n");
        printf("-1---cadastrar novo aluno e notas\n");
        printf("-2---listar alunos e notas\n");
        printf("-3---calcular media geral da sala\n");
        printf("-0---para sair digite\n");
        
        printf("Por favor, escolha um: ");
        scanf("%d", &opcao);

        while(getchar() != '\n');

        switch(opcao){
            case 1:
            if (contador < 30){
                printf("Digite o nome do aluno(a):");
                fgets(nomes[contador], 50, stdin);
                nomes[contador][strcspn(nomes[contador], "\n")] = 0;

                printf("digite a nota da prova (0 a 7):");
                scanf("%f", &notas_prova[contador]);

                printf("digite a nota do trabalho (0 a 3):");
                scanf("%f", &notas_trabalho[contador]);

                contador++;
                printf("aluno cadastrado com sucesso!\n\n");
            }else{
                printf("falha ao cadastrar aluno (limite de alunos atingido)\n\n");
            }
            break;

            case 2:
                if (contador == 0) {
                    printf("Nenhum aluno cadastrado ainda.\n");
                } else {
                    printf("\n--- LISTA DE ALUNOS ---\n");
                    for (i = 0; i < contador; i++) {
                        // Calcula a nota final somando a prova e o trabalho
                        nota_final_aluno = notas_prova[i] + notas_trabalho[i];
                        printf("Aluno(a): %s | Prova: %.1f | Trabalho: %.1f | Nota Final: %.1f\n", 
                               nomes[i], notas_prova[i], notas_trabalho[i], nota_final_aluno);
                    }
                }
                break;

            case 3:
            	if(contador == 0){
            		printf("Cadastre a nota de pelo menos um aluno");
				}else{
					soma_sala = 0;
					for ( i = 0; i < contador; i++){
						nota_final_aluno = notas_prova[i] + notas_trabalho[i];
						soma_sala += nota_final_aluno;
					}
					media_sala = soma_sala / contador;
					printf("\nA média geral da sala (com %d alunos) é igual a: %.2f\n", contador, media_sala);
				}
            break;
            case 0:
                printf("encerrando o diario de classe.");
            break;
            
            default:
                printf("opção invalida");
            break;
        }
    }
    
    system("pause");
    return(0);
}