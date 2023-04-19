#include <iostream>
using namespace std;


class Human{
private:
    string Name;

public:
    void setName(string name){
        this->Name = name;
    }

    void getName(){
        cout << "i am " << this->Name << endl;
    }
};


class Proger : public Human{
public:
    void myFunc(){
        cout << "i am proger" << endl;
    }
};


class Jun : public Proger{
public:
    void hobby(){
        cout << "my hobby is breaking production" << endl;
    }
};
