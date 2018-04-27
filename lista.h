#ifndef LISTA_H
#define LISTA_H

typedef struct no Dados;
 
//void crialista();
void crialista(Dados **pLista)

//void inserelista();
void inserelista(char nome, int linha, int coluna, float nomematriz, Dados **pLista)

//void removelista();


//void buscalista();
void buscalista(Dados *Lista, int n);

#endif
