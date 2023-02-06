#pragma once
#include<iostream>
#include"Vehicle.h"
using namespace std;
class ThreeWheeler :virtual public Vehicle
{


public:
	ThreeWheeler();
	ThreeWheeler(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h);
	void Th_w();

	void display();
	void display2();
	~ThreeWheeler();
};

