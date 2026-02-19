/* Realice un programa que lea un valor enter0 y determine si se trata si es un numero par o impar*/
#include <iostream>
using namespace std;
int main (){
    
    int n1;
    
        cout<<"Ingrese un numero: ";cin>>n1;
        
        
        if (n1==0){
             
             cout<<"El valor es 0";
             cout<<"\nYou are noob 😁";
        
        }
              else  if(n1%2==0){
                
                    cout<<"El numero es par 😎";
                }
                
                    else {
                        
                        cout<<"El numero no es par 💀";
                    }
        
        
    
    return 0;
}