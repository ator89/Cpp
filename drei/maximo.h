#include <string>

using namespace std;

class Maximo{
   public:
      explicit Maximo(string);
      
      void setNombre(string);
      string getNombre() const;
      void showMessage() const;
      void getNumeros();
      void showMaximo() const;
      
      int max(int,int,int) const;

   private:
      string nombre;
      int valorMaximo;
};
