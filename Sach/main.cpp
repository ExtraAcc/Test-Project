/*
g++ -std=c++11 main.cpp
*/
#include <iostream>
#include <string>
using namespace std;
#include "Sach.h"
#include "SachTinHoc.h"
#include "SachKinhTe.h"
#define MAX 6
#include <fstream>
int main(int argc, char const *argv[])
{
	fstream ktout("SachKinhTe.txt",ios::out);
	fstream thout("SachTinHoc.txt",ios::out);
	//version THONG THAI (DUNG)
	Sach *book[MAX];
	for (int i = 0; i < MAX; ++i)
	{
		if(i % 2 != 0)
		{
			cout<<"Sach Kinh Te "<<i<<endl;
			SachKinhTe *a = new SachKinhTe();
			cin>>*a;
			book[i] = a;
			ktout<<*a<<endl;
		}
		else
		{
			cout<<"Sach Tinh Hoc "<<i<<endl;
			SachTinHoc *a = new SachTinHoc();
			cin>>*a;
			book[i] = a;
			thout<<*a<<endl;
		}
	}
	ktout.close();
	thout.close();
	return 0;
}
