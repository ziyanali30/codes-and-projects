#pragma once
#include<iostream>
#include"Vehicle.h"
using namespace std;

class FourWheeler :virtual public Vehicle
{
public:
	FourWheeler();
	FourWheeler(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h);
	void F_wheler();
	void display();
	void display2();
	~FourWheeler();

};

