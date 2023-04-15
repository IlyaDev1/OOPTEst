#include "head.h"


int main(){
    Point a(20, 30);
    Point b(10, 20);
    Point c = a + b;
    cout << c.getCoor()[0] << " " << c.getCoor()[1] << endl;

    return 0;
}