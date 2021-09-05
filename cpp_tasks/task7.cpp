#include <iostream>
using namespace std;
int main()
{
    int list[5] = {1, 2, 3, 5, 6};
    int size = sizeof(list) / sizeof(list[0]);
    for (int size = 5 - 1; size >= 0; size--)
    {
        cout << list[size] << ' ';
    }
}