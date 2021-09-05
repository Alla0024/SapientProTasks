#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    if (a != 0 && b != 0)
    {
        cout << "Sum: " << pow(a, 2) + pow(b, 2) << endl;
        cout << "Subtraction: " << pow(a, 2) - pow(b, 2) << endl;
        cout << "Multiply: " << pow(a, 2) * pow(b, 2) << endl;
        cout << "Division: " << pow(a, 2) / pow(b, 2) << endl;
    }
    else
        cout << "Num shouldn't equal to zero!";
}