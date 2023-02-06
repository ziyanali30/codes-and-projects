#include "SearchBooking.h"


SearchBooking::SearchBooking()
{
}

SearchBooking::SearchBooking(int id, string name, string add, string email, int e_day, int e_month, int e_year, int E_day, int E_month, int E_year) :ParkingSlot(id, name, add, email, e_day, e_month, e_year, E_day, E_month, E_year)
{

}
int SearchBooking::searchBooking()
{
	int id;
	ifstream fin;
	cout << " Enter the ID No to search :";
	cin >> id;
	fin.open("Parking.txt", ios::in);
	if (!fin)
	{
		cout << " Error file not opened " << endl;
	}
	else
	{
		fin >> ID;
		fin.ignore();
		fin >> Name;
		fin.ignore();
		fin >> Address;
		fin.ignore();
		fin >> Email;
		fin.ignore();
		fin >> e_day;
		fin >> e_month;
		fin >> e_year;
		fin >> E_day;
		fin >> E_month;
		fin >> E_year;
		while (!fin.eof())
		{

			//cout << "Email: " << Email << endl;
			if (id == ID)
			{
				cout << " ID :" << ID << endl;
				cout << " Name :" << Name << endl;
				cout << "Address :" << Address << endl;
				cout << "Email :" << Email << endl;
				cout << "Entry Date :" << e_day << endl;
				cout << "Entry Month :" << e_month << endl;
				cout << "Entry Year :" << e_year << endl;
				cout << "Exit Day :" << E_day << endl;
				cout << "Exit Month :" << E_month << endl;
				cout << "Exit Year :" << E_year << endl;
				return id;
			}
			fin >> ID;
			fin.ignore();
			fin >> Name;
			fin.ignore();
			fin >> Address;
			fin.ignore();
			fin >> Email;
			fin.ignore();
			fin >> e_day;
			fin >> e_month;
			fin >> e_year;
			fin >> E_day;
			fin >> E_month;
			fin >> E_year;
			fin.close();
		}
		if (id != ID)
		{
			cout << " Record not found!!!! " << endl;
		}
	}
}

SearchBooking::~SearchBooking()
{
}
