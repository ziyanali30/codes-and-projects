#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"Customer.h"
using namespace std;
class ShowRecod :public Customer
{
public:
	ShowRecod();
	ShowRecod(int id, string name, string add, string email);
	void ShowRecord();
	~ShowRecod();
};

