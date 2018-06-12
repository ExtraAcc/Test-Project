#ifndef SACHKINHTE_H
#define SACHKINHTE_H
#include <iostream>
#include <string>
#include "Sach.h"
using namespace std;
class SachKinhTe:public Sach
{
private:
	float gianhap;
	float chietkhau;
public:
	SachKinhTe():Sach(),gianhap(0.0),chietkhau(0.0){}
	SachKinhTe(string tensach, int namxb, float hs, float gn, float ck)
	:Sach(tensach,namxb,hs),gianhap(gn),chietkhau(ck){}
	//setters
	void setGiaNhap(float gn)
	{
		this -> gianhap =gn;
	}
	void setChietKhau(float ck)
	{
		this -> chietkhau = ck;
	}
	//getter
	float getGiaNhap()const
	{
		return this -> gianhap;
	}
	float getChietKhau()const
	{
		return this -> chietkhau;
	}
	virtual float tinhGiaSach()const 
	{
		return this -> gianhap * this ->heso - this -> chietkhau;
	}
	void print()const
	{
		this -> printtt();
		cout<<"Gia: "<<this -> tinhGiaSach()<<endl;
	}
	friend istream &operator >> (istream &in, SachKinhTe & sth)
	{
		cout<<"Ten: ";in>>sth.name;
		cout<<"NamXB: "; in>>sth.namxb;
		cout<<"He so: ";in>>sth.heso;
		cout<<"Gia Nhap: "; in>>sth.gianhap;
		cout<<"Chiet Khau: "; in>>sth.chietkhau;
		return in;
	}
	friend ostream &operator <<(ostream &out, const SachKinhTe &skt){
		out<<skt.name<<" ";
		out<<skt.namxb<<" ";
		out<<skt.heso<<" ";
		out<<skt.gianhap<<" ";
		return out;
	}
	~SachKinhTe()
	{

	}
	
};
#endif