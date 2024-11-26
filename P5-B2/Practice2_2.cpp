#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    long int kode, semester, sks, tahun;
    char nama[100];
    printf("Kode masukkan: [1-3] : ");
    scanf("%1d", &kode);
    printf("Jumlah SKS per semester [14-21] : ");
    scanf("%d", &sks);
    if (kode == 1)
    {
        strcpy(nama, "Teknik Informatika");
        semester = 30000 * sks;
        tahun = semester * 2;
    }
    else if (kode == 2)
    {
        strcpy(nama, "Akuntansi");
        semester = 20000 * sks;
        tahun = semester * 2;
    }
    else if (kode == 3)
    {
        strcpy(nama, "Manajemen");
        semester = 15000 * sks;
        tahun = semester * 2;
    }
    printf("*============================================*\n");
    printf("Nama Jurusan : %s\n", nama);
    printf("Pembayaran dalam 1 semester: %1d\n", semester);
    printf("Pembayaran dalam 1 tahun: %1d\n", tahun);
}