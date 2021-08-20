#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fazer um programa para cadastro de livros. As informações para cadastro são: 
// - o nome do livro
// - O preço
// - Indicação se o livro é novo ou usado
// - ano de compra


// Definir as estruturas necessárias aqui:
struct livros {
    char nome[100];
    float preco;
    char indicacao;
    int ano;
};

int main(){

    // Ex 01: permitir que o usuário cadastre quantos livros quiser
    //  - ler do teclado a quantidade de livros que o usuário escolheu
    //  - ler do teclado as informações dos livros
    int n, i;

    printf("Informe quantos livros deseja cadastrar: ");
    scanf(" %d", &n);
    struct livros livro[n];
    for (i = 0; i < n; i++)
    {
        printf("Informe o nome do livro %d: ", i+1);
        fflush(stdin);
        gets(livro[i].nome);
        printf("Informe o preco do livro %d: R$ ", i+1);
        scanf(" %f", &livro[i].preco);
        printf("Informe se o livro %d eh novo(N) ou usado(U): ", i+1);
        scanf(" %c", &livro[i].indicacao);
        printf("Informe o ano do livro %d: ", i+1);
        scanf(" %d", &livro[i].ano);
        printf("\n");
    }
    
  
    return 0;
}