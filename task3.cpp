#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "Enter a: ";
    cin >> a;
    b = a * a;
    cout << "a^2: " << b << endl;
    a = b * b;
    cout << "a^4: " << a << endl;
    b = a * a;
    cout << "a^8: " << b << endl;
}