#include <iostream>;
using namespace std;

int main(int argc,char* argv[])
{
int matA[2][2]= {4,8,2,10}, transpose[2][2]= {4, 2, 8, 10};

cout<<"matriks A"<<endl;
for (int i=0; i<2; i++) {
	for (int j=0; j<2; j++) {
		cout<<matA[i][j]<<" ";
	}
	cout<<endl;
}
for (int i=0; i<2; i++) {
	for (int j=0; j<2; j++)
	 {
		transpose[j][i] = matA[i][j];
	}
	cout<<endl;
}
cout<<"Hasil Transpose Matriks A"<<endl;
for (int i=0; i<2; i++){
	for (int j=0; j<2; j++){
		cout<<transpose[i][j]<<" ";
	}
	cout<<endl;
}
system ("pause");
return 0;
}
