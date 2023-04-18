#include <iostream>
using namespace std;


class Tree{
private:
    static int count;
    int x;

public:
    Tree(){
        this->x = 0;
        count++;
        cout << "was created: " << this << endl;
    }

    void print(){
        cout << x << endl;
    }

    ~Tree(){
        cout << "was deleted: " << this << " " << count << endl;
    }
};


int Tree::count = 0;
