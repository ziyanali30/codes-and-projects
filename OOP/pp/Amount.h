#pragma once
#include<iostream>
#include"ParkingSlot.h"
#include"Customer.h"
using namespace std;

class Amount :public ParkingSlot
{
public:
	Amount();
	Amount(int, string, string, string, int, int, int, int, int, int);
	void input();
	void calduration();
	void displayAmount();
	~Amount();
};

