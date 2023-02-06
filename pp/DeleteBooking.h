#pragma once
#include<iostream>
#include"SearchBooking.h"
#include<string>
#include<fstream>
using namespace std;
class DeleteBooking :public SearchBooking
{
public:
	DeleteBooking();
	DeleteBooking(int id, string name, string add, string email, int e_day, int e_month, int e_year, int E_day, int E_month, int E_year);
	void deleteBooking();
	~DeleteBooking();
};

