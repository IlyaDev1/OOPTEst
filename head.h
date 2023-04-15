#include <iostream>
using namespace std;


class Human;
class Basket;

class Human{
private:
    int quan;
public:
    void take(Basket &object, int value);
};


class Basket{
private:
    int count;
    friend void Human::take(Basket &object, int value);

public:
    Basket(int value){
        this->count = value;
    }

    void print(){
        cout << this->count << endl;
    }
};


void Human::take(Basket &object, int value){
    object.count -= value;
    this->quan += value;
}