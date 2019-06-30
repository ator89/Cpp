#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <sstream>
using std::stringstream;

int main(){

   string input;
   cout << "Ingrese una cadena con el formato (a1,b2): ";
   cin >>input;

   char delim = ',';

   stringstream ss(input);
   string token;

   vector<string> tokens;

   while(getline(ss,token,delim)){
      tokens.push_back(token);
   }

   cout << "\n" << tokens[0] << endl;
   cout << "\n" << tokens[1] << endl;

   if(tokens[0].at(2) == '1' && tokens[0].at(1)=='a'){
   	cout << "Pusiste el ejemplo"<<endl;
   }
	return 0;
}
