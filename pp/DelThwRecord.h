#pragma once
#include <iostream>
using namespace std;
#include "ThwSearchRecord.h"
class DelThwRecord : public ThwSearchRecod
{
public:
	DelThwRecord();
	DelThwRecord(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h);
	void DelthwR();
	~DelThwRecord();
};
