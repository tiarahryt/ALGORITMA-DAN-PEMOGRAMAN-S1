#include <iostream>
using namespace std;

int main()
{

    float nilai;
    char grade;
    cout << "Masukkan Nilai" << endl;
    cin >> nilai;

    if (nilai >= 81 && nilai <= 100)
    {
        grade = 'A';
    }
    else if (nilai >= 71 && nilai < 81)
    {
        grade = 'B';
    }
    else if (nilai >= 61 && nilai < 71)
    {
        grade = 'C';
    }
    else if (nilai >= 51 && nilai < 61)
    {
        grade = 'D';
    }
    else if (nilai >= 0 && nilai < 51)
    {
        grade = 'E';
    }
    else
    {
        cout << "nilai tidak valid";
    }

    cout << "Nilai : " << nilai << endl;
    cout << "Grade : " << grade << endl;
}