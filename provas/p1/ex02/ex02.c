#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definir as estruturas necessárias aqui (copiar do exercício anterior):
struct livros {
    char nome[100];
    float preco;
    char indicacao;
    int ano;
};

// Função:
// Essa função retorna o livro usado mais antigo
// - Entrada: todos os livros cadastrados 
// - Saída: índice do vetor indicando o livro usado mais antigo
// (se houver empate pode ser retornado qualquer um dos livros)
int livromaisantigo(struct livros *livro) {
    int i, antigo;
    antigo = 0;
    for (i = 1; i < 3; i++)
    {
        if (livro[i].ano < livro[antigo].ano && livro[i].indicacao == 'U')
        {
            antigo = i;
        }
    }

    return antigo;
    
};


int main(){
    // buscar livro mais antigo (buscar o livro mais antigo-> criar vetor estatico e testa 3 livros)
   // Ex02: utilizando a função de buscar, mostre
   // todas as informações do livro *usado* mais antigo

   // Todas as funções de entrada e saída devem estar no programa
   // principal
   struct livros livro[3];
   int indiceantigo;
   
//    strcpy(livro[0].nome, "Dark");
//    livro[0].preco = 100;
//    livro[0].indicacao = 'U';
//    livro[0].ano = 1990;

//    strcpy(livro[1].nome, "Light");
//    livro[1].preco = 300;
//    livro[1].indicacao = 'N';
//    livro[1].ano = 1980;

//    strcpy(livro[1].nome, "Middle");
//    livro[2].preco = 10220;
//    livro[2].indicacao = 'U';
//    livro[2].ano = 1991;


   indiceantigo = livromaisantigo(livro);

   // Dica: para testar, crie um vetor estático preenchido com alguns valores (opcional)
   printf("Livro usado mais antigo: \n");
   printf("Nome: %s\n", livro[indiceantigo].nome);
   printf("preco: %.2f\n", livro[indiceantigo].preco);
   printf("indicacao: %c\n", livro[indiceantigo].indicacao);
   printf("ano: %d\n", livro[indiceantigo].ano);
   

  
    return 0;
}