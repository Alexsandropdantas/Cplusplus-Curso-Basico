#include<iostream>

int main(){

/* 
Declaração de constantes   #define <nome_da_constante> valor
#define PI 3,1415926536
hex = 0xFF; // 255 em decimal 
oct = 011; // 9 em decimal 
*/
// Declaração de variáveis    Definição<tipo> <nomev> [ {, <nomev> } ] ;
float juros;
int val = 10; /*declara e atribui o valor 10 à variável val*/
char a = 'x'; /*declara e atribui o caractere x à variável a*/
double d1, d2, w, z;
int b_global; /* Declaração de variáveis globais */

z = w + d1 + d2 + b_global;

// OPERADORES DE ASSINALAMENTO
// var = var op expr       var op= expr
int i, j, k;

i += 2; /* É equivalente a: i = i + 2 */
j -= 3; /* É equivalente a: j = j – 3 */
k >>= 3; /* É equivalente a: k = k >> 3;
int z &= flag; /* É equivalente a: z = z & flag;

/* 
OPERADORES DE ENDEREÇO
 Usados com ponteiros (pointers), para acesso a endereços de memória.	
 Operador Significado	
 &	endereço de uma variável
 *	conteúdo do endereço especificado
*/
int var, *x;
x = &var;
var = *x;


/*
CÓDIGOS DE BARRA INVERTIDA
\b	Retrocesso
\f	Alimentação de formulário
\n	Nova linha
\r	Retorno de carro
\t	Tabulação horizontal
\”	Aspas
\’	Apóstrofo
\0	Nulo
\\	Barra invertida
\v	Tabulação vertical
\a	Sinal sonoro
\N	Constante octal
\xN	Constante hexadecimal



*/



system("pause");
return 0;
}
