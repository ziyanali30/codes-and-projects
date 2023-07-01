#include "DetailBooking.h"

DetailBooking::DetailBooking()
{
}

DetailBooking::DetailBooking(int, string, string, string, int, int, int, int, int, int)
{
}
void DetailBooking::Showbooking()
{
	ifstream fin("Parking.txt");
	string stud;
	if (!fin)
	{
		cout << "File Does not Exit";
	}
	else
	{
		while (fin >> ID)
		{

			cout << " ID :" << ID << endl;
			fin.ignore();
			getline(fin, Name);
			cout << " Name: " << Name << endl;
			getline(fin, Address);
			cout << " Address :" << Address << endl;
			getline(fin, Email);
			cout << "Email: " << Email << endl;
			fin.ignore();
			fin >> e_day;
			cout << " Entry date: " << e_day << endl;
			fin >> e_month;
			cout << " Entry month: " << e_month << endl;
			fin >> e_year;
			cout << " Entry year: " << e_year << endl;
			fin >> E_day;
			cout << " Exit date: " << E_day << endl;
			fin >> E_month;
			cout << " Exit date: " << E_month << endl;
			fin >> E_year;
			cout << " Exit year: " << E_year << endl;
		}
	}
}

DetailBooking::~DetailBooking()
{
}
