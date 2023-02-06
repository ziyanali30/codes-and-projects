#include "TwRecords.h"


TwRecords::TwRecords() :TwoWheeler()
{
}
TwRecords::TwRecords(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h) : TwoWheeler(am, cn, tw, thw, fw, fs, pn, h)
{

}
void TwRecords::display()
{
	ifstream fin;
	fin.open("tw.txt", ios::in);
	if (!fin)
	{
		cout << " Record is Null :";
	}
	else
	{

		while (!fin.eof())
		{
			fin >> PlateNo;
			cout << " Plate No :" << PlateNo << endl;
			//fin.ignore();
			fin >> hours;
			cout << " Hours: " << hours << endl;
			//fin.ignore();
			fin >> Amount;
			cout << " Amount :" << Amount << endl;
		}
		fin >> PlateNo;
		//cout << "ID :" << ID << endl;
		//fin.ignore();
		fin >> hours;
		//cout << "Name: " << Name << endl;
		//fin.ignore();
		fin >> Amount;
		//cout << "Address :" << Address << endl;
		fin.close();

	}
}

TwRecords::~TwRecords()
{
}
