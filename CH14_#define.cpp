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

// Se quisermos mudar o nosso valor de PI, ou da VERSAO, no programa acima, basta mexer no início do programa. Isto torna o programa mais flexível. Há quem diga que, em um programa, nunca se deve usar constantes como 10, 3.1416, etc., pois estes são números que ninguém sabe o que significam (muitas pessoas os chamam de "números mágicos"). Ao invés disto, deve-se usar apenas #defines. é uma convenção de programação (que deve ser seguida, pois torna o programa mais legível) na linguagem C que as macros declaradas em #defines devem ser todas em maiúsculas.

// Um outro uso da diretiva #define ? o de simplesmente definir uma macro. Neste caso usa-se a seguinte forma geral:

#define nome_da_macro

// Neste caso o objetivo não é usar a macro no programa (pois ela seria substituída por nada), mas, sim, definir uma macro para ser usada como uma espécie de flag. Isto quer dizer que estamos definindo um valor como sendo "verdadeiro" para depois podermos testá-lo.

// Tambem é possível definir macros com argumentos. Veja o exemplo a seguir:

#define max(A,B) ((A>B) ? (A):(B))
#define min(A,B) ((A<B) ? (A):(B))

x = max(i,j);
y = min(t,r);

// Embora pareça uma chamada de função, o uso de max (ou min) simplesmente substitui, em tempo de compilação, o cádigo especificado. Cada ocorrência de um parâmetro formal (A ou B, na definição) será substituído pelo argumento real correspondente. Assim, a linha de código:

x = max(i,j);

// será substituída pela linha:

x = ((i)>(j) ? (i):(j));

// A linha de código:

x = max(p+q,r+s);

// será substituída pela linha:

x = ((p+q)>(r+s) ? (p+q):(r+s));

// Isto pode ser muito útil. Verifique que as macros max e min não possuem especificação de tipo. Logo, elas trabalham corretamente para qualquer tipo de dado, enquanto os argumentos passados forem coerentes. Mas isto pode trazer também algumas armadilhas. Veja que a linha

x = max(p++,r++);

// será substituída pelo código

x = ((p++)>(r++) ? (p++):(r++));

// e em consequência, incrementará o maior valor duas vezes.

// Outra armadilha em macros está relacionada com o uso de parênteses. Seja a macro:

#define SQR(X) X*X

// Imagine que você utilize esta macro na expressão abaixo:

y = SQR(A+B);

// Ao fazer isto, a substituição que será efetuada não estará correta. A expressão gerada ser?:

y = A+B*A+B;

// que obviamente é diferente de (A+B)*(A+B)   !

// A solução para este problema é incluir parênteses na definição da macro:

#define SQR(X)(X)*(X)

 

// Quando você utiliza a diretiva #define nunca deve haver espaços em branco no identificador. Por exemplo, a macro:

#define PRINT (i) printf(" %d \n", i)

// não funcionará corretamente porque existe um espaço em branco entre PRINT e (i). Ao se tirar o espaço, a macro funcionar? corretamente e poderá ser utilizada para imprimir o número inteiro i, saltando em seguida para a próxima linha.

 

// A diretiva #undef tem a seguinte forma geral:

 #undef nome_da_macro

//  Ela faz com que a macro que a segue seja apagada da tabela interna que guarda as macros.O compilador passa a partir deste ponto a não conhecer mais esta macro.


      
          
          
