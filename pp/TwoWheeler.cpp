#include "TwoWheeler.h"

// int Vehicle::Count = 0;
// int Vehicle::Two = 0;
TwoWheeler::TwoWheeler() : Vehicle()
{
}
TwoWheeler::TwoWheeler(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h) : Vehicle(am, cn, tw, thw, fw, fs, pn, h)
{
}
void TwoWheeler::T_wh()
{
	cout << " Enter Plate no :";
	cin >> PlateNo;
	cout << " Enter No of Hours :";
	cin >> hours;
	char again = 'y';
	while (again == 'y')
	{

		if (FreeSpce < 3)
		{
			Amount = 50 * hours;
			cout << " A new TwoWheeler has parked <<>>" << endl;
			// cout << "Total numbers of vehicles " << Count << endl;
		}
		else if (FreeSpce < 0)
		{
			cout << " Parking is full!!!!!";
			break;
		}
		cout << " You want to park more vehicles ";
		cin >> again;
	}
}
void TwoWheeler::display2()
{
	cout << " Plate No :" << PlateNo << endl;
	cout << " Hours :" << hours << endl;
	cout << " Amount you paid :" << Amount << endl;
	ofstream fout;
	fout.open("tw.txt", ios::app | ios::binary);
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
void TwoWheeler::display()
{
	cout << "Total numbers of vehicles :" << Vehicle::Count << endl;
	cout << " Free Spaces left :" << FreeSpce << endl;
	cout << " Amount Collected :" << Amount << endl;
}
TwoWheeler::~TwoWheeler()
{
}
