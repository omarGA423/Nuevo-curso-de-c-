/*
Una escuela necesita un programa para registrar estudiantes.
El programa debe permitir guardar el nombre del estudiante y su calificación.

Al iniciar, el programa ya tiene un estudiante registrado por defecto.

Debe mostrar los datos del estudiante en pantalla.


*/
#include <iostream>
using namespace std;
    
  class Registro{
      
      private:
        string nombre;
        string calificación;
        
      public:
        Registro(){
            
            this->nombre="Sigma boy";
            this->calificación="9.12";
            
        }
        
        void mostrar(){
            cout<<"Alumno: " + this->nombre<<endl;
            cout<<"Calificacion: " + this->calificación<<endl;
        }
      
      
  };
  
  int main (){
      
      Registro R1;
      R1.mostrar();
      
      return 0;
  }