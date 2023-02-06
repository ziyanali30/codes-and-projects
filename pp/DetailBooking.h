#pragma once
#include<iostream>
#include"ParkingSlot.h"
#include<string>
#include<fstream>
using namespace std;

class DetailBooking :public ParkingSlot
{
public:
	DetailBooking();
	DetailBooking(int, string, string, string, int, int, int, int, int, int);
	void Showbooking();
	~DetailBooking();
};

