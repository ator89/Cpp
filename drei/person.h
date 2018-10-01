

using namespace std;

class Person{
   public:
         
         void setEdad(int);
         int getEdad() const;
         
         void setUsuario(string);
         string getUsuario() const; 
          
          
          
   private:
           int edad;
           string usuario;

};

void Person::setEdad(int){
    setEdad(edad);
}

int Person::getEdad(){
    return edad;      
}
