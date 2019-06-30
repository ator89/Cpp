#include <iostream>
using std::endl;
using std::cout;
using std::cin;

#include <string>
using std::string;

void removeDupWord(string str){
    string word ="";
    for(auto x:str){
        if(x == ' '){
            cout << word << endl;
            word = "";
        }
        else{
            word = word + x;
        }
    }
    cout << word << endl;
}

int main(){

    string str = "Hola que tal";
    removeDupWord(str);

    return 0;
}