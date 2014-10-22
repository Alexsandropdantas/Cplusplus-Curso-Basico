#include<iostream>
using namespace std;

/*  Utilização de dos comandos cout e cin  */


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
 
 /* Overload de operador = é utilizado o operador de inserção "<<" mais de uma vez para uma chamada cout */
 cout << "Jose das Dores" << " \n";
 cout << nome << " \n";
 cout << nome2 << " \n";

/* Escolhendo base numérica */

int numero = 10;
cout << hex;
cout << dec;
cout << oct;

cout << numero << " \n"; // vai imprimir 12 pois ficou a base como octal


/* Formatando numeros reais */
cout << fixed; // utulizado para definir ponto fixo

/* Cientificos */
cout << scientific; // define notção cientifica Ex.: 3.21E-2

/* Definindo o tamanho padrão de saída */
cout.width(5); // especifica o mínimo de caracteres de saída, caso menos completados com branco
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
/* precisão de variáveis reais */
int valor = 123;
cout << dec;
cout.precision(valor); // por padrão C++ usa 6 casas decimeis apos a virgula
cout << valor;


int option;
    cout << "Digite a opção desejada: \n";
    cout << "1. Opção 1\n";
    cout << "2. Opção 2\n";
    cout << "3. Opção 3\n";
    option = 0;
    cin >> option;
    switch(option)
    {
                  case 1:
                       cout<<"Você escolheu a primeira opção\n";
                       break;
                  case 2:
                       cout<<"Você escolheu a segunda opção\n";
                       break;
                  case 3:
                       cout<<"Você escolheu a treceira opção\n";
                       break;
                  default:
                       cout<<"Você escolheu uma opção inválida!\n";
      }
cout << endl;                       
                   
/* Matrizes <tipo><nome>[<numero de elementos>]   */                       
int matrizInt[5] = {1,2,3,4,5};
cout << "O primeiro valor da Matriz é: " << matrizInt[0] << endl;


/* laços para percorrer matrizes */
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

/* Matrizes dinâmicas*/
/* operador new cria e aloca a memória, operador delete limpa(deleta a matriz) a memória alocada de new isso agiliza a execução inicial do programa que não faz tudo ao iniciar */
/* <tipo> * <nome> = new <tipo> [,numero de elementos>];  */
float * lista = new float[10];
delete lista;   // delete <nome>  isso limpará a matriz ;


system("pause >> null");

}
