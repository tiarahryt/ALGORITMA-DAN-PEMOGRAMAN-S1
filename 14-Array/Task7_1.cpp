#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Berapa data yang ingin diisi? : ";
    cin >> n;

    int array[n]; 

    for (int i = 0; i < n; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << " : ";
        cin >> array[i];
    }

    cout << "\nCetak nilai input\n";
    for (int i = 0; i < n; i++) {
        cout << "Nilai ke-" << i + 1 << " : " << array[i] << endl;
    }

    return 0;
}
