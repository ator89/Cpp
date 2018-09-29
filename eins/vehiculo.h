#include <iostream>

using namespace std;

class Vehiculo
{
  public:
          
          string getModelo();
          void setModelo(string m);
          int getSerie();
          void setSerie(int s);
  
  protected:
          string modelo;
          int serie;
                
};



string Vehiculo::getModelo()
{
   return modelo;
}

void Vehiculo::setModelo(string m)
{
   modelo = m;
}

int Vehiculo::getSerie()
{
   return serie;
}

void Vehiculo::setSerie(int s)
{ serie = s;}
