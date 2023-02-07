#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Vehicle
{
protected:
	int Amount, PlateNo, hours;
	static int Count, FreeSpce;
	static int Two, Three, Four;

public:
	Vehicle();
	Vehicle(int, int, int, int, int, int, int, int);
	void setAmount(int);
	void setCount(int);
	void setFreeSpace(int);
	void setPlateNo(int);
	void setHours(int);
	void setT_W(int);
	void setTh_W(int);
	void setF_W(int);
	int getAmount();
	int getCount();
	int getPlateNo();
	int getHours();
	int getFreeSpace();
	int getT_ww();
	int getTh_W();
	int getF_w();
	virtual void display() = 0;
	virtual void display2() = 0;
	virtual ~Vehicle();
};
