#include <iostream>
using namespace std;

int main()
{

    float phi = 3.14;
    float jari;
    float luas_permukaan, volume;

    cout << "\t Hitung Luas Permukaan & Volume Bola \n\n";

    cout << "Masukkan Jari-jari : ";
    cin >> jari;

    luas_permukaan = 4 * phi * jari * jari;
    cout << "\n Hasil Luas Permukaan Bola : " << luas_permukaan;
    
    volume = 4 / (float)3 * phi * jari * jari * jari;
    cout << "\n Hasil Volume Bola    : " << volume;
}