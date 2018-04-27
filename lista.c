#include "lista.h"

struct no { 
    char nome;
    int linha;
    int coluna;
    float **nomeM; 
    Dados *prox;
};

//CRIA LISTA VAZIA
void crialista(Dados **pLista)
{
	*pLista = NULL;
}

//INSERE UM NOVO NÓ NO INICIO DA LISTA
void inserelista(char nome, int linha, int coluna, float nomematriz, Dados **pLista)
{
	Dados *novo = (Dados *) malloc(sizeof(Dados));

	if(novo != NULL)
	{
		novo->nome = nome;
		novo->linha = linha;
    novo->coluna = coluna;
		novo->nomeM = nomematriz;
		novo->prox = *pLista;
		*pLista = novo;
	}
}

//REMOVE UM NÓ DA LISTA
void removelista();
{

}

//PROCURA UM NÓ NA LISTA
void buscalista(Dados *Lista, int n);
{
	Dados *aux;

	if (!Lista)
	{
		aux = Lista;

		while (!aux->prox)
		{
			if (aux->chave == n)
			{
				return 1;
			}
			aux = aux->prox;
		}
		return 0;
	}
}
