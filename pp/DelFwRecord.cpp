#include "DelFwRecord.h"


DelFwRecord::DelFwRecord()
{
}
DelFwRecord::DelFwRecord(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h) :FwSearchRecord(am, cn, tw, thw, fw, fs, pn, h)
{

}
void DelFwRecord::DeltDFwR()
{
	int plano = FwSearchR();
	char choice;
	cout << " Are You sure to delete this  record :";
	cin >> choice;
	if (choice == 'y')
	{

		ofstream tempFile;
		ifstream fin;
		tempFile.open("tempFile.txt", ios::out);
		fin.open("fw.txt", ios::in);
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
		remove("fw.txt");
		rename("tempFile.txt", "fw.txt");
	}
	else
	{
		cout << " Record not found!!!!! " << endl;
	}
}

DelFwRecord::~DelFwRecord()
{
}
