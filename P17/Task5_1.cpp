#include<iostream>
using namespace std;

int main(){
  int i;
  cout<<"\n Tampilkan Bilangan Ganjil dari 1-20 dengan While \n\n";
  cout<<"Hasilnya adalah :";
  while(1){
    if (i%2 == 1){
      cout<<i<< ", ";
    }
    i += 1;
    if (i>=20){
      break;
    }
  }

  cout<<"\n\t Bilangan Genap dari 1-20 dengan Do While \n\n";
  cout<<"Hasilnya adalah :";
  do{
    if(i%2 ==0){
      cout<< i<< ", ";
    }
    i++;
  }
  while(i<=20);
  cout<<endl<<endl;
}