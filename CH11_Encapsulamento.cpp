#include <iostream>
#include <string>

using namespace std;

class veiculo
{ 
  string cor;
 
  protected:
    string combustivel;

 public:
  bool altCor( string c )
       { if ( c == "vermelho" )
           { cor = c;
             return true;
           } 
 
         if ( c == "azul" )
           { cor = c;
             return true;
           } 
 
         if ( c == "prata" )
           { cor = c;
             return true;
           }
 
        return false; 
       }
}


