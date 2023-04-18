#include <iostream>
using namespace std;


class Image{
private:
    class Pixel{
    private:
        int r; int g; int b;
    public:
        Pixel(int r, int g, int b){
            this->r = r;
            this->g = g;
            this->b = b;
        }

        void getPixel(){
            cout << this->r << " " << this->g << " " << this->b << endl;
        }
    };

    Pixel pix[4]{
        Pixel(0, 0, 0),
        Pixel(10, 10, 10),
        Pixel(20, 20, 20),
        Pixel(30, 30, 30)
    };

public:
    void print(){
        pix[0].getPixel();
        pix[1].getPixel();
        pix[2].getPixel();
        pix[3].getPixel();
    }
};
