#include <iostream>
using namespace std;
int main()
{
    int b, n;
    cout << "Enter n: ";
    cin >> n;
    b = 0;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = n + 1;
        }
        b++;
    }
    cout << "Number of transformations: " << b;
}