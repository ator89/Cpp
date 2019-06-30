#include <iostream>
using std::endl;
using std::cout;
using std::cin;

#include <string>
using std::string;

int main(){

    
    string test1 = "1.45E+15,2.53E+21,5.45E+15,4.45E+15,2.45E+15,1.45E+15,7.45E+15,";
    string test2[10];
    int found, i = 0;
    
    while(test1 != "\0"){
        found = test1.find(",");
        for(int f = 0; f < found; f++){
            test2[i] += test1[f];
        }
        test1.erase(0,found+1);
        i++;
    }
    
    for(int j=0; j<i;j++){
        cout << test2[j] << endl;
    }

    return 0;
}