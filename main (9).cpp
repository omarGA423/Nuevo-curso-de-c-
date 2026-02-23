#include <iostream>
using namespace std;
int main (){
    
    cout<<"Porgrama al cual se le ingresa un numero 1-12 y muestra el mes que corresponde"<<endl<<endl;
        
    int numero;
        cout<<"Ingrese el un numero 1-12: ";cin>>numero;
           
        switch(numero){
            case 1 :cout<<"El mes es Enero";break;
            case 2 :cout<<"El mes es Febrero";break;
            case 3 :cout<<"El mes es Marzo";break;
            case 4 :cout<<"El mes es Abril";break;
            case 5 :cout<<"El mes es Mayo";break;
            case 6 :cout<<"El mes es Junio";break;
            case 7 :cout<<"El mes es Julio";break;
            case 8 :cout<<"El mes es Agosto";break;
            case 9 :cout<<"El mes es Septiembre";break;
            case 10 :cout<<"El mes es Octubre";break;
            case 11 :cout<<"El mes es Noviembre";break;
            case 12 :cout<<"El mes es Diciembre";break;
        }
    
    
    return 0;
}