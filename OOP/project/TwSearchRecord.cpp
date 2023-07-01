#include "TwSearchRecord.h"
TwSearchRecord::TwSearchRecord()
{
}
TwSearchRecord::TwSearchRecord(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h) : TwoWheeler(am, cn, tw, thw, fw, fs, pn, h)
{
}
int TwSearchRecord::TwSearchR()
{
	int plano;
	ifstream fin;
	cout << " Enter the Plate No to search :";
	cin >> plano;
	fin.open("tw.txt", ios::in);
	if (!fin)
	{
		cout << " Error file not opened......... " << endl;
	}
	else
	{
		fin >> PlateNo;
		// cout << "ID :" << ID << endl;
		fin.ignore();
		fin >> hours;
		// cout << "Name: " << Name << endl;
		fin.ignore();
		fin >> Amount;
		// cout << "Address :" << Address << endl;
		/*fin.ignore();
		fin >> Email;*/
		while (!fin.eof())
		{
			// cout << "Email: " << Email << endl;
			if (plano == PlateNo)
			{
				cout << " Plate No :" << PlateNo << endl;
				cout << " Hours :" << hours << endl;
				cout << " Amount: " << Amount << endl;
				// cout << " Email :" << Email << endl;
				return plano;
			}
			fin >> PlateNo;
			// cout << "ID :" << ID << endl;
			fin.ignore();
			fin >> hours;
			// cout << "Name: " << Name << endl;
			fin.ignore();
			fin >> Amount;
			// cout << "Address :" << Address << endl;
			/*fin.ignore();
			fin >> Email;*/
			fin.close();
		}
		if (plano != PlateNo)
		{
			cout << " Record not found: " << endl;
		}
	}
}
TwSearchRecord::~TwSearchRecord()
{
}
