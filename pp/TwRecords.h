#pragma once
#include<iostream>
#include<string>
#include"TwoWheeler.h"
using namespace std;
class TwRecords :public TwoWheeler
{
public:
	TwRecords();
	TwRecords(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h);
	void display();
	~TwRecords();
};

