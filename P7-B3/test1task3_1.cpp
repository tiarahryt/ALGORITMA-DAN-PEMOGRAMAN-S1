#include <iostream>
using namespace std;
int main()
{

    float harga, diskon, potongan, total;
    cout << "==========================\n";
    cout << "Masukkan jumlah harga: ";
    cin >> harga;
    cout << "Masukkan diskon (%): ";
    cin >> diskon;
    cout << "==========================\n";
    potongan = (diskon / 100) * harga;
    total = harga - potongan;
    cout << "Harga asli: " << harga << endl;
    cout << "Potongan: " << potongan << endl;
    cout << "Total yang harus bayar: " << total << endl;
}