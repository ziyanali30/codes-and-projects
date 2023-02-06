#include "DelTwRecord.h"


DelTwRecord::DelTwRecord()
{
}
DelTwRecord::DelTwRecord(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h) :TwSearchRecord(am, cn, tw, thw, fw, fs, pn, h)
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
		//cout << "ID :" << ID << endl;
		fin.ignore();
		fin >> hours;
		//cout << "Name: " << Name << endl;
		fin.ignore();
		fin >> Amount;
		//cout << "Address :" << Address << endl;
		/*fin.ignore();
		fin >> Email;*/
		while (!fin.eof())
		{

			//cout << "Email: " << Email << endl;
			if (plano != PlateNo)
			{
				tempFile << PlateNo << endl;
				tempFile << hours << endl;
				tempFile << Amount << endl;
				//tempFile << Email << endl;
			}
			fin >> PlateNo;
			//cout << "ID :" << ID << endl;
			fin.ignore();
			fin >> hours;
			//cout << "Name: " << Name << endl;
			fin.ignore();
			fin >> Amount;
			//cout << "Address :" << Address << endl;
			/*fin.ignore();
			fin >> Email;*/
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
