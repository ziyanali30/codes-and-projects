#pragma once
#include<iostream>
#include<string>
#include"TwoWheeler.h"
class TwSearchRecord :public TwoWheeler
{
public:
	TwSearchRecord();
	TwSearchRecord(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h);
	int TwSearchR();
	~TwSearchRecord();
};

