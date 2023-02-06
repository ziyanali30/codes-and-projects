#include "Amount.h"

Amount::Amount() :ParkingSlot()
{
}
Amount::Amount(int id, string name, string add, string email, int e_day, int e_month, int e_year, int E_day, int E_month, int E_year) : ParkingSlot(id, name, add, email, e_day, e_month, e_year, E_day, E_month, E_year)
{

}
void Amount::input()
{
	ParkingSlot::Input();

}
void Amount::calduration()
{
	ParkingSlot::calDuration();
	/*int n1 = e_year * 365 + e_month + e_day;
	int n2 = E_year * 365 + E_month + E_day;
	return n1 - n2;*/
}
void Amount::displayAmount()
{
	Customer::Display();
	int Duration = calDuration() / 24;
	//	cout << " Duration :" << Duration << endl;
	int amount = calDuration() * 100;
	cout << " Total amount to be paid " << amount << endl;
}

Amount::~Amount()
{
}
