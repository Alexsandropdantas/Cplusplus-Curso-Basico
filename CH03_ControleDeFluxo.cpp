#include <iostream>
#include <stdio.h>

int main(){

/* ------ função printf()  ---------------------------------------------------------
a função prinf()  pode usar os Códigos:
%c	Exibe um caractere
%d	Exibe um inteiro em formato decimal
%i	Exibe um inteiro
%e	Exibe um número em notação científica (com e minúsculo)
%E	Exibe um número em notação científica (com E maiúsculo)
%f	Exibe um ponto flutuante em formato decimal
%g	Usa %e ou %f, o que for menor
%G	O mesmo que %g, só que um E maiúsculo é usado se o formato %e for escolhido
%o	Exibe um número em notação octal
%s	Exibe uma string
%u	Exibe um decimal sem sinal
%x	Exibe um número em hexadecimal com letras minúsculas
%X	Exibe um número em hexadecimal com letras maiúsculas
%%	Exibe um sinal de %]
%p	Exibe um ponteiro
*/

printf("%-6.2f \n", 123.234);     //saída |123.23|
printf("%6.2f \n", 3.234);        //saída |  3.23|
printf("%10s \n", "Alo");         //saída |Alô       |
printf("%-10s \n", "Alo");        //saída |       Alô|
printf("%5.7s \n", "123456789");  //saída |1234567|
printf ("Characters: %c %c \n", 'a', 65);
printf ("Decimais: %d %ld\n", 1977, 650000L);
printf ("Precedido de branco: %10d \n", 1977);
printf ("Precedido de zeros: %010d \n", 1977);
printf ("Algumas raizes diferentes: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
printf ("Truque de largura: %*d \n", 5, 10);
printf ("%s \n", "Um texto");
// --------------------------------------------------------------------------------


/* ------ função SCANF() ----------------------------------------------------------
é uma das funções de entrada de dados da linguagem C


*/
char s1[80], s2[80];
printf("Escreva dois valores \n");
scanf ("%[1234567890]%s \n", s1, s2);
printf ("\n%s| |%s", s1, s2);
// --------------------------------------------------------------------------------

/* ------------ if else-----------------------*/
int i;
printf ("Informe um número: ");
scanf ("%d", &i);
if (i < 0) 
   printf ("O número é negativo");
else 
   printf ("O número é positivo ou nulo");

/*--------------------------------------------*/


/* ------------------- laço for ------------------------ */
int x;
for (x = 1; x <= 100; x++){
printf ("%d ", x);
}

/* ------------------------------------------------------*/


system("pause");
return 0;
}
