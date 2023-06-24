#pragma once
#include<iostream>
#include<string>
#include"ThreeWheeler.h"
class ThWRecord :public ThreeWheeler
{
public:
	ThWRecord();
	ThWRecord(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h);
	void display();
	~ThWRecord();
};

