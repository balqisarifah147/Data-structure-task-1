#include <iostream>
#define N 50

int main ()
{

printf(" Nama        : Balqis Arifah \n");
printf(" Kelas       : RPL 19B/19051397076 \n");
printf(" Mata Kuliah : Praktikum Struktur Data\n");
printf(" Modul 9 Praktikum Searching\n");
printf("==================================\n");
printf("PROGRAM REPLACE KARAKTER\n");
printf("==================================\n");

/* prototype fungsi */

void replace(char*, char, char);

  char data[N], find, ganti;
   printf("\nMasukkan sebuah Kalimat: ");
    scanf("%[^\n]", data);
     printf("> Masukkan karakter yang dicari: ");
      getchar();scanf("%c", &find);
       printf("> Masukkan Karakter pengganti: ");
        getchar();scanf("%c", &ganti);
    replace(data,find, ganti);
    printf("\nHasil replace: %s\n\n", data);
  return 0;
}
 
void replace(char *data, char find, char replace){
int i=0;
 
while(*data !='\0'){
  /* fungsi merubah karakter */
  *data=((*data == find)?replace:*data);
     data++;
    i++;
  }
}
