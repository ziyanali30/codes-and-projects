#include "DelTwRecord.h"

DelTwRecord::DelTwRecord()
{
}
DelTwRecord::DelTwRecord(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h) : TwSearchRecord(am, cn, tw, thw, fw, fs, pn, h)
{
}
void DelTwRecord::DeltwR()
{
	int plano = TwSearchR();
	char choice;
	cout << " You want to delete record :";
	cin >> choice;
	if (choice == 'y')
	{

		ofstream tempFile;
		ifstream fin;
		tempFile.open("tempFile.txt", ios::out);
		fin.open("tw.txt", ios::in);
		fin >> PlateNo;
		fin.ignore();
		fin >> hours;
		fin.ignore();
		fin >> Amount;
		while (!fin.eof())
		{
			if (plano != PlateNo)
			{
				tempFile << PlateNo << endl;
				tempFile << hours << endl;
				tempFile << Amount << endl;
			}
			fin >> PlateNo;
			fin.ignore();
			fin >> hours;
			fin.ignore();
			fin >> Amount;
		}
		fin.close();
		tempFile.close();
		remove("tw.txt");
		rename("tempFile.txt", "tw.txt");
	}
	else
	{
		cout << " Record not found!!!!! " << endl;
	}
}

DelTwRecord::~DelTwRecord()
{
}
