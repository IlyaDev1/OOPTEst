#include <iostream>
using namespace std;


class Weapon{
public:
    virtual void click() = 0;
};


class Gun: public Weapon{
public:
    void click() override{
        cout << "click" << endl;
    }
};


class GunMac: public Gun {
public:
    void click() override {
        cout << "gun" << endl;
    }
};


class sword: public Weapon{
public:
    void click() override{
        cout << "sword" << endl;
    }
};


class shield: public Weapon{
public:
    void click() override{
        cout << "shield" << endl;
    }
};


class Player{
public:
    void useWeap(Weapon & weapon){
        weapon.click();
    }
};
