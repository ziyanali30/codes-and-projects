#pragma once
#include<iostream>
#include<string>
#include"FourWheeler.h"
class FwRecords :public FourWheeler
{
public:
	FwRecords();
	FwRecords(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h);
	void display();
	~FwRecords();
};

