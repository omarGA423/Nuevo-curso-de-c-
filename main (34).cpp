/*
Ejercicio: Calcular el IVA de un producto con menú y acumulador

Crear un programa donde el usuario pueda calcular el IVA de varios productos.
La clase debe permitir guardar el precio, calcular el IVA (16%) y el total con IVA.
Además, debe llevar un acumulador de todo lo recaudado.
Reglas:
- La clase solo debe contener lógica de cálculo.
- No debe haber cin ni cout dentro de la clase.
- El main debe tener un menú con do-while para:
  1. Ingresar precio de un producto
  2. Mostrar IVA y total del producto
  3. Mostrar total acumulado de ventas
  4. Salir
- El IVA es fijo del 16%.
*/
#include<iostream>
#include<iomanip>
using namespace std;

    class Precio{
        
        private:
            double precio;
            double total;
        public:
            Precio (){
                total=0;
            }
           
            void setprecio(double p){
                precio=p;
            }
            
            double CostoIVA(){
                return precio*0.16;
            }
            
            double PrecioTotal(){
                double costo=precio + CostoIVA();
                total+=costo;
                return costo;
            }
        double getTotal(){
            return total;
        }
    };
    
    int main (){
        int op;
        double precio;
        
        Precio P1;
        cout<<fixed<<setprecision(2);
        
        do {
            
             cout<<"------Menu------"<<endl;
              cout<<"1.Mostrar IVA y total del producto"<<endl;
               cout<<"2.Saliendo"<<endl;
               cout<<"Digite la opcion (1 o 2): "<<endl;cin>>op;
            
            switch(op){
                case 1:
                    cout<<"Digite el valor del precio: ";cin>>precio;
                    P1.setprecio(precio);
                    cout<<"El valor del IVA es de : "<<P1.CostoIVA()<<" pesos."<<endl;
                    cout<<"El valor Precio+IVA: "<<P1.PrecioTotal()<<" pesos."<<endl;
                    break;
                
                case 2:
                    cout<<"Saliendo..."<<endl;
                    break;
                
                default:
                    cout<<"ERROR"<<endl;
                    break;
                
            }
                
            
                        
            
            
            
        }while(op!=2 );
        
        
        
        return 0;
    }