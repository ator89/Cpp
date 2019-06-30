#ifndef USER_H
#define USER_H
#include <string>
using std::string;

class User{
    private:
        string username, password;
    public:
        //Constructors
        User();
        User(string,string);
        //Destructor
        ~User();

        //Setters
        void setUsername(string);
        void setPassword(string);

        //Getters
        string getUsername();
        string getPassword();

};

#endif
