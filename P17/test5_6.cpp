#include <iostream>
#include <ctype.h>
using namespace std;

void bagiBilangan();
bool ulangi();
int main() {
    do {
        bagiBilangan();
    } while (ulangi());
    return 0;
}

void bagiBilangan() {
    int nomer, bagi, sisa = 0;
    cout << "Masukkan suatu bilangan : ";
    cin >> nomer;
    cout << "Masukkan bilangan pembaginya : ";
    cin >> bagi;

    cout << "Bilangan yang dipilihnya adalah : " << nomer << endl;
    cout << "Bilangan pembaginya : " << bagi << endl;

    sisa = nomer % bagi;

    if (sisa == 0) {
        cout << "Invalid Sisa bagi" << endl;
    } else {
        cout << "Sisa baginya adalah : " << sisa << endl;
    }
}

bool ulangi() {
    char chrpilihan;
    cout << "Apakah anda ingin mengulang? (y/n) ";
    cin >> chrpilihan;
    return toupper(chrpilihan) == 'Y';
}
