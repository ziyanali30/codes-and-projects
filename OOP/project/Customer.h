#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;
class Customer
{
protected:
	int ID;
	string Name;
	string Address;
	string Email;

public:
	Customer();
	Customer(int, string, string, string);
	// void deepCopy(char*&,const char*);
	void setID(int);
	void setName(string);
	void setAddress(string);
	void setEmail(string);
	int getID();
	string getName();
	string getAddress();
	string getEmail();
	void AddCustomer();
	void Display();
	void storeCustomerData();
	void showRecord();
	~Customer();
};
