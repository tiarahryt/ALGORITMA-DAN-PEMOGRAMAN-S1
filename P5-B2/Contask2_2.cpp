#include <iostream>
#include <string>

using namespace std;

int main()
{
    int pembelian;
    string bonus;

    cout << "Masukkan total pembelian: ";
    cin >> pembelian;

    switch (true)
    {

    case '(pembelian >= 100000 && pembelian < 200000)':
    {
        bonus = "Diskon 5%";
        break;
    }
        (pembelian >= 200000 && pembelian < 300000)
        {
            bonus = "Tiket ke Yogyakarta";
            break;
        }
        else if (pembelian >= 300000 && pembelian < 400000)
        {
            bonus = "Tiket ke Bali";
            break;
        }
        else if (pembelian >= 400000 && pembelian < 500000)
        {
            bonus = "Jam Tangan Rolex";
            break;
        }
        else if (pembelian >= 500000)
        {
            bonus = "Tiket ke Swiss";
            break;
        }
        else
        {
            bonus = "Tidak ada bonus";
        }

        cout << "Bonus yang didapatkan: " << bonus << endl;

        return 0;
    }