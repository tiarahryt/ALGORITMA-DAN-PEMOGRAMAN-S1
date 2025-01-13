#include <iostream>
using namespace std;

void cetakMatriks(int matriks[3][3]) {
    cout << "\nMatrix 3x3 =\n";
    for (int baris = 0; baris < 3; baris++) {
        for (int kolom = 0; kolom < 3; kolom++) {
            cout << matriks[baris][kolom] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int matriks[3][3]; 

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Input baris " << i + 1 << " kolom " << j + 1 << " = ";
            cin >> matriks[i][j];
        }
    }

    cetakMatriks(matriks);

    return 0;
}
