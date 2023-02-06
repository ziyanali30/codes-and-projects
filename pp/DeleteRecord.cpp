#include "DeleteRecord.h"


DeleteRecord::DeleteRecord()
{
}
DeleteRecord::DeleteRecord(int id, string name, string add, string email) :SearchRecord(id, name, add, email)
{

}
void DeleteRecord::deleteRecord()
{
	int id = searchRecord();
	char choice;
	cout << " You want to delete this record :";
	cin >> choice;
	if (choice == 'y')
	{

		ofstream tempFile;
		ifstream fin;
		tempFile.open("tempFile.txt", ios::out);
		fin.open("Customer.txt", ios::in);
		fin >> ID;
		fin.ignore();
		fin >> Name;
		fin.ignore();
		fin >> Address;
		fin.ignore();
		fin >> Email;
		while (!fin.eof())
		{
			if (id != ID)
			{
				tempFile << ID << endl;
				tempFile << Name << endl;
				tempFile << Address << endl;
				tempFile << Email << endl;
			}
			fin >> ID;
			fin.ignore();
			fin >> Name;
			fin.ignore();
			fin >> Address;
			fin.ignore();
			fin >> Email;
		}
		fin.close();
		tempFile.close();
		remove("Customer.txt");
		rename("tempFile.txt", "Customer.txt");
	}
	else
	{
		cout << " Record not found!!!!! " << endl;
	}
}

DeleteRecord::~DeleteRecord()
{
}
