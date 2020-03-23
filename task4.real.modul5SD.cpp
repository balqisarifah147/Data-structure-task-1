#include <iostream>
#include <conio.h>

using namespace std;

struct node
{
      string mahasiswa;
      int nim;
      node* next; 
};


node* head;
node* tail;
node* curr;
node* entry;
node* del;
node* bantu;

void inisialisasi()
{
      head = NULL; //pointer head diarahkan ke NULL
      tail = NULL; 
}

void input()
{
      node* baru; 
      for(int i=0;i<4;i++) { 
      baru = new node; 
      cout<<" Nama Mahasiswa : ";
      cin>>baru->mahasiswa;
      cout<<" NIM Mahasiswa  : ";
      cin>>baru->nim;
      baru->next = NULL; 
      if(head == NULL) {
        head = baru; 
        head->next = NULL;
      } else {
        bantu = head;
        while(bantu->next != NULL) { 
            bantu = bantu->next;
        }
        bantu->next = baru; 
      }
    }
}


void hapus()
{
    string d; 
    if (head != NULL) 
    {
    if(head->next != NULL) 
    {
    bantu = head; 
    while(bantu->next->next!=NULL) 
    {
    bantu = bantu->next; 
    }
    del = bantu->next;
    d = del->mahasiswa; 
    bantu->next = NULL;
    delete del; 
    }
    else
    {
    d = head->mahasiswa;
    head = NULL;
    }
    cout<<d<<" terhapus";
    }
    else
    cout<<"Masih kosong\n";
}
void cetak()
{
      curr = head;
      if(head == NULL) 
            cout<<"\ntidak ada data dalam linked list"<<endl;
      else
      {
            cout<<"Nama Mahasiswa \t NIM \n";
            while(curr!=NULL) 
            {
                  cout<<curr->mahasiswa<<"\t\t"<<curr->nim<<endl;
                  curr = curr->next;
            }
            cout<<endl;
      }
}

int main()
{
    int nim;
    string mhs;
      inisialisasi();
      input();
      cetak();
      hapus();
      cout<<endl;
      cetak();
      return (0);
}
