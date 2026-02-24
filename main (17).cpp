/*Realice un programa que solicite en la entrada estandar un numero int del 1-10 y muestre 
la salida estandar su tabla de multiplicar */


#include <iostream>
using namespace std;
int main (){
    
    int numero;
    
    cout<<"Tablas de multiplicar 😎"<<endl<<endl;
        
        
            do{ cout<<"Digite un numero del 1-10  (entero): ";cin>>numero;
                
            } while ((numero < 1)||(numero >10));  //Nuestro do-while valida nuestro numero de 1-10
            
            for (int i =1;i<=10;i++){   //Genera nuestra tablas de multiplicacion
                
                cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
            }
               

       
        
       
    return 0;
}