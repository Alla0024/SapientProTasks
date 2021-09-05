#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter 3 numbers: " << endl;
    cin >> a >> b >> c;
    if (a > c && b > c)
    {
        cout << "Result: " << a + b;
    }
    else if (a > b && c > b)
    {
        cout << "Result: " << a + c;
    }
    else
    {
        cout << "Result: " << b + c;
    }
}
