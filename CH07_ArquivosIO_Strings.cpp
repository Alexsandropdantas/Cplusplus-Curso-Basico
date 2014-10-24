#include<iostream>
#include<string>
#include<fstream>

using namespace std;

string s1;                               // cria uma string vazia (default)
string s2(s1);                           // cria uma cópia de s1 e passa para s2
string s3("Esta é uma string literal");  // cria uma string com o conteúdo entre aspas 
string s4(10,'l');                        // s4 contém x cópias do caractere entre aspas (c)

void cadastrarNome(){
 string nome;
 string sobrenome;
 cout <<"Digite seu nome: ";             
 getline(cin, nome);                     // não utilizamos só o cin pois se o nome for duplo ou conter um espaço só fica o primeiro
 cout <<"Digite o segundo nome: ";       
 getline(cin, sobrenome);                // se o sobrenome for mais de 1 com cin ficaria só um
 cout <<"Seu nome e "<<nome<<" e seu sobrenome e "<<sobrenome<<endl;
 
 if(s1.empty()){cout<<"S1 esta vazia"<<endl;}    //s.empty verifica se a sring esta vazia
 
 cout <<"O tamanho de s3 e: " <<s3.size()<<endl; // s.size() retorna o tamanho da string
 
 cout <<"A segunda letra de s3 e: " <<s3[1]<<endl;
 
 s3 += s4; //concatenação de strings
 cout <<s3<<endl;
}

void escreverUmArquivo(){
string frase;
cout<<"Escreva uma frase para ser escrita no arquivo strings.txt";
getline(cin, frase);
cout<<"Obrigado. Escrevendo dados no arquivo strings.txt...\n";
ofstream escreve;
escreve.open("strings.txt");
escreve<<"utilizamos os objetos ofstrean para escrever em arquivos\n";
escreve<<"Note que podemos utilizar os caracteres \\n para quebrar linha, como fazemos em cout\n";
int numero = 100;
escreve<<"podemos escrever o valor de variáveis numericas: "<<numero<<"\n"<<endl;
int matriz[3] = {42, 19, 99};
escreve<<"podemos tambem escrever matrizes!";
for(int i=0;i<3;i++){
        escreve.width(6);
        escreve<<matriz[i]<<" ";
        }
escreve<<"\n";
escreve<<"Finalmente, podemos receber dados via cin e escrever estes dados no arquivo!\n";
escreve<<"A frase qeu você digitou durante a execução do programa: "<<frase<<"\n";
escreve.close();
cout<<"Dados escritos no arquivo. Fim do programa!";
                    
}

void checarLeituraDeArquivo(){
   char letra;
   ifstream leitura;
   leitura.open("strings.txt");
   
   if(!leitura.is_open()){
      cout <<"Nao foi possivel abrir o arquivo! Programa sera terminado!\n";
      leitura.clear();                                                //reseta o objeto leitura, para limpar memoria do sistema
                          }          
while(leitura.get(letra)){cout<<letra;}
leitura.close();
              
}


int main(){
    
cadastrarNome();   
escreverUmArquivo();
checarLeituraDeArquivo();

    system("pause");
    return 0;
}
