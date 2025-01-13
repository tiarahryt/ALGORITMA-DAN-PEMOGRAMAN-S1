#include <iostream>
using namespace std;

int findmax(int n1, int n2);
void printmax(int m);

int main() {
    int i = 5, j = 7;
    int k;
    
    k = findmax(i, j);
    printmax(k);
    
    return 0;
}

int findmax(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}

void printmax(int m) {
    cout << "Bilangan yang terbesar adalah: " << m << endl;
}
