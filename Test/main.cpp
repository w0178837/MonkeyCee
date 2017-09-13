#include <iostream>

int main() {

    using namespace std;

    cout << "Hello, World!" << endl;

    /* enumeration allows you to assign numerical values to constants which can be called later*/
    enum color {red, green = 'C', blue = 'c'} c;
    c = blue;

    cout << c << endl;

    c = green;

    cout << c;



    return 0;
}