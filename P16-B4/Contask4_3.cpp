#include<iostream>
using namespace std;

int main() {
    int n = 1;
    for (int baris = 5; baris >= 1; baris--) {
        for (int kolom = 1; kolom <= baris; kolom++) {
            cout << n << " "; 
            n++; 
        }
        cout << endl;
    }
    
    return 0;
}