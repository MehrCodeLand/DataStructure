#include <iostream>
using namespace std;

int main()
{
    int a = 10 ;
    int b = 15 ;
    int temp ;

    cout << "A: " << a << endl;
    cout << "B: " << b << endl;

    temp = a ;
    a = b ;
    b = temp ;

    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
}