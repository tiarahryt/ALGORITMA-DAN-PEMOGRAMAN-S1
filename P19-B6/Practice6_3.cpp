#include <iostream>
using namespace std;

void tukar(int &px, int &py) {
    int z;
    z = px;
    px = py;
    py = z;

    cout << "Nilai di akhir fungsi" << endl;
    cout << "Nilai px = " << px << " nilai py = " << py << endl;
}

int main() {
    int a, b;
    a = 99;
    b = 11;

    cout << "Nilai sebelum pemanggilan fungsi" << endl;
    cout << "Nilai a = " << a << " nilai b = " << b << endl << endl;

    tukar(a, b);

    cout << "Nilai sesudah pemanggilan fungsi" << endl;
    cout << "Nilai a = " << a << " nilai b = " << b << endl;

    return 0;
}
