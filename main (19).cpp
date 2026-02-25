/*4. Escriba un programa que tome cada 4 horas la temperatura exterior, 
leyéndola durante un período de 24 horas. Es decir, debe leer 6 temperaturas. 
Calcule la temperatura media del día, la temperatura más alta y la más baja.*/

#include<iostream>
using namespace std;

int main (){
   
   
   //primero repaso como funciona la parte de for para que al usuario le aparezca repetido la leyenda
   //introduce y ya luego la hora mediante mi i y las hrs horas,de ahi le pongo que eso me dara mi tem.
   
   double temperatura;
   double suma_temperatura=0;
   double tempalt=-999;  //pongo -999 si el usuario pone 45>-999 y no 45>999,eso es un error logico
   double tembaj=999;  //pongo igual999 por si el usuario pone 5 no sea 5>999 pero si 5>-999
   double temperatura_media; 
 
   for (int i=0;i<=24;i+=4){
       cout<<"Introduzca la temperatura a las "<<i<<" hrs:"<<endl;cin>>temperatura;
      
       suma_temperatura= suma_temperatura + temperatura;    //aqui tambien puedo ocupar suma_temperatura+=temperatura   

    //si tengo 2 suma_temperatura es para que se ocumule uno sobre otro y haga mi suma
    if (temperatura>tempalt){
        tempalt = temperatura;
    }
    if(temperatura < tembaj){
        tembaj = temperatura;
    }
    
   }
    
    temperatura_media = suma_temperatura/7; // entre 6 ya que es la suma de temperaturas entre el numero de temperaturas
    
    cout<<"\n →  La temperatura media es de: "<<temperatura_media<<endl;
    cout<<"\n☀️ La temperatura mas alta del dia es de: "<<tempalt<<" °C "<<endl;
    cout<<"\n🧊 La temperatura minima del dia es de: "<<tembaj<<" °C "<<endl;
    
	return 0;
}