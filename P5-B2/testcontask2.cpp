#include <iostream>
using namespace std;

int main()
{

    // penentuan nilai
    float nilai;
    char grade;

    cout << "Menentukan nilai" << endl;
    cin >> nilai;

    if (nilai >= 91 && nilai <= 100)
    {
        grade = 'A';
    }
    else if (nilai >= 81 && nilai < 91)
    {
        grade = 'B';
    }
    else if (nilai >= 71 && nilai < 81)
    {
        grade = 'C';
    }
    else if (nilai >= 61 && nilai < 71)
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

    // output
    cout << endl;
    cout << "Nilai : " << nilai << endl;
    cout << "Grade : " << grade << endl;
}