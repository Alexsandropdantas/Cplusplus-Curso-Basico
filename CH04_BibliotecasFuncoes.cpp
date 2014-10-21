#include <iostream>

     /* Funções matemáticas*/
#include<cmath>
     /* Funções string*/
#include<cstring>
     /* Funções string C++ */
#include<string>
     /* Funções I/O */
#include<cstdio>
     /* Funções tempo */
#include<ctime>

/* em c usa-se printf e scanf, em C++ também, mas também cin e cout */

      // namespace std é um aviso ao compilador que se usará funções padrão de C++
using namespace std;


      /* variáveis globais - para ser global deve-se declarar antestes das funções Ex.: main() */
string nome = "alex";
int resultado = 0;

      /* Constantes */
const int eterna = 33000;

      /* Funções */
int paginasLivro (unsigned int paginas){
    cout << "\nPaginas Livro \n";
    return 0;   
}
int cubo(int valor){
    resultado = valor*valor*valor;
    return resultado;
    } 
    
      /* Variáveis locais */
void valores_locais(){
int a = 1, b = 2, c = 3;
cout <<" A vale " << a <<" B vale " <<b <<" C vale " <<c;
     }

      /* Funções recursivas */
unsigned long fatorial_recursivo(int n){
 unsigned long resposta;
 if((n ==1) || (n ==0))
 return(1);
 resposta = n*fatorial_recursivo(n-1);
 return (resposta);
}

      /*   Funcoes inline   são mais rápidas pois otmizam pulos de memoria, basta colocar "inline" no inicio 
      Obs.: não se pode criar funções inline recursivas, pois a função teria tamanho variável de alocações de memória */
inline int quadrado(long l){
l = l * l;
return l;
}

      /* funções com Parametro padrão */
void mensagem (int k = 1){
cout <<" Foi passado o valor padrao: " << k;
     }

int main(){
 cout << "Ola Mundo! \n";
 cout << nome;

      /*  Operadores de endereço   */
int var, *x;
x = &var;
var = *x;

      /* type cast --> (tipo) variável_ou_expressão */
short p = short(eterna);  // ouve perca pois a variável não está unsigned (sem sinal para ampliar))

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

      /* diz ao sistema operacional que pause o programa até que o usuário digite alguma tela */ 
 system("pause > null");
 return 0;   
}

