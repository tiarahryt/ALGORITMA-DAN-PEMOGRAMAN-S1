#include <iostream>
using namespace std;

int main()
{

    // penentuan nilai
    float pembelian;
    char disc;

    cout << "Masukkan jumlah pembelian :" << endl;
    cin >> pembelian;

    if (pembelian >= 100000 && pembelian < 200000)
    {
        disc = 'discount 5%';
    }
    else if (pembelian >= 200000 && pembelian < 300000)
    {
        disc = 'Tiket ke Yogya';
    }
    else if (pembelian >= 300000 && pembelian < 400000)
    {
        disc = 'Tiket ke Bali';
    }
    else if (pembelian >= 400000 && pembelian < 500000)
    {
        disc = 'Jam Tangan Rolex';
    }
    else if (pembelian >= 500000)
    {
        disc = 'Tiket ke Swiss';
    }
    else
    {
        cout << "Nilai invalid";
    }

    // output
    cout << endl;
    cout << "Pembelian : " << pembelian << endl;
    cout << "Disc : " << disc << endl;
}