#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#define Max 200

using namespace std;

struct Stack{ // inisialisasi stack

 char data[Max];
 int top;
} T;

void PUSH (char x){
if(T.top == Max){
 cout<<"Stack Sudah Penuh";
 getch();
}
else{
 T.top = T.top + 1;
 T.data[T.top] = x;
}
}

char POP(){
 char hasil;
 if(T.top == 0){
    cout<<"Stack sudah kosong";
      hasil = ' ';
   }
   else{
    hasil = T.data[T.top];
      T.top = T.top - 1;
   }
   return hasil;
}

int main()
{
     int W,jumlah,belakang;
     char Kalimat[Max];
     bool palindrome=true;

     T.top=0;
     cout<<"Program Stack untuk Mengecek Palindrome\n";
     cout<<"===========================================\n\n"; 


     cout<<"Input Kalimat	: ";
     cin.getline(Kalimat,sizeof(Kalimat));
     cout<<"Kalimat Asal	: "<<Kalimat;

     jumlah=strlen(Kalimat);
     belakang=jumlah-1;
     
     cout<<"\njumlah kata	:"<<jumlah<<endl;

     for(W=0;W<strlen(Kalimat);W++)
     {
      PUSH(Kalimat[W]);
      }

      cout<<"Kalimat Setelah di Balik : ";

      for (W=0;W<strlen(Kalimat);W++)
      {
       cout<<""<<POP();
      }

      for (int a=0;a<jumlah;a++)
      {
          if((char)tolower(Kalimat[a])!=(char)tolower(Kalimat[belakang]))
            palindrome=false;
          break;
      }
            if (palindrome)
                cout<<"\nPalindrome";
            else
                cout<<"\nBukan palindrome";
            return 0;
       getch();
    }
