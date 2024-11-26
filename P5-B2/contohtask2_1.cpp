#include <iostream>
using namespace std;
int main()
{
  
  char nilai;
  char grade;
  cout << "Nilai : ";
  cin >> nilai;

  if (nilai >= 81 && nilai <= 100)
  {
    "A";
  }
  else if (nilai >= 71 && nilai < 81)
  {
    "B";
  }
  else if (nilai >= 61 && nilai < 71)
  {
    "C";
  }
  else if (nilai >= 51 && nilai < 61)
  {
    "D";
  }
  else if (nilai < 51)
  {
    "E";
  }

  cout << "Grade : " << grade << endl;

  return 0;
}