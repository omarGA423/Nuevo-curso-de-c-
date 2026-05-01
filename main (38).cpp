/*
Ejercicio 1: Sobrecarga de ++ prefijo (entero)

Define una clase Contador con un atributo privado entero llamado valor.

Incluye un constructor que permita inicializar el valor (por defecto 0).

Sobrecarga el operador ++ prefijo para incrementar el valor en 1 y devolver el objeto actual.

En el main crea un objeto Contador, muestra su valor, aplica ++ prefijo y muestra el nuevo valor.
*/
#include<iostream>
using namespace std;
    class   Contador{
        private:
            int valor;
        public:
            Contador (int v=0){
                this->valor =v;
                
            }
        Contador& operator ++(){
            ++valor;
            return *this;
        }
        int getValor ()const{
            return valor;
        }
        
        
        
        
    };
int main (){
    Contador c(0);
    cout<<"Antes de ++c: "<<c.getValor()<<endl;
    ++c;
    cout<<"Depues del valor +cc: "<<c.getValor()<<endl;
    return 0;
}