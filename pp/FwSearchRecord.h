#pragma once
#include<iostream>
#include<string>
#include"FourWheeler.h"
class FwSearchRecord :public FourWheeler
{
public:
	FwSearchRecord();
	FwSearchRecord(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h);
	int FwSearchR();
	~FwSearchRecord();
};

