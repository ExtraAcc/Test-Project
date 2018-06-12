#ifndef SACH_H
#define SACH_H
#include <string>
#include <iostream>
using namespace std;
class Sach
{
protected:
	string name;
	int namxb;
	float heso;
	void printtt()const
	{
		cout<<"Ten: "<<this->name<<endl;
		cout<<"Nam XB: "<<this-> namxb<<endl;
		cout<<"He so: "<< this-> heso<<endl;
	}
public:
	Sach():name(""),namxb(0),heso(0.0){}
	Sach(string tensach, int nxb, float hs)
	: name(tensach),namxb(nxb),heso(hs){}

	//setters
	void setName(string tensach)
	{
		this -> name = tensach;
	}
	void setNamXB(int nxb)
	{
		this -> namxb = nxb;
	}
	void setHeSo(float hs)
	{
		this-> heso=hs;
	}
	//getters
	string getName()const
	{
		return this -> name;
	}
	int getNamXB()const
	{
		return this -> namxb;
	}
	float getHeSo()const
	{
		return this -> heso;
	}
	virtual float tinhGiaSach()const =0;

	virtual void print()const=0;

	~Sach()
	{

	}
	
};

#endif
