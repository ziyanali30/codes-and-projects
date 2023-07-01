#include "FwRecords.h"


FwRecords::FwRecords()
{
}
FwRecords::FwRecords(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h) :FourWheeler(am, cn, tw, thw, fw, fs, pn, h)
{

}
void FwRecords::display()
{
	ifstream fin;
	fin.open("fw.txt", ios::in);
	if (!fin)
	{
		cout << " Record is Null: ";
	}
	else
	{
		fin >> PlateNo;
		fin >> hours;
		fin >> Amount;
		while (!fin.eof())
		{
			fin >> PlateNo;
			cout << " Plate No :" << PlateNo << endl;
			fin >> hours;
			cout << " Hours: " << hours << endl;
			fin >> Amount;
			cout << " Amount :" << Amount << endl;
		}
		fin.close();
	}
}

FwRecords::~FwRecords()
{
}
