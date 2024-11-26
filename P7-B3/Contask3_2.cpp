#include <iostream>
using namespace std;

int main()
{
    int nilai;
    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    switch (nilai)
    {
    case 81 ... 99:
        cout << "A";
        break;
    case 71 ... 80:
        cout << "B";
        break;
    case 61 ... 70:
        cout << "C";
        break;
    case 51 ... 60:
        cout << "D";
        break;
    case 0 ... 50:
        cout << "E";
        break;
    default:
        cout << "invalid number";
    }
}