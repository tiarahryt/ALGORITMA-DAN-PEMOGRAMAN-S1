#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Masukan Nilai ke-1: ";
    cin >> a;

    cout << "Masukan Nilai ke-2: ";
    cin >> b;

    cout << "Masukan Nilai ke-3: ";
    cin >> c;

    if (a < b && a < c)
    {
        cout << "Urutan Nilai Dari yang Terkecil: " << a << " " << b << " " << c << " ";
    }
    else if (a < c && a < b)
    {
        cout << "Urutan Nilai Dari yang Terkecil: " << a << " " << c << " " << b << " ";
    }
    else if (b < a && b < c)
    {
        cout << "Urutan Nilai Dari yang Terkecil: " << b << " " << a << " " << c << " ";
    }
    else if (b < c && b < a)
    {
        cout << "Urutan Nilai Dari yang Terkecil: " << b << " " << c << " " << a << " ";
    }
    else if (c < a && c < b)
    {
        cout << "Urutan Nilai Dari yang Terkecil: " << c << " " << a << " " << b << " ";
    }
    else if (c < b && c < a)
    {
        cout << "Urutan Nilai Dari yang Terkecil: " << c << " " << b << " " << a << " ";
    }
    else
    {
        cout << "Urutan Nilai Dari yang Terkecil: " << a << " " << b << " " << c << " ";
    }
}