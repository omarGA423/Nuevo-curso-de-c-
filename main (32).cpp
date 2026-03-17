/*
Ejercicio: Calcular el área de un rectángulo con menú

Crear un programa donde el usuario pueda calcular el área de un rectángulo.
La clase debe permitir guardar la base y la altura, calcular el área y devolver el resultado.
Reglas:

La clase solo debe contener lógica de cálculo.

No debe haber cin ni cout dentro de la clase.

El main debe tener un menú con do-while para:

Ingresar base y altura
Calcular y mostrar el área
Salir
El área se calcula como base * altura.
*/
#include <iostream>
#include <iomanip>
using namespace std;
    
  class Area{
      
    private:
        double base;
        double altura;
    public:
        void setbase(double b){
            base=b;
        }
        void setaltura(double a){
            altura=a;
        }
        double CalcularArea(){
            return base*altura;
        }
      
  };
  
  int main (){
   double A,B;
   int op;
   Area A1;
   
   cout<<fixed<<setprecision(2);
   
   do{
       cout<<"\n-----MENU-----"<<endl;
       cout<<"1.Area del rectángulo."<<endl;
       cout<<"2.Salir."<<endl;
       cout<<"Digitar la opcion 1 o 2: ";cin>>op;
       
       switch(op){
           case 1:
             cout<<"Digite el valor de la BASE y de la ALTURA: ";cin>>B>>A;
             A1.setbase(B);
             A1.setaltura(A);
             cout<<"El valor del area es de: "<<A1.CalcularArea()<<" metros cuadrados"<<endl;
             break;
           
           case 2:
                cout<<"Saliendo..."<<endl;
                break;
           
           default:
                cout<<"Valor incorrecto."<<endl;

       }  
       
       
       
       
       
   }while (op !=2);
   
      return 0;
  }