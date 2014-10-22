#include<iostream>
using namespace std;

/*  Utiliza��o de dos comandos cout e cin  */


int main(){
 
/* cin optem valores das entradas do teclado */
char variavel_destino;
cin >> variavel_destino;

/* metodo cin.getline  -->  cin.getline(<matriz_destino>, <limite de caracteres>);  */ 
char matriz[60];
cin.getline(matriz, 50);
cout << matriz;
 
 char nome[20] = "Jose das galinhas";
 char*nome2 = "Jose das Couves";
 
 /* Overload de operador = � utilizado o operador de inser��o "<<" mais de uma vez para uma chamada cout */
 cout << "Jose das Dores" << " \n";
 cout << nome << " \n";
 cout << nome2 << " \n";

/* Escolhendo base num�rica */

int numero = 10;
cout << hex;
cout << dec;
cout << oct;

cout << numero << " \n"; // vai imprimir 12 pois ficou a base como octal


/* Formatando numeros reais */
cout << fixed; // utulizado para definir ponto fixo

/* Cientificos */
cout << scientific; // define not��o cientifica Ex.: 3.21E-2

/* Definindo o tamanho padr�o de sa�da */
cout.width(5); // especifica o m�nimo de caracteres de sa�da, caso menos completados com branco
cout << nome2;

/* para determinar os caracteres em vez do branco deve-se usar cout.fill("")  */

int palavra = 10;
cout.width(8);
cout.fill('0');
cout << palavra << "\n";


/* Alinhamnto de Texto*/
cout << right << "Ola Mundo\n";
cout << left  << "Ola mundo\n";

system("pause >> null"); 
/* precis�o de vari�veis reais */
int valor = 123;
cout << dec;
cout.precision(valor); // por padr�o C++ usa 6 casas decimeis apos a virgula
cout << valor;


int option;
    cout << "Digite a op��o desejada: \n";
    cout << "1. Op��o 1\n";
    cout << "2. Op��o 2\n";
    cout << "3. Op��o 3\n";
    option = 0;
    cin >> option;
    switch(option)
    {
                  case 1:
                       cout<<"Voc� escolheu a primeira op��o\n";
                       break;
                  case 2:
                       cout<<"Voc� escolheu a segunda op��o\n";
                       break;
                  case 3:
                       cout<<"Voc� escolheu a treceira op��o\n";
                       break;
                  default:
                       cout<<"Voc� escolheu uma op��o inv�lida!\n";
      }
cout << endl;                       
                   
/* Matrizes <tipo><nome>[<numero de elementos>]   */                       
int matrizInt[5] = {1,2,3,4,5};
cout << "O primeiro valor da Matriz �: " << matrizInt[0] << endl;


/* la�os para percorrer matrizes */
int sequencia[4];
for(int i=0; i<4; i++){
        cout << "Entre com o elemento numero: " <<(i+1) <<" da sequencia: " ;
        cin >> sequencia[i];
        cout << endl;
        }
cout << " A sequencia entrada pelo ususario foi: ";
for(int i = 0; i<4; i++){
        cout << sequencia[i] <<" ";
        }

/* Matrizes Multidimensionais */
int tabela[2][3] = {{1,2,3}, {4,5,6}};

/* Matrizes din�micas*/
/* operador new cria e aloca a mem�ria, operador delete limpa(deleta a matriz) a mem�ria alocada de new isso agiliza a execu��o inicial do programa que n�o faz tudo ao iniciar */
/* <tipo> * <nome> = new <tipo> [,numero de elementos>];  */
float * lista = new float[10];
delete lista;   // delete <nome>  isso limpar� a matriz ;


system("pause >> null");

}
