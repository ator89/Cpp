#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main(){
    string s1("String here");

    cout << s1.substr(4,5) << endl; //create small string from bigger string

    //swaping
    string one ("asdf");
    string two ("bees");

    cout << one << ' ' << two << endl;

    one.swap(two);
    cout << one << endl;


    //finding
    string s3("hola que tal soy otro string");
    cout << s3.find("soy") << endl;

    return 0;
}