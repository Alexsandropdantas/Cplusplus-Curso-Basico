#include<iostream>

int main(){

/* 
Declara��o de constantes   #define <nome_da_constante> valor
#define PI 3,1415926536
hex = 0xFF; // 255 em decimal 
oct = 011; // 9 em decimal 
*/
// Declara��o de vari�veis    Defini��o<tipo> <nomev> [ {, <nomev> } ] ;
float juros;
int val = 10; /*declara e atribui o valor 10 � vari�vel val*/
char a = 'x'; /*declara e atribui o caractere x � vari�vel a*/
double d1, d2, w, z;
int b_global; /* Declara��o de vari�veis globais */

z = w + d1 + d2 + b_global;

// OPERADORES DE ASSINALAMENTO
// var = var op expr       var op= expr
int i, j, k;

i += 2; /* � equivalente a: i = i + 2 */
j -= 3; /* � equivalente a: j = j � 3 */
k >>= 3; /* � equivalente a: k = k >> 3;
int z &= flag; /* � equivalente a: z = z & flag;

/* 
OPERADORES DE ENDERE�O
 Usados com ponteiros (pointers), para acesso a endere�os de mem�ria.	
 Operador Significado	
 &	endere�o de uma vari�vel
 *	conte�do do endere�o especificado
*/
int var, *x;
x = &var;
var = *x;


/*
C�DIGOS DE BARRA INVERTIDA
\b	Retrocesso
\f	Alimenta��o de formul�rio
\n	Nova linha
\r	Retorno de carro
\t	Tabula��o horizontal
\�	Aspas
\�	Ap�strofo
\0	Nulo
\\	Barra invertida
\v	Tabula��o vertical
\a	Sinal sonoro
\N	Constante octal
\xN	Constante hexadecimal



*/



system("pause");
return 0;
}
