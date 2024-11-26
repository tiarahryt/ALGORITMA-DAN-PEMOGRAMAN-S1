#include <iostream>
using namespace std;

int main()
{
    int pembelian;
    printf("Masukkan harga pembelian: ");
    scanf("%d", &pembelian);
    switch (pembelian)
    {
    case 100000 ... 199999:
        cout << "discount 5%";
        break;
    case 200000 ... 299999:
        cout << "tiket ke Yogya";
        break;
    case 300000 ... 399999:
        cout << "tiket ke Bali";
        break;
    case 400000 ... 499999:
        cout << "jam tanga rolex";
        break;
    case 500000 ... 1000000:
        cout << "tiket ke swiss";
        break;
    default:
        cout << "invalid number";
    }
}