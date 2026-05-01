/*
Ejercicio 2: Sobrecarga de ++ sufijo (entero)

Define una clase Contador con un atributo privado entero llamado valor.

Incluye un constructor que permita inicializar el valor (por defecto 0).

Sobrecarga el operador ++ sufijo para incrementar el valor en 1, pero debe devolver una COPIA del objeto antes de incrementar.

En el main crea un objeto Contador, muestra su valor, aplica c++ y muestra el nuevo valor, y además muestra el valor devuelto por c++.
*/
#include <iostream>
using namespace std;

    class Contador {
        private:
            int valor;
        public:
            Contador(int v=0){
                this->valor=v;
            }
    Contador& operator ++(){
        ++valor;
        return *this;
    }           
    Contador operator ++(int){
        Contador copia=*this;
        ++valor;
        return copia;
    }
        
    int getValor()const{
        return valor;
    }



};
int main (){
Contador c(1);
    cout<<c.getValor()<<endl;
    Contador copia=c++;
        
        cout<<c.getValor()<<endl;
        cout<<copia.getValor()<<endl;
return 0;
}