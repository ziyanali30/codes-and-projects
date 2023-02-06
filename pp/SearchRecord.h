#pragma once
#include<iostream>
#include"Customer.h"
#include<string>
#include<fstream>
using namespace std;
class SearchRecord :public Customer
{
public:
	SearchRecord();
	SearchRecord(int id, string name, string add, string email);
	int searchRecord();
	~SearchRecord();
};

