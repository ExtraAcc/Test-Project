#include <iostream>
using namespace std;
void nhap(int array[], int &n);
int min( int array[],const int &n);
void xuat( int array[],const int &n);
int main(){
	int array[100];
	int n;
	nhap(array, n);
	min(array, n);
	xuat(array, n);
	return 0;
}
void nhap(int array[], int &n){
	cout<<"Nhap so n: ";
	cin>>n; 
	for (int i=0; i<n; i++){
		int value;
		do
		{
			cout<<"Nhap phan tu thu "<<i+1<<": ";
			cin>>value;
		}while (value<0);
		array[i]=value;
	}
}
int min(int array[],const int &n){
	int minx=array[0];
	for (int i=1; i<n; i++){
		if(array[i]<minx)
			minx=array[i];
	}
	for (int i=0; i<n; i++){
		if (array[i]==minx){
			return i;
			break;
		}
	}
}
void xuat(int array[],const int &n){
	cout<<"Vi tri: "<<min(array, n)+1<<endl;
}