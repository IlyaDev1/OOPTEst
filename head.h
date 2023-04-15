#include <iostream>
using namespace std;


class Point{
private:
    int x;
    int y;

public:
    Point(){
        this->x = 0;
        this->y = 0;
        cout << "object was created: " << this << endl;
    }

    Point(int x, int y) {
        this->x = x;
        this->y = y;
        cout << "object was created: " << this << endl;
    }

    Point(const Point &object) {
        this->x = object.x;
        this->y = object.y;
        cout << "object was created: " << this << endl;
    }

    void setCoor(int x, int y) {
        this->x = x;
        this->y = y;
    }

    int *getCoor() {
        int *mas = new int[2];
        mas[0] = this->x;
        mas[1] = this->y;
        return mas;
    }

    bool operator ==(const Point &object) {
        if (this->x == object.x && this->y == object.y) {
            return true;
        } else return false;
    }

    Point operator +(Point const &object) {
        Point temp;
        temp.x = this->x + object.x;
        temp.y = this->y + object.y;
        return temp;
    }

    Point & operator =(const Point &object){
        this->x = object.x;
        this->y = object.y;
        return *this;
    }

    ~Point() {
        cout << "object was deleted: " << this << endl;
    }
};