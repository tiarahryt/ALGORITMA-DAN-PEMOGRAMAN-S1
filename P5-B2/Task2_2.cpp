#include <iostream>
using namespace std;

int main()
{
    int pembelian;
    printf("Masukkan harga pembelian (1-5): ");
    scanf("%d", &pembelian);
    switch (pembelian)
    {
    case 1:
        (pembelian >= 100000 && pembelian < 200000);
        cout << "Diskon 5%" << endl;
        break;
    case 2:
        (pembelian >= 200000 && pembelian < 300000);
        cout << "Tiket ke Yogyakarta" << endl;
        break;
    case 3:
        (pembelian >= 300000 && pembelian < 400000);
        cout << "Tiket ke Bali" << endl;
        break;
    case 4:
        (pembelian >= 400000 && pembelian < 500000);
        cout << "Jam Tangan Rolex" << endl;
        break;
    case 5:
        (pembelian >= 500000);
        cout << "Tiket ke Swiss" << endl;
        break;
    default:
        cout << "Tidak ada bonus yang di dapatkan" << endl;
    }
}