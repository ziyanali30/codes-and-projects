#pragma once
#include <iostream>
#include <string>
#include "ThreeWheeler.h"
class ThwSearchRecod : public ThreeWheeler
{
public:
	ThwSearchRecod();
	ThwSearchRecod(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h);
	int ThWSearchR();
	~ThwSearchRecod();
};
