#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Masukkan nilai x = ";
    cin >> x;
    if (x > 0)
    {
        cout << "x adalah bilangan positif";
    }
    else if (x < 0)
    {
        cout << "x adalah bilangan negatif";
    }
    else
    {
        cout << "x adalah bilangan 0";
    }
}