/*
🎯 EJERCICIO: CLASE VECTOR (VERSIÓN SIMPLE)

OBJETIVO:
Practicar:
- const
- &
- operator+
- friend

----------------------------------------

📌 ATRIBUTOS:
- int x
- int y

----------------------------------------

📌 CONSTRUCTOR:
Vector(int a = 0, int b = 0);

📌 OPERADOR (+):
Suma de vectores:

(x1, y1) + (x2, y2) = (x1+x2 , y1+y2)


📌 REGLAS:

- Usar friend
- Usar const
- Usar &
- Regresar un nuevo objeto

📌 MAIN:

1. Crear 3 objetos:
   v1(2,3), v2(4,5), resultado

2. Hacer:
   resultado = v1 + v2;

3. Mostrar con cout:
   Resultado: (6,8)

🔥 ENFOQUE:
Solo lógica del operator+
(No usar >> ni << sobrecargados)
*/
#include <iostream>
using namespace std;

    class Vector {
        private:
            int x;
            int y;
        public: 
            Vector(int x=0,int y=0){
                this->x = x;
                this->y = y;
        }
        friend Vector operator+(const Vector& v1,const Vector& v2){
            Vector r;
            r.x= v1.x + v2.x;
            r.y= v1.y + v2.y;
            return r;
            
        }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
        
    };
    int main (){
    int x1,x2,y1,y2;
    
    
        cout<<"Ingrese el valor de x1: "<<endl;cin>>x1;
        cout<<"Ingrese el valor de y1: "<<endl;cin>>y1;
        cout<<"Ingrese el valor de x2: "<<endl;cin>>x2;
        cout<<"Ingrese el valor de y2: "<<endl;cin>>y2;
        
        Vector v1(x1,y1);
        Vector v2(x2,y2);
        Vector r;
        
        r=v1+v2;
        cout<<"("<<x1<<","<<y1<<")"<<"+ ("<<x2<<","<<y2<<") "<<endl;
        cout<<"\n Resultado: ("<<r.getX()<<","<<r.getY()<<") "<<endl;
        
        
        
        return 0;
    }