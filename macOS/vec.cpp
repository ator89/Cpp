#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;
#include <fstream>
using std::ifstream;
using std::ofstream;

int main(){
    vector<char> genoma;
    ifstream ecoli("ecoli.txt");
    char base;
    ecoli >> base;
    while(!ecoli.eof()){
        genoma.push_back(base);
        ecoli >> base;
    }
   
   cout << genoma.size() << endl; 
   
   for( int i = 0; i < 6; i++){
        cout<<genoma[i];
   }
   
   ofstream alreves("ecoli_r.txt");
   int tam = genoma.size();
   for(int i = 0; i < tam; i++){
       alreves << genoma[tam - 1 - i];
        if(i%1024 == 1023) alreves << endl;
   }

}
