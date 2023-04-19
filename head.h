// композиция - зависимость одного класса от другого
// агрегация - работа классов вместе но без явной зависимости, когда, например, один класс вложен в другой
#include <iostream>
using namespace std;


class Cap;
class Human;


class Cap{
private:
    friend Human;
    string color;
};


class Human{
private:
    class Brain{
    public:
        void think(){
            cout << "i think" << endl;
        }
    };

    Brain brain;
    Cap cap;

public:
    void think(){
        brain.think();
    }

    void setCapColor(string color);
    void printCapColor();
};


void Human::setCapColor(string color){
    cap.color = color;
}

void Human::printCapColor(){
    cout << cap.color << endl;
}