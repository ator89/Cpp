#include <iostream>
#include <string>

using namespace std;

class Persona{
public:
       explicit Persona(string nombre): nombreP(nombre)
       {
       }
       
       void setNombreP(string nombre)
       {
            nombreP = nombre;
       }
       
       string getNombreP()const
       {
              return nombreP;
       }
       
       void mostarMensaje() const
       {
            cout << "Wilkommen Sie! "<< getNombreP() << "!" <<endl; 
       }
       
private:
        string nombreP;
        
};
