// Recebe uma matriz A que representa as interliga��es entre 
// cidades 0,1,..,5: h� uma estrada (de m�o �nica) de i a j 
// se e s� se A[i][j] == 1.  Devolve um vetor d que registra 
// as dist�ncias da cidade c a cada uma das outras: d[i] � a 
// dist�ncia de c a i.
#include <iostream>
#include <stdio.h>
#include <stdlib.h>


#include <stdio.h>
#include <stdlib.h>
 
 int *distancias( int A[][6], int c)
{
   int *d, j;
   int fila[6], ini, fim;

   d = mallocc( 6 * sizeof (int));
   for (j = 0; j < 6; ++j)  d[j] = 6;
   d[c] = 0;
   ini = 0; fim = 1; fila[0] = c;  // c entra na fila

   while (ini != fim) { 
      int i, di;
      i = fila[ini++];  // i sai da fila
      di = d[i];
      for (j = 0; j < 6; ++j)
         if (A[i][j] == 1 && d[j] >= 6) {
            d[j] = di + 1;
            fila[fim++] = j;  // j entra na fila
         }
   }
   return d;
}
 


