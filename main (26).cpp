#include <iostream>
#include <cmath>
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
        return pow(b,2)-4*a*c;
    }
    float FormulaGeneral::x1(){
        return (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    }
    float FormulaGeneral::x2(){
        return (-b-sqrt(pow(b,2)-4*a*c))/(2*a);

    }
    
    int main (){
        
        float a,b,c;
        cout<<"Digite los valores de a,b,c: ";cin>>a>>b>>c;
        
        FormulaGeneral F1 (a,b,c);
        float d= F1.discriminante();
        
        if(d>0){
            cout<<"El valor de x1= "<<F1.x1()<<endl;
            cout<<"El valor de x2= "<<F1.x2()<<endl;
        }
    
        else if(d==0){
            cout<<"El valor es igual para x1 y x2= "<<F1.x1()<<endl;
        }
        else {
            cout<<"El valor no es real,valor de la discriminante= "<<d;
        }
        
        return 0;
    }