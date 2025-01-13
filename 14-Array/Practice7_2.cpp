#include <stdio.h>
main(){
  int square[100];
  int i, k;
  for (i = 0; i < 10; i++){
    k = i + 1;
    square[1] = k * k;
    printf("\nPangkat dari %d adalah %d", k, square[i]);
  }
}