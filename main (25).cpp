/*
dentro de este apartado pongo mi formula general fija,aqui hago uso por primera vez de mi discriminante
Solo que mi codigo no resuelve numeros negativos dentro de la raiz de la Formula General
*/
#include<iostream>
#include<cmath>
using namespace std;

    class FormulaGeneral{
        
      private:
        float a;
        float b;
        float c;
      
      public:
        FormulaGeneral(float,float,float);
            float discriminante();
            float x1();
            float x2();
        
        
    };
    
    FormulaGeneral::FormulaGeneral(float a,float b,float c){
        
        this->a=a;
        this->b=b;
        this->c=c;
    }
    float FormulaGeneral::discriminante(){
        
       return  pow(b,2)-4*a*c;
    }
    
    float FormulaGeneral::x1(){
        float d=discriminante();
        if(d<0){
            return 0;
        }
       else {return  (-b + sqrt(pow(b,2)-4*a*c))/(2*a);}
    }
    float FormulaGeneral::x2(){
        float d=discriminante();
        if(d<0){
            return 0;
        }
        else {return  (-b - sqrt(pow(b,2)-4*a*c))/(2*a);}

    }
    int main (){
        FormulaGeneral G1(10,10,10);
        cout<<"El resultado de x1 es : "<<G1.x1()<<endl;
        
        cout<<"El resultado de x2 es: "<<G1.x2()<<endl;
        
        return 0;
    }