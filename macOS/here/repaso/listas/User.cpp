#include "User.h"

//Constructors
User::User(){
    username = "";
    password = "";
}

User::User(string _username, string _password){
    username = _username;
    password = _password;
}
//Destructor
User::~User(){}


//Setters
void User::setUsername(string _username){
    username = _username;
}

void User::setPassword(string _password){
    password = _password;
}

//Getters
string User::getUsername(){
    return username;
}

string User::getPassword(){
    return password;
}
