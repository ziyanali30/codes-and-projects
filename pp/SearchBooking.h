#pragma once
#include<iostream>
#include"Customer.h"
#include"ParkingSlot.h"
#include<string>
#include<fstream>
using namespace std;
class SearchBooking : public ParkingSlot
{
public:
	SearchBooking();
	SearchBooking(int id, string name, string add, string email, int e_day, int e_month, int e_year, int E_day, int E_month, int E_year);
	int searchBooking();
	~SearchBooking();
};