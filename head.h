#include <iostream>
using namespace std;


class weapon{
public:
    virtual void click(){
        cout << "click" << endl;
    }
};


class gun: public weapon{
public:
    void click() override{
        cout << "gun" << endl;
    }
};


class sword: public weapon{
public:
    void click() override{
        cout << "sword" << endl;
    }
};


class shield: public weapon{
public:
    void click() override{
        cout << "shield" << endl;
    }
};


class player{
public:
    void useWeap(weapon & object){
        object.click();
    }
};
