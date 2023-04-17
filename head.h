#include <iostream>
using namespace std;


class Human;
class Basket;


class Human{
private:
    int used;

public:
    Human(){
        this->used = 0;
    }

    void Take(Basket & apple, int value);
};


class Basket{
    friend Human;

private:
    int quantity;

public:
    Basket(int value){
        this->quantity = value;
    }

    void print(){
        cout << this->quantity << endl;
    }
};


void Human::Take(Basket & apple, int value){
    apple.quantity -= value;
    used += value;
}