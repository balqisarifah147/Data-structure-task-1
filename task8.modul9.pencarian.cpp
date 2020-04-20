#include <iostream>
#include <stdio.h>

int main ()
{

printf(" Nama        : Balqis Arifah \n");
printf(" Kelas       : RPL 19B/19051397076 \n");
printf(" Mata Kuliah : Praktikum Struktur Data\n");
printf(" Modul 9 Praktikum Searching\n");
printf("==================================\n");
printf("PROGRAM PENCARIAN ANGKA\n");
printf("==================================\n");
 int data;
 int i, cari;
 
 printf("Masukkan banyaknya data : ");
 scanf("%d", &data);
 
 int index[data];
 printf("\n");
 for (i=1; i<=data; i++)
 {
  printf("Masukkan data ke-%d : ", i);
  scanf("%d", &index[i]);
 }
 
 printf("\n");
    printf("Masukan data yang ingin cari : ");
    scanf("%d",&cari);
 
 //Pencarian Nilai
 int posisi=0;
 for (i=1; i<=data; i++)
 {
  if (index[i]==cari)
  {
   printf("Data yang anda cari berada pada posisi ke-%d\n",i);
   posisi=1;
  }
 }
 
 if (posisi==0)
    {
     printf("Maaf, data yang anda cari tidak ada");
    }
 return 0;
}
