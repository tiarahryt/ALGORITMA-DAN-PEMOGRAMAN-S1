#include <iostream>
using namespace std;

int main()
{
    int pembelian;
    cout << "Masukkan harga pembelian : ";
    cin >> pembelian;

    if (pembelian >= 100000 && pembelian < 200000)
    {
        cout << "discount 5%";
    }
    else if (pembelian >= 200000 && pembelian < 300000)
    {
        cout << "Tiket ke Yogya";
    }
    else if (pembelian >= 300000 && pembelian < 400000)
    {
        cout << "Tiket ke Bali";
    }
    else if (pembelian >= 400000 && pembelian < 500000)
    {
        cout << "Jam Tangan Rolex";
    }
    else if (pembelian >= 500000)
    {
        cout << "Tiket ke Swiss";
    }
    else
    {
        cout << "Nilai invalid";
    }
}