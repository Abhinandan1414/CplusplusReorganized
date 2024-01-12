#include "calc.h"
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Addition of " << a << " and " << b << " is: " << add(a, b) << endl;
    cout << "Subtraction of " << a << " and " << b << " is: " << sub(a, b) << endl;
    cout << "Multiplication of " << a << " and " << b << " is: " << mul(a, b) << endl;
    return 0;
}