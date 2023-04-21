#include <iostream>
using namespace std;


class Point1{
protected:
    int x;

public:
    Point1(){
        this->x = 0;
    }

    Point1(int x){
        this->x = x;
    }
};


class Point2 : public Point1{
private:
    int y;

public:
    Point2(int x, int y) : Point1(x){
        // this->x = x; not need
        this->y = y;
    }

    void print(){
        cout << this->x << " " << this->y << endl;
    }
};