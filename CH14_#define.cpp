// Quando você usa esta diretiva, está dizendo ao compilador para que, toda vez que ele encontrar o nome_da_macro no programa a ser compilado, ele deve substituí-lo pela sequência_de_caracteres fornecida. 
// Isto ? muito ?til para deixar o programa mais geral. Veja um exemplo:
          
#include <stdio.h>
#define PI 3.1416
#define VERSAO "2.02"
int main ()
{
	printf ("Programa versao %s",VERSAO);
	printf ("O numero pi vale: %f",PI);
	return 0;
}

// Se quisermos mudar o nosso valor de PI, ou da VERSAO, no programa acima, basta mexer no in?cio do programa. Isto torna o programa mais flex?vel. H? quem diga que, em um programa, nunca se deve usar constantes como 10, 3.1416, etc., pois estes s?o n?meros que ningu?m sabe o que significam (muitas pessoas os chamam de "n?meros m?gicos"). Ao inv?s disto, deve-se usar apenas #defines. ? uma conven??o de programa??o (que deve ser seguida, pois torna o programa mais leg?vel) na linguagem C que as macros declaradas em #defines devem ser todas em mai?sculas.

// Um outro uso da diretiva #define ? o de simplesmente definir uma macro. Neste caso usa-se a seguinte forma geral:

#define nome_da_macro

// Neste caso o objetivo n?o ? usar a macro no programa (pois ela seria substitu?da por nada), mas, sim, definir uma macro para ser usada como uma esp?cie de flag. Isto quer dizer que estamos definindo um valor como sendo "verdadeiro" para depois podermos test?-lo.

// Tamb?m ? poss?vel definir macros com argumentos. Veja o exemplo a seguir:

#define max(A,B) ((A>B) ? (A):(B))
#define min(A,B) ((A<B) ? (A):(B))

x = max(i,j);
y = min(t,r);

// Embora pare?a uma chamada de fun??o, o uso de max (ou min) simplesmente substitui, em tempo de compila??o, o c?digo especificado. Cada ocorr?ncia de um par?metro formal (A ou B, na defini??o) ser? substitu?do pelo argumento real correspondente. Assim, a linha de c?digo:

x = max(i,j);

// será substituída pela linha:

x = ((i)>(j) ? (i):(j));

// A linha de c?digo:

x = max(p+q,r+s);

// será substituída pela linha:

x = ((p+q)>(r+s) ? (p+q):(r+s));

// Isto pode ser muito ?til. Verifique que as macros max e min n?o possuem especifica??o de tipo. Logo, elas trabalham corretamente para qualquer tipo de dado, enquanto os argumentos passados forem coerentes. Mas isto pode trazer tamb?m algumas armadilhas. Veja que a linha

x = max(p++,r++);

// será substitu?da pelo c?digo

x = ((p++)>(r++) ? (p++):(r++));

// e em consequência, incrementar? o maior valor duas vezes.

// Outra armadilha em macros est? relacionada com o uso de par?nteses. Seja a macro:

#define SQR(X) X*X

// Imagine que voc? utilize esta macro na express?o abaixo:

y = SQR(A+B);

// Ao fazer isto, a substitui??o que ser? efetuada n?o estar? correta. A express?o gerada ser?:

y = A+B*A+B;

// que obviamente ? diferente de (A+B)*(A+B)   !

// A solução para este problema ? incluir par?nteses na defini??o da macro:

#define SQR(X)(X)*(X)

 

// Quando você utiliza a diretiva #define nunca deve haver espa?os em branco no identificador. Por exemplo, a macro:

#define PRINT (i) printf(" %d \n", i)

// não funcionará corretamente porque existe um espa?o em branco entre PRINT e (i). Ao se tirar o espa?o, a macro funcionar? corretamente e poder? ser utilizada para imprimir o n?mero inteiro i, saltando em seguida para a pr?xima linha.

 

// A diretiva #undef tem a seguinte forma geral:

 #undef nome_da_macro

//  Ela faz com que a macro que a segue seja apagada da tabela interna que guarda as macros.O compilador passa a partir deste ponto a n?o conhecer mais esta macro.


      
          
          
