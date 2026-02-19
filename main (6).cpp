/* introduzca el 3 valores e indique el mayor de los 2 */

#include<iostream>
using namespace std;
int main (){
    
    double n1,n2,n3;
    
        cout<<"Introduzca 3 numeros: ";cin>>n1>>n2>>n3;
        
            if (n1>n2 && n1>n3){
                
                cout<<"El mayor es: "<<n1;
            }
                
                else if (n1<n2 && n3<n2){
                    
                    cout<<"El mayor es: "<<n2;
                }
                
                    else if (n1<n3 && n2<n3){
                        
                        cout<<"El mayor es: "<<n3;
                    }
    
    
    return 0;
}