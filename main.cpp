#include "head.h"


int main(){
    Human Ilya;
    Human Dasha;
    Basket fst(100);

    Ilya.Take(fst, 10);
    Dasha.Take(fst, 80);

    fst.print();

    return 0;
}