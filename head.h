#include <iostream>
using namespace std;


class Basket {
public:
    static int apples;

    Basket(){
        apples++;
    }
};


int Basket::apples = 0;
