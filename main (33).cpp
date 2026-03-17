/*
Ejercicio: Calcular el perímetro de un cuadrado con menú

Crear un programa donde el usuario pueda calcular el perímetro de un cuadrado.
La clase debe permitir guardar el lado, calcular el perímetro y devolver el resultado.
Reglas:
- La clase solo debe contener lógica de cálculo.
- No debe haber cin ni cout dentro de la clase.
- El main debe tener un menú con do-while para:
  1. Ingresar el lado
  2. Calcular y mostrar el perímetro
  3. Salir
- El perímetro se calcula como lado * 4.
*/

#include <iostream>
#include <iomanip>
using namespace std;

    class Perimetro{
      
    private: 
        double lado;
    
    public:
        void setlado(double L){
            lado=L;
        }
        double CaluloPerimetro(){
            return lado*4;
        }
        
    };
    
    int main (){
        int op;
        double l;
        
        Perimetro P1;
        cout<<fixed<<setprecision(2);
        
        do{
            cout<<"-----MENU-----"<<endl;
            cout<<"1.Calcular el Perimetro del cuadrado: "<<endl;
            cout<<"2.Salir."<<endl;
            cout<<"Digite la opcion: ";cin>>op;
            
            switch (op){
                case 1:
                    cout<<"Digite el valor del lado en metros: "<<endl;cin>>l;
                    P1.setlado(l);
                    cout<<"El valor del Perimetro: "<<P1.CaluloPerimetro()<<endl;
                    break;
                
                case 2:
                    cout<<"Saliendo..."<<endl;
                    break;
                    
                default:
                    cout<<"ERROR";
                    break;
                
                
            }
            
            
            
        }while (op != 2);
        
        return 0;
    }