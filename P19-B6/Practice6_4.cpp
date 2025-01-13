#include <iostream>
using namespace std;

long fibonacci(long n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int x;
    cout << "Masukan nilai Fibonacci\n";
    cout << "Masukan nilai x: ";
    cin >> x;

    if (x <= 0) {
        cout << "Nilai x harus lebih besar dari 0\n";
    } else {
        cout << "Nilai Fibonacci dari " << x << " = " << fibonacci(x) << endl;
    }

    return 0;
}
