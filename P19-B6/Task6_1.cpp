#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14;

double volumeBola(double r) {
    return (4.0 / 3) * PI * pow(r, 3);
}

double volumeKerucut(double r, double t) {
    return ((1.0 / 3) * PI * r * r * t);
}

double volumeTabung(double r, double t) {
    return PI * pow(r, 2) * t;
}

int main() {
    int pilihan;
    double r, t;

    cout << "Pilih bentuk untuk menghitung volumenya:\n";
    cout << "1. Bola\n";
    cout << "2. Kerucut\n";
    cout << "3. Tabung\n";
    cout << "Masukkan pilihan (1-3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Masukkan jari-jari (r): ";
            cin >> r;
            cout << "Volume bola adalah: " << volumeBola(r) << endl;
            break;
        case 2:
            cout << "Masukkan jari-jari (r): ";
            cin >> r;
            cout << "Masukkan tinggi (t): ";
            cin >> t;
            cout << "Volume kerucut adalah: " << volumeKerucut(r, t) << endl;
            break;
        case 3:
            cout << "Masukkan jari-jari (r): ";
            cin >> r;
            cout << "Masukkan tinggi (t): ";
            cin >> t;
            cout << "Volume tabung adalah: " << volumeTabung(r, t) << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}
