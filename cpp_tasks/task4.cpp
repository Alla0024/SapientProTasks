#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter year: ";
    cin >> a;
    if (a % 100 == 0)
    {
        cout << a / 100 << " century";
    }
    else
        cout << (a / 100) + 1 << " century";
}