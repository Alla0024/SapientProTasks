#include <iostream>
using namespace std;
int main()
{
    float a, b, S, P;
    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;
    S = a * b;
    P = 2 * (a + b);
    cout << "Area: " << S << endl;
    cout << "Perimeter: " << P << endl;
}