#include <iostream>
#include<stdio.h>
#include<string.h>

int main(){

   int i,x,count;
   char str[10][10],temp[10];


printf(" Nama        : Balqis Arifah \n");
printf(" Kelas       : RPL 19B/19051397076 \n");
printf(" Mata Kuliah : Praktikum Struktur Data\n");
printf(" Modul 10 Praktikum Sorting\n");
printf("===============================================\n");
printf("PROGRAM MENGURUTKAN KARAKTER SESUAI ALPHABET \n");
printf("===============================================\n\n");	
printf("BERAPA BANYAK KARAKTER YANG INGIN DI UURUTKAN?: \n");
scanf("%d",&count);

   printf("MASUKKAN KARAKTER: \n");
   for(i=0;i<=count;i++)
      gets(str[i]);
   for(i=0;i<=count;i++)
      for(x=i+1;x<=count;x++){
         if(strcmp(str[i],str[x])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[x]);
            strcpy(str[x],temp);
         }
      }
   printf("SUSUNAN KARAKTER YANG TELAH DIURUTKAN:\n");
   
   for(i=0;i<=count;i++)
      puts(str[i]);
   
   return 0;
}

