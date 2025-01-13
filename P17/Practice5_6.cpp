#include <iostream>
#include<cctype>
using namespace std;
void calculateRemainder(){
  
  int main(){
    cout<<"Program Menghitung Sisa Bagi\n";
    cout<<"-----------------------------\n";
    cout<<"Program ini akan menampilkan sisa bagi setiap kali anda memasukkan bilangan dan bilangan pembagi.\n";
    cout<<"Masukkan 'N' atau 'n' jika anda ingin berhenti mengulang.\n";
    cout<<"-----------------------------\n";
    cout<<endl;
  }
  int nomer, bagi, sisa = 0;
  char chrpilihan  = 'Y';

  while(toupper(chrpilihan) == 'Y'){
    cout<<"Masukkan suatu bilangan : ";
    cin>>nomer;
    cout<<"Masukkan bilangan pembagi :";
    cin>>bagi;

    cout<<"Bilangan yang dipilih adalah :"<<nomer<<endl;
    cout<<"bilangan pemagi :"<<bagi<<endl;

    sisa=nomer%bagi;
    if (sisa == 0){
      cout<<"Sisa bagi tidak ada"<<endl;
    } else{
      cout<<"Sisa bagi :"<<sisa<<endl;
    }

    cout<<"Apakah anda ingin mengulang? (y/n)\n";
    cin>>chrpilihan;
  }
  }