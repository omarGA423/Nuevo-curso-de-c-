/*Hacer un menu que considere:
caso 1: cubo de un numero
caso 2: numero par o impar
caso 3: salir */

#include <iostream>
#include<cmath>
using namespace std;
int main (){
    
    int opc,n1,n2;
    double cubo;
    
        cout<<"\tHola!,Bienvenido(a)  a tu app"<<endl<<endl;
        
        cout<<"1.Ingrese un digito para saber su cubo"<<endl;
        cout<<"2.Ingrese un digito para saber si es par o impar"<<endl;
        cout<<"3.Salir"<<endl;
        
        cout<<"Ingresar opcion: ";cin>>opc;
        
        switch(opc){
            
            case 1: 
                cout<<"\nIngrese digito: ";cin>>n1;
                cubo = pow(n1,3);
                cout<<"Su cubo es de :"<<cubo;
                
        break;
            
            case 2:
                cout<<"\nIngrese digito: ";cin>>n2;
                if (n2 % 2 == 0){
                    cout<<"Es un numero par 😁";
                }
                else{
                    cout<<"No es un numero par 💀";
                } 
        break;
                
            case 3: 
            
        break;
     }
    
    return 0;
}