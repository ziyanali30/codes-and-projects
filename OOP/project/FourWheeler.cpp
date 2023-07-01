#include "FourWheeler.h"
// int Vehicle::Count = 0;
// int Vehicle::Four = 0;
FourWheeler::FourWheeler()
{
}
FourWheeler::FourWheeler(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h) : Vehicle(am, cn, tw, thw, fw, fs, pn, h)
{
}
void FourWheeler::F_wheler()
{
	char again = 'y';
	cout << " Enter Plate no : ";
	cin >> PlateNo;
	cout << " Enter No of Hours :";
	cin >> hours;
	while (again == 'y')
	{

		if (FreeSpce < 3)
		{
			Amount = 200 * hours;
			cout << "A new FourWheeler has parked Successfully!!!" << endl;

			// cout << "Total numbers of vehicles " << Count << endl;
		}
		if (FreeSpce < 0)
		{
			cout << " Parking is full!!!!!";
			break;
		}
		cout << " You want to park more Four wheelers !!!";
		cin >> again;
	}
}
void FourWheeler::display2()
{
	cout << " Total numbers of vehicles :" << Count << endl;
	cout << " Free Spaces left :" << FreeSpce << endl;
	cout << " Amount Colloected :" << Amount << endl
		 << endl;
	ofstream fout;
	fout.open("fw.txt", ios::app | ios::binary);
	if (!fout)
	{
		cout << " Error File not opened !!!";
	}
	else
	{
		fout << PlateNo << endl;
		fout << hours << endl;
		fout << Amount << endl;
	}
}
void FourWheeler::display()
{
	cout << " Total numbers of vehicles :  " << Count << endl;
	cout << " Free Spaces left : " << FreeSpce << endl;
	cout << " Amount Colloected : " << Amount << endl;
}
FourWheeler::~FourWheeler()
{
}
