//CONTROLE DE ESTOQUE 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto {

	int codigo;
    char nome[50];
    int quantidade;
    float preco;	
};
	
	int main()  {

    	struct Produto produtos[100];

   		 int totalProdutos = 0;
   		 int opcao;
    	 int i;
       	 int codigoBusca;
    	 int quantidade;
    


	do {

        printf("\n--- CONTROLE DE ESTOQUE ---\n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Listar produtos\n");
        printf("3 - Entrada de estoque\n");
        printf("4 - Saida de estoque\n");
        printf("5 - Buscar produto\n");
        printf("0 - Sair\n");

        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:

                printf("\nCodigo: ");
                scanf("%d", &produtos[totalProdutos].codigo);

                printf("Nome: ");
                scanf("%s", produtos[totalProdutos].nome);

                printf("Quantidade: ");
                scanf("%d", &produtos[totalProdutos].quantidade);

                printf("Preco: ");
                scanf("%f", &produtos[totalProdutos].preco);

                totalProdutos++;

                printf("\nProduto cadastrado com sucesso!\n");

                break;

            case 2:

                printf("\n--- LISTA DE PRODUTOS ---\n");

                for(i = 0; i < totalProdutos; i++) {

                    printf("\nProduto %d\n", i + 1);
                    printf("Codigo: %d\n", produtos[i].codigo);
                    printf("Nome: %s\n", produtos[i].nome);
                    printf("Quantidade: %d\n", produtos[i].quantidade);
                    printf("Preco: %.2f\n", produtos[i].preco);
                }

                break;

            case 3:

                printf("\nCodigo do produto: ");
                scanf("%d", &codigoBusca);

                for(i = 0; i < totalProdutos; i++) {

                    if(produtos[i].codigo == codigoBusca) {

                        printf("Quantidade para entrada: ");
                        scanf("%d", &quantidade);

                        produtos[i].quantidade += quantidade;

                        printf("Estoque atualizado!\n");
                    }
                }

                break;

            case 4:

                printf("\nCodigo do produto: ");
                scanf("%d", &codigoBusca);

                for(i = 0; i < totalProdutos; i++) {

                    if(produtos[i].codigo == codigoBusca) {

                        printf("Quantidade para saida: ");
                        scanf("%d", &quantidade);

                        if(quantidade <= produtos[i].quantidade) {

                            produtos[i].quantidade -= quantidade;

                            printf("Saida realizada!\n");

                        } else {

                            printf("Estoque insuficiente!\n");
                        }
                    }
                }

                break;

            case 5:

                printf("\nDigite o codigo: ");
                scanf("%d", &codigoBusca);

                for(i = 0; i < totalProdutos; i++) {

                    if(produtos[i].codigo == codigoBusca) {

                        printf("\nProduto encontrado!\n");
                        printf("Nome: %s\n", produtos[i].nome);
                        printf("Quantidade: %d\n", produtos[i].quantidade);
                        printf("Preco: %.2f\n", produtos[i].preco);
                    }
                }

                break;

            case 0:

                printf("\nSaindo...\n");

                break;

            default:

                printf("\nOpcao invalida!\n");
        }

    } while(opcao != 0);

    return 0;
}
