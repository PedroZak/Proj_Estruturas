#include "matriz.h"

int CM(int** Matriz, int linha, int coluna) //CRIA MATRIZ
{
  int i;

  Matriz = malloc(sizeof(int)*linha*coluna);

  if(matriz != NULL)
  {
    for (i = 0 ; i < coluna; i++)
    {
      matriz[i] = malloc(sizeof(int)*coluna);
    }
    if(matriz[i] == NULL)
    {
      return NULL;
    }
  }
  return matriz;
}

void DM(int** matriz, int linha) //DESTRUIR MATRIZ
{
  int i;

  for (i = 0; i < linha ;i++)
  {
    free(matriz[i]);
  }
  free(matriz);
}

void IM(int** matriz, int linha, int coluna) //IMPRIMIR
{
  int i,j;

  for (i = 0; i < linha; i++)
  {
    for (j=0;j < coluna;j++)
    {
      printf("%d ",matriz[i][j]);
    }
    putchar('\n');
  }
}

void AE(int linha,int coluna) //ATRIBUI ELEMENTO A MATRIZ
{
  for (int i = 0; i < linha; i++)
  {
    for (int j = 0; i < coluna; j++)
    {
    /* code */
    }
  }
}

void AL(); //ATRIBUI LINHA A MATRIZ
{

}

void AC(); //ATRIBUI COLUNA A MATRIZ
{

} 

void TM(int linha, int coluna, int **matriz1, int **matriz2)//TRANSPOR UMA MATRIZ
{
  for (int i = 0; i < linha; i++)
  {
    for (int j = 0; j < coluna; j++)
    {
      matriz2[j][i] == matriz1[i][j];
    }
  }
}

void SM(int linha, int coluna, int** matriz1, int** matriz2)//SOMAR DUAS MATRIZES
{
  for (int i = 0; i < linha; i++)
  {
    for (int j = 0; j < coluna; j++)
    {
      soma[i][j]=matriz1[i][j]+matriz2[i][j];
    }
  }
}

void DV(int linha, int coluna, int** matriz1, int** matriz2)//DIVIDIR UMA MATRIZ POR OUTRA --> ELEMENTO POR ELEMENTO
{
  for (int i = 0; i < linha; i++)
  {
    for (int j = 0; j < coluna; j++)
    {
      divide[i][j]=matriz1[i][j]/matriz2[i][j];
    }
  }
}

void MM();//MULTIPLICAR UMA MATRIZ POR OUTRA
void ME(int linha, int coluna, int** matriz1, int** matriz2)//MULTIPLICAR UMA MATRIZ POR OUTRA --> ELEMENTO POR ELEMENTO
{
  for (int i = 0; i < linha; i++)
  {
    for (int j = 0; j < coluna; j++)
    {
      multiplica[i][j]=matriz1[i][j]*matriz2[i][j];
    }
  }
}

void FE();//FINALIZA A EXECUÇÃO DO PROGRAMA
