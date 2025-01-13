#include <iostream> 
using namespace std;

int factorial(int n) {
    if (n == 1 || n == 0) { 
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int x;
    cout << "Mencari nilai faktorial" << endl;
    cout << "Masukkan nilai X = ";
    cin >> x;

    if (x < 0) {
        cout << "Faktorial tidak terdefinisi untuk bilangan negatif!" << endl;
    } else {
        cout << "Nilai faktorial dari " << x << " = " << factorial(x) << endl;
    }
    return 0; 
}
