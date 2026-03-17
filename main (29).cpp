/*
Una biblioteca necesita un programa para registrar libros.
El programa debe permitir guardar el título del libro y su autor.
Al iniciar, el programa ya tiene un libro registrado por defecto.
Debe mostrar los datos del libro en pantalla.
*/
#include<iostream>
using namespace std;

    class Registrar{
        private:
            string Titulo;
            string Autor;
        public:
            Registrar(){
                this->Titulo="Mundo de sofia";
                this->Autor="Jostein Gaarder";
                
            }
            
        void Mostrar(){
            cout<<"Nombre del libro: "<<this->Titulo<<endl;
            cout<<"Autor: "<<this->Autor<<endl;
        }
        
        
    };
    int main (){
        
        Registrar r1;
        r1.Mostrar();
        
        return 0;
    }

