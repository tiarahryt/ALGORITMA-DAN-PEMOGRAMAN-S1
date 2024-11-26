#include <iostream>
using namespace std;
int main()
{
    int kdhari;
    cout << "Masukkan kode hari [1-7]";
    cin >> kdhari;
    if (kdhari == 1)
    {
        cout << "\nKode " << kdhari << " adalah hari Senin";
    }
    else if (kdhari == 2)
    {
        cout << "\nKode " << kdhari << " adalah hari Selasa";
    }
    else if (kdhari == 3)
    {
        cout << "\nKode " << kdhari << " adalah hari Rabu";
    }
    else if (kdhari == 4)
    {
        cout << "\nKode " << kdhari << " adalah hari Kamis";
    }
    else if (kdhari == 5)
    {
        cout << "\nKode " << kdhari << " adalah hari Jumat";
    }
    else if (kdhari == 6)
    {
        cout << "\nKode " << kdhari << " adalah hari Sabtu";
    }
    else if (kdhari == 7)
    {
        cout << "\nKode " << kdhari << " adalah hari Minggu";
    }
}