#include <iostream>
#include <cmath>
using namespace std;


class Point{
private:
    int x;
    int y;
    int id;
    static int count;

public:
    Point(int x, int y){
        this->x = x;
        this->y = y;
        count++;
        id = count;
    }

    int getId(){
        return this->id;
    }

    static int getCount(){
        return count;
    }

    static float gip(Point &object){
        return sqrt((object.x * object.x + object.y * object.y));
    }
};


int Point::count = 0;