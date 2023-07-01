#include "DeleteBooking.h"

DeleteBooking::DeleteBooking()
{
}
DeleteBooking::DeleteBooking(int id, string name, string add, string email, int e_day, int e_month, int e_year, int E_day, int E_month, int E_year) : SearchBooking(id, name, add, email, e_day, e_month, e_year, E_day, E_month, E_year)
{
}
void DeleteBooking::deleteBooking()
{
	int id = searchBooking();
	char choice;
	cout << " You want to delete record :";
	cin >> choice;
	if (choice == 'y')
	{

		ofstream tempFile;
		ifstream fin;
		tempFile.open("tempFile.txt", ios::out);
		fin.open("Parking.txt", ios::in);
		// fin >> ID;
		// fin.ignore();
		// fin >> Name;
		// fin.ignore();
		// fin >> Address;
		// fin.ignore();
		// fin >> Email;
		// fin.ignore();
		// fin >> e_day;
		// fin >> e_month;
		// fin >> e_year;
		// fin >> E_day;
		// fin >> E_month;
		// fin >> E_year;
		while (!fin.eof())
		{

			// cout << "Email: " << Email << endl;
			if (id != ID)
			{
				tempFile << ID << endl;
				tempFile << Name << endl;
				tempFile << Address << endl;
				tempFile << Email << endl;
				tempFile << e_day << endl;
				tempFile << e_month << endl;
				tempFile << e_year << endl;
				tempFile << E_day << endl;
				tempFile << E_month << endl;
				tempFile << E_year << endl;
			}
			fin >> ID;
			fin.ignore();
			getline(fin, Name);
			getline(fin, Address);
			getline(fin, Email);
			fin >> e_day;
			fin >> e_month;
			fin >> e_year;
			fin >> E_day;
			fin >> E_month;
			fin >> E_year;
		}
		fin.close();
		tempFile.close();
		remove("Parking.txt");
		rename("tempFile.txt", "Parking.txt");
	}
	else
	{
		cout << " Record not found!!!!! " << endl;
	}
}

DeleteBooking::~DeleteBooking()
{
}
