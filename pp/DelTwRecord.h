#pragma once
#include<iostream>
#include<string>
#include"TwSearchRecord.h"
class DelTwRecord :public TwSearchRecord
{
public:
	DelTwRecord();
	DelTwRecord(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h);
	void DeltwR();
	~DelTwRecord();
};

