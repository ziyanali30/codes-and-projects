#pragma once
#include<iostream>
#include"Customer.h"
#include<string>
#include<fstream>
using namespace std;
class ParkingSlot :public Customer
{
protected:
	int e_day, e_month, e_year;
	int E_day, E_month, E_year;
public:
	ParkingSlot();
	ParkingSlot(int, string, string, string, int, int, int, int, int, int);
	void Input();
	void Book();
	int calDuration();
	void displayDuration();
	~ParkingSlot();
};

