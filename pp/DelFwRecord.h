#pragma once
#include<iostream>
using namespace std;
#include"FwSearchRecord.h"
class DelFwRecord :public FwSearchRecord
{
public:
	DelFwRecord();
	DelFwRecord(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h);
	void DeltDFwR();
	~DelFwRecord();
};

