#include <iostream>
using namespace std;
int main(){
    
    float practica,teorica,participacion,notafinal;
    
        cout<<"Introduca la calificacion de la pratica:";cin>>practica;
    
        cout<<"Introduce el valor de la nota teorica:";cin>>teorica;
        
        cout<<"Introduce el valo de la participacion:";cin>>participacion;
        
            practica *= .30; //esto seria como ponerle como si fuera pratica = practica * .30;
            
            teorica *= .60;
            
            participacion *= .10;
            
                
                notafinal= practica + teorica +participacion ; 
                
                cout.precision (2);
                cout<<"Tu nota final es de:"<<notafinal;
    
    
    return 0;
}