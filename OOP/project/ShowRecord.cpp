#include "ShowRecord.h"

ShowRecod::ShowRecod()
{
}
ShowRecod::ShowRecod(int id, string name, string add, string email)
{
}

void ShowRecod::ShowRecord()
{

	ifstream fin;
	fin.open("Customer.txt", ios::in);
	if (!fin)
	{
		cout << " Record is Null :";
	}
	else
	{
		while (fin >> ID)
		{
			cout << "ID :" << ID << endl;
			fin.ignore();
			getline(fin, Name);
			cout << "Name: " << Name << endl;
			getline(fin, Address);
			cout << "Address :" << Address << endl;
			fin >> Email;
			cout << "Email: " << Email << endl;
		}
		fin.close();
	}
}

ShowRecod::~ShowRecod()
{
}
