/*
Ejercicio: Calcular el descuento de un producto

Crear un programa donde el usuario ingrese el precio de un producto.
La clase debe permitir guardar el precio, aplicar un descuento del 10% y calcular el precio final con descuento.
Reglas:
La clase solo debe contener lógica de cálculo.
No debe haber cin ni cout dentro de la clase.
El main se encarga de pedir el precio y mostrar los resultados.
El descuento es fijo del 10%.
*/

#include <iostream>
#include <iomanip>
using namespace std;

    class Descuento{
        
        private:
            double precio;
        public:
        
        void setprecio(double p){
            precio=p;
        }
        double DescuentoProducto(){
            return precio * 0.10;
        }
        double Total(){
            return precio-DescuentoProducto();
        }
    };
    int main (){
        
        double P;
       
        Descuento D1;
        
                cout<<fixed<<setprecision(2);

        cout<<"Digite el precio del producto: ";cin>>P;
        D1.setprecio(P);
        
        
        cout<<"Valor del descuento: "<<D1.DescuentoProducto()<<endl;
        cout<<"Valor Total del producto: "<<D1.Total()<<endl;
        
        return 0;
    }