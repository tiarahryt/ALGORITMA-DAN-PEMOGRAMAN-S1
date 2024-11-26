#include<iostream>
using namespace std;

int main();
string gender = "L";
float tb = 160;
float bb = 60;
float bb_ideal;

if(gender == "L")(
bb_ideal = (tb - 100) - ((tb - 100) * 0,1);
) else if(gender == "P")(
bb_ideal = (tb - 100) - ((tb - 100) * 0,15);
) else {
	cout << "Gender Salah";
}
cout << bb_ideal;
}
