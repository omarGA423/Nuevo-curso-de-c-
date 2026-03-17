/*
Ejercicio: Calcular el IVA de un producto

Crear un programa donde el usuario ingrese el precio de un producto.
La clase debe permitir guardar el precio, calcular el IVA (16%) y calcular el total con IVA incluido.
Reglas:
La clase solo debe contener lógica de cálculo.
No debe haber cin ni cout dentro de la clase.
El main se encarga de pedir el precio y mostrar los resultados.
*/
#include<iostream>
#include <iomanip>
using namespace std;


    class Precio{
      
      private:
        double precio;
        
      public:
      
      
          void setprecio(double p){
              precio=p;
          }
      
          double IVA(){
              return precio*0.16;
          }
          
          double Total(){
              return precio + IVA();
          }
      
        
    };
    int main(){
        
        double P;
        
        Precio P1;
        
        cout<<fixed<<setprecision (2);
        
        cout<<"Digite el precio del producto: ";cin>>P;
        
        P1.setprecio(P);
        cout<<"Valor del IVA: "<<P1.IVA()<<endl;
        cout<<"Costo del producto + IVA: "<<P1.Total()<<endl;
        
        
        
        return 0;
    }