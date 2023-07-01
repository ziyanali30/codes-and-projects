#pragma once
#include<iostream>
#include"Customer.h"
#include"SearchRecord.h"
#include<string>
#include<fstream>
using namespace std;
class DeleteRecord :public SearchRecord
{
public:
	DeleteRecord();
	DeleteRecord(int id, string name, string add, string email);
	void deleteRecord();
	~DeleteRecord();
};

