#include <iostream>
using namespace std;

        class Persona {
            
            private:     //Atributos pongo los que yo quiera en este caso las caracteristicas de una persona.
                int edad;
                string nombre;
                float estatura;
            
            public:
                Persona(int,string,float);  //Linea del constructor ,crea el objeto y darle valores iniciales "DECLARA".Se conecta con mi linea constructor.
                
                void leer();
                void estudiar();  //En ambos apartados ocupe el void ya que el void me muestra mas no devuelve un valor.
                void brinco();
  
    };//Hasta aqui se le hizo la declaracion de mi clase  pero aun no explico que hacen.
    

 //Los :: se llaman operador de ambito y es como decir "PERTENECE A..."
   Persona::Persona(int edad,string nombre,float estatura){
   //Constructor es una función especial que sirve para crear el objeto y darle valores iniciales.
   
   
       this->edad=edad;
       this->nombre=nombre;
       this->estatura=estatura;  //en este apartado puse this-> ya que usa mucho cuando los parámetros del constructor tienen el mismo nombre que las variables privadas.
       
   }
   

  //Ahora abrire un apartado en ira la variable void ya que no necesito que me retorne un valor.
  void Persona::leer(){
      cout<<"Hola me llamo "<<nombre<<" estoy leyendo."<<endl;

//Aqui practicamente estoy dieciendo que mi metodo "Persona" pertenece a mi clase "leer"
  }
  
  void Persona::estudiar(){
      cout<<"Estoy estudiando."<<endl;
  }
  
  void Persona::brinco(){
      cout<<"Estoy jugando basquetball y mido "<<estatura<<endl;
  }
 
int main (){  //Aqui mi main lo puse debido a que hay una convencion de primero definir o declarar y luego ya inciar.
             //Recordar que la parte de class es quien hace el trabajo y el main quien dirije la clase.
    
    Persona              P1      =         Persona(20,"Omar",1.81);
//Tipo de objeto   Nombre de objeto     Llamada al constructor.
//Crear una persona llamada P1 con edad 20 y nombre Omar.
    
    //AHORA USAREMOS LOS METODOS
    P1.leer();
    P1.estudiar();
    P1.brinco();
    
    
    return 0;
}