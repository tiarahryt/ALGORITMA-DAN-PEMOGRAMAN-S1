#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Nilai ke-1: ";
    cin >> x;

    cout << "Nilai ke-2: ";
    cin >> y;

    cout << "Nilai ke-3: ";
    cin >> z;

    if (x > y && x > z)
        cout << x << "adalah Nilai Terbesar" << endl;
    else if (y > x && y > z)
        cout << y << "adalah Nilai Terbesar" << endl;
    else if (z > y && z > x)
        cout << z << "adalah Nilai Terbesar" << endl;
}