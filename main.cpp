#include "head.h"


int main(){
    Point a(10, 20);
    Point b(-1, 2);
    Point c(3, 4);

    cout << b.getId() << endl;
    cout << Point::getCount() << endl;

    cout << Point::gip(c);

    return 0;
}