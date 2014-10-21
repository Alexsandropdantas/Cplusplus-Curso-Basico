#include <iostream>

     /* Fun��es matem�ticas*/
#include<cmath>
     /* Fun��es string*/
#include<cstring>
     /* Fun��es string C++ */
#include<string>
     /* Fun��es I/O */
#include<cstdio>
     /* Fun��es tempo */
#include<ctime>

/* em c usa-se printf e scanf, em C++ tamb�m, mas tamb�m cin e cout */

      // namespace std � um aviso ao compilador que se usar� fun��es padr�o de C++
using namespace std;


      /* vari�veis globais - para ser global deve-se declarar antestes das fun��es Ex.: main() */
string nome = "alex";
int resultado = 0;

      /* Constantes */
const int eterna = 33000;

      /* Fun��es */
int paginasLivro (unsigned int paginas){
    cout << "\nPaginas Livro \n";
    return 0;   
}
int cubo(int valor){
    resultado = valor*valor*valor;
    return resultado;
    } 
    
      /* Vari�veis locais */
void valores_locais(){
int a = 1, b = 2, c = 3;
cout <<" A vale " << a <<" B vale " <<b <<" C vale " <<c;
     }

      /* Fun��es recursivas */
unsigned long fatorial_recursivo(int n){
 unsigned long resposta;
 if((n ==1) || (n ==0))
 return(1);
 resposta = n*fatorial_recursivo(n-1);
 return (resposta);
}

      /*   Funcoes inline   s�o mais r�pidas pois otmizam pulos de memoria, basta colocar "inline" no inicio 
      Obs.: n�o se pode criar fun��es inline recursivas, pois a fun��o teria tamanho vari�vel de aloca��es de mem�ria */
inline int quadrado(long l){
l = l * l;
return l;
}

      /* fun��es com Parametro padr�o */
void mensagem (int k = 1){
cout <<" Foi passado o valor padrao: " << k;
     }

int main(){
 cout << "Ola Mundo! \n";
 cout << nome;

      /*  Operadores de endere�o   */
int var, *x;
x = &var;
var = *x;

      /* type cast --> (tipo) vari�vel_ou_express�o */
short p = short(eterna);  // ouve perca pois a vari�vel n�o est� unsigned (sem sinal para ampliar))

unsigned long f;
int n;
cout <<"Digite um numero para calcular o fatorial: \n";
cin >> n;
f = fatorial_recursivo(n);
cout << " O fatrial de " << n << " e " << f << " \n";

valores_locais();
paginasLivro(10);
cubo(3); 
mensagem();
cout << p;

cout << resultado;

      /* diz ao sistema operacional que pause o programa at� que o usu�rio digite alguma tela */ 
 system("pause > null");
 return 0;   
}

