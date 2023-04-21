#include <iostream>
using namespace std;


class A{
public:
    void mes1() {
        cout << "hi1" << endl;
    }

private:
    void mes2() {
        cout << "hi1" << endl;
    }

protected:
    void mes3() {
        cout << "hi1" << endl;
    }
};


class IA : public A{
public:
    void mes1a(){
        mes1();
    }

    void mes2a(){
        mes2();
    }

    void mes3a(){
        mes3();
    }
};