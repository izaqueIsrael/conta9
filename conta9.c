#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int i, j, n, num;
char numAux[10];

int main()
{
  for (i = 0; i <= 999; i++)
  {
    num = i;
    sprintf(numAux, "%d", num);
    int k = strlen(numAux) - 1;
    for (j = 0; j <= k; j++)
    {
      if (numAux[j] == '9')
        n++;
    }
  }
  printf("Existem %d números 9 de 0 a 999\n", n);
  sleep(3); // Pausa por 3 segundos antes de fechar
  return 0;
}