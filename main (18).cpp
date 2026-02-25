/* Realice un programa que calcule y muestre en la salida estandar la suma de los cuadrados
de los 10 primeros enteros mayores que cero*/

#include <iostream>
using namespace std;
int main (){
    
    
    int suma=0,cuadrado;
    
        for (int i =0;i <=100;i++){
            cuadrado= i * i;
            suma+=cuadrado;   //Aqui es como si pusiera suma=suma+cuadrado
        }
            
            cout<<"El resultado es: "<<suma;
    
    
    
    return 0;
}