#include <iostream>
using std::endl;
using std::cout;
using std::cin;

#include <string>
using std::string;

class Persona{
    private:
        string nombre;
        int edad;
    public:
        Persona(string, int);
        virtual void mostrar();
};

class Alumno : public Persona{
    private:
        float notaFinal;
    public:
        Alumno(string, int, float);
        void mostrar();
};

class Profesor : public Persona{
    private:
        string materia;
    public:
        Profesor(string, int, string);
        void mostrar();
};

Profesor::Profesor(string _nombre, int _edad, string _materia) : Persona(_nombre, _edad){
    materia = _materia;
}

void Profesor::mostrar(){
    Persona::mostrar();
    cout << "Materia: " << materia << endl;
}

void Persona::mostrar(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}


Alumno::Alumno(string _nombre, int _edad, float _notaFinal) : Persona(_nombre, _edad){
    notaFinal = _notaFinal;
}

void Alumno::mostrar(){
    Persona::mostrar();
    cout << "Nota Final: " << notaFinal << endl;
}

int main(){

    Persona* vector[3];

    vector[0] = new Alumno("AAA",22,22);

    vector[0]->mostrar();

    return 0;
}
