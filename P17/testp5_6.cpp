#include <iostream>
#include <ctype.h>
using namespace std;

void bagiBilangan();
bool apakahInginMengulang();

int main() {
    do {
        bagiBilangan();
    } while (apakahInginMengulang());
    return 0;
}

void bagiBilangan() {
    int nomer, bagi, sisa = 0;
    cout << "Masukkan suatu bilangan : ";
    cin >> nomer;
    cout << "Masukkan bilangan pembagi : ";
    cin >> bagi;

    cout << "Bilangan yang dipilih adalah : " << nomer << endl;
    cout << "Bilangan pembagi : " << bagi << endl;

    sisa = nomer % bagi;

    if (sisa == 0) {
        cout << "Sisa bagi tidak ada" << endl;
    } else {
        cout << "Sisa bagi : " << sisa << endl;
    }
}

bool apakahInginMengulang() {
    char chrpilihan;
    cout << "Apakah anda ingin mengulang? (y/n) ";
    cin >> chrpilihan;
    return toupper(chrpilihan) == 'Y';
}
