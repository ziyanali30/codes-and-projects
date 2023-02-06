#include "ThWRecord.h"


ThWRecord::ThWRecord() :ThreeWheeler()
{
}
ThWRecord::ThWRecord(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h) : ThreeWheeler(am, cn, tw, thw, fw, fs, pn, h)
{

}
void ThWRecord::display()
{

	ifstream fin;
	fin.open("thw.txt", ios::in);
	if (!fin)
	{
		cout << " Record is Null";
	}
	else
	{

		fin >> PlateNo;
		//cout << "ID :" << ID << endl;
		//fin.ignore();
		fin >> hours;
		//cout << "Name: " << Name << endl;
		//	fin.ignore();
		fin >> Amount;
		//cout << "Address :" << Address << endl;
		while (!fin.eof())
		{
			fin >> PlateNo;
			cout << " Plate No :" << PlateNo << endl;
			fin >> hours;
			cout << " Hours: " << hours << endl;
			//fin.ignore();
			fin >> Amount;
			cout << " Amount :" << Amount << endl;
		}

		fin.close();
	}
}

ThWRecord::~ThWRecord()
{
}
