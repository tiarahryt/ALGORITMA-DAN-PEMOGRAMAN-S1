#include <iostream>
using namespace std;

int main()
{
    long int beli, disc, total;
    cout << "Masukkan harga pembelian = ";
    cin >> beli;
    if (beli >= 100000)
    {
        disc = 0.1 * beli;
        total = beli - disc;
        cout << "\nSelamat anda mendapatkan discount 10%";
    }
    else
    {
        disc = 0.05 * beli;
        total = beli - disc;
        cout << "\nSelamat anda mendapatkan discount 5%";
    }
    cout << "\nPembelian anda adalah =" << beli;
    cout << "\nDiscount sebesar =" << disc;
    cout << "\nTotal Pembayaran anda adalah =" << total;
}