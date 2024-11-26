#include<iostream>
using namespace std;

int main() {
    int n = 1;
    for (int I = 5; I >= 1; I--) {
        for (int J = 1; J <= I; J++) {
            cout << n << " "; 
            n++; 
        }
        cout << endl;
    }
    
    return 0;
}