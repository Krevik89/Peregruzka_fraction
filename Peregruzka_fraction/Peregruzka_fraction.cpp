#include <iostream>
#include"Fraction.h"
using namespace std;

int main()
{
    setlocale(0, "");

    Fraction c1;// (5, 6);
    Fraction c2(3,2);
    c1 + c2;
    cout << endl<<endl;
    c1 - c2;
    cout << endl << endl;
    c1 * c2;
    cout << endl << endl;
    c1 / c2;
    
}

