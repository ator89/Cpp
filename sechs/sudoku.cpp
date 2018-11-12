#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ostream;

#include <cassert>

#include <vector>
using std::vector;
using std::max;
#include <algorithm>
#include <string>
using std::string;

//Clase de posibilidades
class Posibles{
   vector< bool > _b;
   public:
	Posibles(): _b(9,true) { }
	bool       activo(int v) const { return _b[v-1];}
   	void       elimina(int v) { _b[v-1] = false;}
	int        num_activos() const { return count(_b.begin(),_b.end(),true);}
	int        val() const {
		      vector<bool>::const_iterator it = find(_b.begin(),_b.end(),true);
		      return 1+(it- _b.begin());	
	           }
	string     str(int ancho) const;
};

//Activo
string Posibles::str(int ancho) const{
   string s(ancho,' ');
   int j = 0;
   for( int i = 1; i <= 9; i++){
	if(activo(i)) s[j++] = ('0'+i);
   }
   return s;
}

//Clase Sudoku
class Sudoku{
  private:    
      vector<Posibles> _celdas;
      static vector< vector< int > > _grupos, _grupos_de, _vecinos;
  public:
      Sudoku( string s );
      static void  inicializa();
      Posibles     posibles(int k) const { return _celdas[k];}
      bool         resuelto()      const;
      bool         asigna(int k, int val);
      bool         elimina(int k, int val);
      void         escribe(ostream& o) const;
};

//Función para sudoku resuelto
bool Sudoku::resuelto() const{
   for(int k = 0; k < _celdas.size(); k++){
	if(_celdas[k].num_activos() !=1){
	   return false;
	}
   }
   return true;
}

//Asignar un valor
bool Sudoku::asigna(int k, int val){
   for(int i= 1; i <=9; i++){
	if(i !=val){
	   elimina(k,i); return false;
	}
   }
   return true;
}

//Eliminar un valor
bool Sudoku::elimina(int k, int val){
   cout << "Elimina("<<k<<','<<val<<')'<<endl;
   if(!_celdas[k].activo(val)){
      return true;
   }
   _celdas[k].elimina(val);
   const int N = _celdas[k].num_activos();
   if(N==0){
    return false;
   }else if (N == 1){
   	const int v2 = _celdas[k].val();
	for(int i = 0; i < _vecinos[k].size(); i++){
           
	   if(!elimina(_vecinos[k][i], v2)) return false;
	}
   }
   for( int x = 0; x < 3; x++){
      const int g = _grupos_de[k][x];
      int n = 0,  k2;
      for ( int i = 0; i < 9; i++){
         const int kp = _grupos[g][i];
	 if(_celdas[kp].activo(val)){
	    n++;
	    k2 = kp;
	 }
      }
      if( n == 0){
         return false;
      }else if( n == 1){
         asigna(k2,val);
      }
   }
   return true;
}

//Escribir celdas
void Sudoku::escribe(ostream& o) const{
   int ancho = 2;
   for (int k = 0; k < _celdas.size(); k++){
      ancho = max(ancho, 1+ _celdas[k].num_activos());
   }
   string sep(ancho*3, '-');
   for(int i=0; i <9; i++){
	   if( i == 3 || i == 6 ){
	      cout << sep << "+-" << sep<< "+-" << sep << endl;
	   }
	   for(int j= 0; j <9; j++){
	   const int k = i*9 + j;
	   if( j == 3 || j == 6){
		   cout << "| ";
	   }
	   cout << _celdas[k].str(ancho);
	}
	cout << endl;
   }
}

//
Sudoku::Sudoku(string s) : _celdas(81) {
   int k=0;
   for( int i = 0; i < s.size() ; i++){
      if( s[i] >= '1' && s[i] <= '9'){
         if(!asigna(k, s[i] - '0')){
	    cout << "Error en la entrada" << endl;
	 }
	 k++;
      }else if (s[i] == '0' || s[i] == '.'){
         k++;
      }
   }
   //cout << k << endl;
   assert(k==81);
}

//Vector de grupos 
vector< vector< int > > Sudoku::_grupos(27), Sudoku::_grupos_de(81), Sudoku::_vecinos(81);

//Inicializar el sudoku
void Sudoku::inicializa(){
   for(int i= 0; i < 9; i++){
	for(int j = 0; j < 9; j++){
	   const int k = i*9+j;
	   const int g[3] = {i,9+j,18+i/3 + j/3};
	   for(int x = 0; x < 3; x++){
	      _grupos[g[x]].push_back(k);
	      _grupos_de[k].push_back(g[x]);
	   }
	}
   }
   for(int k = 0; k < 81; k++){
      for(int x = 0; x < 3; x++){
         const int g = _grupos_de[k][x];
	for(int i = 0; i<9; i++){
	   const int k2 = _grupos[g][i];
	   if(k2 !=k){
	      _vecinos[k].push_back(k2);
	   }
	}
      }
   }
}


int main(){
   Sudoku::inicializa();
   Sudoku S("00302060090030500100180640000810290070000000800670820000260950080020300900501030");
   S.escribe(cout);
   
   Posibles p;
   p.elimina(5);
   //cout << p.str(5) << endl;
   return 0;
}
