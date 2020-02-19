#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include<limits>

int main(){

    int a;

    cout<<"Enter an integer number\n";
    cin>>a;

    while(1)
    {
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            cout << "You have entered wrong input"<<endl;
            cin>>a;
        }
        if(!cin.fail())
            break;
    }

    cout << "the number is: " <<a<<endl;
    return 0;
}
