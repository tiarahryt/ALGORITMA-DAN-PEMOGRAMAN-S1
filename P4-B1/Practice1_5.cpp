#include <stdio.h>
int main()
{
    int uts, uas;
    printf("Masukkan nilai UTS = ");
    scanf("%d", &uts);
    printf("Masukkan nilai UAS = ");
    scanf("%d", &uas);
    if (uts>70 && uas >=75)
        printf("Lulus\n");
    else
        printf("Tidak lulus");
}