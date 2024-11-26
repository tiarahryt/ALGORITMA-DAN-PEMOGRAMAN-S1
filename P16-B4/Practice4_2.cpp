#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=0; i<10; i++){
        if(i==4) continue;
        
        cout<<"bilangan= "<<i<<"\n";
        if(i==6) break;
    }
}