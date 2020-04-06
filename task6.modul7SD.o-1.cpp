#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 8

using namespace std;
typedef struct{
int data [MAX];
int head;
int tail;
} Queue;

	Queue antrian;
		void Create (){
		antrian.head=antrian.tail=-1;
	}
	
	int IsEmpty(){
	if (antrian.tail==-1)
		return 1;
		else
		return 0;
	}
	
	
 int IsFull(){
  if(antrian.tail==MAX-1)
  		return 1;
  		else return 0; }
  		
  		
void Enqueue (int data){
if (IsEmpty()==1){
	antrian.head=antrian.tail=1;
	antrian.data[antrian.tail]=data;
	printf("%d masuk",antrian.data[antrian.tail] );
	void Tampil();
	{
			if(IsEmpty()==0)
			{
			for (int i=antrian.head;i<=antrian.tail;i++){
			printf("%d",antrian.data [i]);
	}
			}else printf("data kosong!\n");}
	} else 
				if ( IsFull ()==0){
				antrian.tail++;
				antrian.data[antrian.tail]=data;
				printf("%d masuk!",antrian.data[antrian.tail]);
	}
}

int Dequeue(){
int i;
int e = antrian.data[antrian.head];
for (i=antrian.head;i<=antrian.tail-1;i++){
	antrian.data[i] =antrian.data[i+1];
}
 antrian.tail--;
 return e;
}

void Clear(){
antrian.head=antrian.tail=-1;
printf("data clear");
}


void Tampil(){
int jum=0;
	if (IsEmpty){
	for (int i=antrian.head;i<=antrian.tail;i++){
	printf("%d",antrian.data[1]);
	jum=jum+antrian.data[i];}
	}
	else printf("data kosong!\n");	}
	
int Banyak_data(){
int jum=0;
	if (IsEmpty){
	for (int i=antrian.head;i<=antrian.tail;i++){
	printf("%d",antrian.data[1]);
	jum=jum+antrian.data[i];}
	}
	else printf("data kosong!\n");	}
	
int Jumlah_data(){
}

int main(){
int pil;s
int data;
Create();
}

do (){
		system("CLS");
		printf("Menu ANTRIAN\n");
		printf("1. Enqueue\n");
		printf("2. Dequeue\n");
		printf("3. Tampil\n");
		printf("4. Clear\n");
		printf("5. Banyak Data");
		printf("6. Jumlah Data\n");
		printf("7. Rata-Rata");
		printf("8. Exit\n");
		printf("Pilihan = ");scanf("%d",&pil); switch(pil){
}while		(case 1: printf("Data =");scanf("%d",data); Enqueue(data);break;
			case 2: printf("Elemen yang keluar :%d",Dequeue());break;
			case 3: Tampil ();break;
			case 4: Clear();break);
				case 5: Banyak Data();break);
					case 6: Jumlah data();break);
						case 7: Rata-rata();break);
			
getch ();
	} 
while (pil!=5);}
		

