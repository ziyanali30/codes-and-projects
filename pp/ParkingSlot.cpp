#include "ParkingSlot.h"

ParkingSlot::ParkingSlot() : Customer()
{
	e_day = 0;
	e_month = 0;
	e_year = 0;
	E_day = 0;
	E_month = 0;
	E_year = 0;
}
ParkingSlot::ParkingSlot(int id, string name, string add, string email, int e_day, int e_month, int e_year, int E_day, int E_month, int E_year) : Customer(id, name, add, email)
{
	this->e_day = e_day;
	this->e_month = e_month;
	this->e_year = e_year;

	this->E_day = E_day;
	this->E_month = E_month;
	this->E_year = E_year;
}
void ParkingSlot::Input()
{

	Customer::AddCustomer();
	cout << " Enter Entrance date :";
	cin >> e_day;
	cout << " Enter Entrance month :";
	cin >> e_month;
	cout << " Enter Entrance Year :";
	cin >> e_year;
	cout << " Enter Exit date :";
	cin >> E_day;
	cout << " Enter Exit month :";
	cin >> E_month;
	cout << " Enter Exit year :";
	cin >> E_year;
}

void ParkingSlot::Book()
{
	ofstream fout;
	fout.open("Parking.txt", ios::app);
	if (!fout)
	{
		cout << " Error file not open !!! " << endl;
	}
	else
	{
		fout << ID << endl;
		fout << Name << endl;
		fout << Address << endl;
		fout << Email << endl;
		fout << e_day << endl;
		fout << e_month << endl;
		fout << e_year << endl;
		fout << E_day << endl;
		fout << E_month << endl;
		fout << E_year << endl;
		fout.close();
	}
}
int ParkingSlot::calDuration()
{
	int n1 = e_year * 365 + e_month + e_day;
	int n2 = E_year * 365 + E_month + E_day;
	return n2 - n1;
}
void ParkingSlot::displayDuration()
{
	Customer::Display();
	int Duration = calDuration() / 24;
	cout << " Duration :" << Duration << endl;
	int amount = calDuration() * 100;
	cout << " Total amount to be paid: " << amount << endl;
}
ParkingSlot::~ParkingSlot()
{
}
