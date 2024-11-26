#include <iostream>
using namespace std;

/*

Aturan Grade Nilai :
>=81 && <=100:A
>=71 && <81:B
>=61 && <71:C
>=51 && <61:D
>=0  && <51:E

*/

int main()
{
    float nilai;
    cout << "Nilai : ";
    cin >> nilai;
    float grade;
    cout << "Grade : ";
    cin >> grade;

    if (nilai >= 81 && nilai <= 100)
    {
        // Jika nilai adalah 81 atau diatasnya dan jika nilai adalah 100 atau dibawahnya, maka grade A
        grade = 'A';
    }
    else if (nilai >= 71 && nilai < 81)
    {
        // Jika nilai adalah 71 atau diatasnya dan jika nilai kurang dari 81, maka grade B
        grade = 'B';
    }
    else if (nilai >= 61 && nilai < 71)
    {
        // Jika nilai adalah 61 atau dibawahnya dan jika nilai kurang dari 71, maka grade C
        grade = 'C';
    }
    else if (nilai >= 51 && nilai < 61)
    {
        // Jika nilai adalah 51 atau dibawahnya dan jika nilai kurang dari 61, maka grade D
        grade = 'D';
    }
    else if (nilai < 51)
    {
        // Jika nilai kurang dari 51,
        // yaitu 0 sampai dengan 50, maka grade E
        grade = 'E';
    }

    return 0;
}