/* Comprobar si el numero que pone el usario es + o - */
#include <iostream>
using namespace std;
int main (){
    
    int n1;
    
        cout<<"Ingrese el numero: ";cin>>n1;
        
            if(n1 > 0){
                cout<<"Es un numero positivo";
            }
                
                else {
                    
                    cout<<"No es un numero +,es negativo -";
                }
    
    return 0;
}