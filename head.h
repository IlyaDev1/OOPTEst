#include <iostream>
using namespace std;


class Apple{
public:
    string weight;
    string color;
    static int count;
    int id;

    Apple(string w, string c){
        this->weight = w;
        this->color = c;
        count++;
        id = count;
    }

    void print(){
        cout << this->id << endl;
    }
};


int Apple::count = 0;