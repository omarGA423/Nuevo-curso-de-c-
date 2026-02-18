#include <iostream>
#include <cmath>
using namespace std;
int main(){
    
  cout<<"\n Hola con este programa calculare la hipotenusa de un triangulo ocupando el valor de sus catetos 😎"<<endl;
  
    double x,y,cateto;
    
    cout<<"Introduzca el valor de cateto x:";
    cin>>x;
    cout<<"Introduzca el valor de cateto y:";
    cin>>y;
  
        cateto= sqrt(pow(x,2)+pow(y,2));
        
        
            cout.precision(3);
            cout<<"El valor del cateto es de:"<<cateto;
        
        
    return 0;
}