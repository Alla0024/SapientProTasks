#include <iostream>
using namespace std;
int main()
{
    int a, b, c, sum;
    cout << "Enter a, b: " << endl;
    cin >> a >> b;
    c = a;
    sum=0;
    while (c >= a && c <= b)
    {
        sum += c;
        c++;
    }
    cout << "Sum: " << sum;
}