#include "Person.h"

Person::Person(){
    this->name = "";
    this->password = "";
}

Person::Person(std::string _name, std::string _password){
    name = _name;
    password = _password;
}

Person::~Person(){
}

//Setters
void Person::setName(std::string _name){
    name = _name;
}

void Person::setPassword(std::string _password){
    password = _password;
}

//Getters
std::string Person::getName(){
    return password;
}

std::string Person::getPassword(){
    return password;
}
