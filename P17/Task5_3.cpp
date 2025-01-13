#include<stdio.h>
int main(){
  int i=1,count=1,max=5;

  do{
    printf("%d ", i);
    if (count==max){ 
      printf("\n"); 
      count=0;
      max--;
    }
    i++;
    count++;
  } while (i<=15);
  return 0;
}