#include "ThwSearchRecord.h"

ThwSearchRecod::ThwSearchRecod()
{
}
ThwSearchRecod::ThwSearchRecod(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h) : ThreeWheeler(am, cn, tw, thw, fw, fs, pn, h)
{
}
int ThwSearchRecod::ThWSearchR()
{
	int plano;
	ifstream fin;
	cout << " Enter the Plate No to search :";
	cin >> plano;
	fin.open("thw.txt", ios::in);
	if (!fin)
	{
		cout << " Error file not opened......... " << endl;
	}
	else
	{

		while (!fin.eof())
		{
			fin >> PlateNo;
			fin.ignore();
			fin >> hours;
			fin.ignore();
			fin >> Amount;
			if (plano == PlateNo)
			{
				cout << " Plate No :" << PlateNo << endl;
				cout << " Hours :" << hours << endl;
				cout << " Amount: " << Amount << endl;
				return plano;
				break;
			}
			fin.close();
		}
		if (plano != PlateNo)
		{
			cout << " Record not found: " << endl;
		}
	}
}

ThwSearchRecod::~ThwSearchRecod()
{
}
