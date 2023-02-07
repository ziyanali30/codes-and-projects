#include "SearchRecord.h"

SearchRecord::SearchRecord() : Customer()
{
}
SearchRecord::SearchRecord(int id, string name, string add, string email) : Customer(id, name, add, email)
{
}
int SearchRecord::searchRecord()
{
	int id;
	ifstream fin;
	cout << " Enter the id to search :";
	cin >> id;
	fin.open("Customer.txt", ios::in);
	if (!fin)
	{
		cout << " Error file not opened : " << endl;
	}
	else
	{

		while (!fin.eof())
		{
			fin >> ID;
			// cout << "ID :" << ID << endl;
			fin.ignore();
			getline(fin, Name);
			getline(fin, Address);
			// cout << "Address :" << Address << endl;
			getline(fin, Email);
			fin.close();
			if (id == ID)
			{
				cout << " ID :" << ID << endl;
				cout << " Name :" << Name << endl;
				cout << " Address: " << Address << endl;
				cout << " Email :" << Email << endl;
				return id;
			}
		}
		if (id != ID)
		{
			cout << " Record not found " << endl;
		}
	}
}

SearchRecord::~SearchRecord()
{
}
