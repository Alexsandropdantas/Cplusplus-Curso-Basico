// Recebe uma matriz A que representa as interligações entre 
// cidades 0,1,..,5: há uma estrada (de mão única) de i a j 
// se e só se A[i][j] == 1.  Devolve um vetor d que registra 
// as distâncias da cidade c a cada uma das outras: d[i] é a 
// distância de c a i.
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
 


