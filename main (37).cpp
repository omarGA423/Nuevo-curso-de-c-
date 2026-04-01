#include<iostream>
using namespace std;
    
    class Fraccion{
        
        private:
            int num;
            int den;
        public:
            Fraccion(int n=0,int d=1){
                this->num=n;
                this->den=d;
            }
        friend Fraccion operator+(const Fraccion& F1,const Fraccion& F2){
            Fraccion resultado;
            resultado.num=(F1.num*F2.den)+(F1.den*F2.num);
            resultado.den=F1.den*F2.den;
            return resultado;
        }
        friend Fraccion operator-(const Fraccion& F1,const Fraccion& F2){
            Fraccion resultado;
            resultado.num=(F1.num*F2.den)-(F1.den*F2.num);
            resultado.den=F1.den*F2.den;
            return resultado;
        }
        friend Fraccion operator /(const Fraccion& F1,const Fraccion& F2){
            Fraccion resultado;
            resultado.num=F1.num * F2.den;
            resultado.den=F1.den * F2.num;
            return resultado;
        }
        friend Fraccion operator *(const Fraccion& F1,const Fraccion&F2){
            Fraccion resultado;
            resultado.num=F1.num*F2.num;
            resultado.den=F1.den*F2.den;
            return resultado;
        }
        
        
        
        friend istream& operator>>(istream& in,Fraccion& F ){
            in>>F.num;
            char diagonal;
            in>>diagonal;
            in>>F.den;
            return in;
        }
        friend ostream& operator<<(ostream& out,const Fraccion& F){
            out<<F.num<<"/"<<F.den;
            return out;
        }
    
};
    int main (){
        Fraccion F1,F2;
        
            cout<<"Digite la primera fraccion (numerador/denominador): ";cin>>F1;
            cout<<"Fraccion leida: "<<F1<<endl;
            cout<<"Digite la segunda fraccion (numerador/denominador): ";cin>>F2;
            cout<<"Fraccion leida: "<<F2<<endl;
            cout<<"============================"<<endl;
            cout<<"RESULTADO DE LAS OPERACIONES"<<endl;
            cout<<"============================"<<endl;
            cout<<"Suma: "<<"("<<  F1  <<"+"<<  F2  <<")"<<"="<<(F1+F2)<<endl;
            cout<<"Resta: "<<"("<<  F1  <<"-"<<  F2  <<")"<<"="<<(F1-F2)<<endl;
            cout<<"Multiplicacion: "<<"("<<  F1  <<"*"<<  F2  <<")"<<"="<<(F1*F2)<<endl;
            cout<<"Division: "<<"("<<  F1  <<"/"<<  F2  <<")"<<"="<<(F1/F2)<<endl;

        
        
        
    
        return 0;
    }