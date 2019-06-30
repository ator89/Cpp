#ifndef PERSON_H
#define PERSON_H

#include <string>
class Person{
    protected:
        std::string name, password;
    public:
        Person();
        Person(std::string,std::string);
        ~Person();

        void setName(std::string);
        void setPassword(std::password);
        
        std::string getName();
        std::string getPassword();

        virtual std::string toString()=0;
};

#endif
