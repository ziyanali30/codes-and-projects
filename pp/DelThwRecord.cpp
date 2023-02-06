#include "DelThwRecord.h"


DelThwRecord::DelThwRecord() :ThwSearchRecod()
{
}
DelThwRecord::DelThwRecord(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h) : ThwSearchRecod(am, cn, tw, thw, fw, fs, pn, h)
{

}
void DelThwRecord::DelthwR()
{
	int plano = ThWSearchR();
	char choice;
	cout << " You want to delete this record :";
	cin >> choice;
	if (choice == 'y')
	{

		ofstream tempFile;
		ifstream fin;
		tempFile.open("tempFile.txt", ios::out);
		fin.open("thw.txt", ios::in);
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
		remove("thw.txt");
		rename("tempFile.txt", "thw.txt");
	}
	else
	{
		cout << " Record not found!!!!! " << endl;
	}
}

DelThwRecord::~DelThwRecord()
{
}
