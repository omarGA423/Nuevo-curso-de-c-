/*Hacer un programa que simule un ATM con un saldo incial de $1,000 dolares*/

#include <iostream>
using namespace std;
int main (){
    
    int saldo_incial=1000,operacion;
    
    float monto,retiro,saldo,saldo_final;
    
    cout<<"\t BIENVENIDO A SU BANCA 🗽"<<endl<<endl;
    
    cout<<"1.Ingresar dinero"<<endl;
    cout<<"2.Retirar dinero"<<endl;
    cout<<"3.Salir"<<endl;
    cout<<"Ingresar operacion: "; cin>>operacion;
    
        switch (operacion) {
            case 1:
                
                cout<<"Digite el dinero a ingresar: ";cin>>monto;
                saldo = saldo_incial + monto;
                cout<<"Su saldo es de : "<<saldo;break;
            case 2:
                
                cout<<"Digite la cantidad a retirar: ";cin>>retiro;
               if( retiro > saldo_incial){
                   cout<<"Saldo insuficiente";
               }
               else{
                 saldo_final=saldo_incial - retiro;
                cout<<"El saldo es de: "<<saldo_final;
               }break;
            
            case 3 : break;
        
        }
    
    
    
    return 0;
}