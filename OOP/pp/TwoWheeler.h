#pragma once
#include<iostream>
#include"Vehicle.h"
using namespace std;
class TwoWheeler :virtual public Vehicle
{
public:
	TwoWheeler();
	TwoWheeler(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h);
	~TwoWheeler();
	void display();
	void display2();
	void T_wh();
};

