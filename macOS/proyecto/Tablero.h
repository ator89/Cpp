#ifndef TABLERO_H
#define TABLERO_H

class Tablero{
	
	private:
		int size;
		char** matriz;
	public:
		Tablero();
		~Tablero();

		void crearMatriz();
		void llenarMatriz();
		void printMatriz();
		void liberarMatriz();
};

#endif