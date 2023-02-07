#include "ThreeWheeler.h"

// int Vehicle::Count = 0;
// int Vehicle::Three = 0;
ThreeWheeler::ThreeWheeler() : Vehicle()
{
}
ThreeWheeler::ThreeWheeler(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h) : Vehicle(am, cn, tw, thw, fw, fs, pn, h)
{
}
void ThreeWheeler::Th_w()
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
			Amount = 100 * hours;
			cout << "A new ThreeWheeler has parked Successfully!!!" << endl;

			// cout << "Total numbers of vehicles " << Count << endl;

			cout << " Amount Colloected :" << Amount << endl;
		}
		else if (FreeSpce < 0)
		{
			cout << " Parking is full!!!!!";
			break;
		}
		cout << " You want to park more three wheelers!!! ";
		cin >> again;
	}
}
void ThreeWheeler::display2()
{
	cout << " Plate No :" << PlateNo << endl;
	cout << " Hours :" << hours << endl;
	cout << " Amount you paid :" << Amount << endl;
	ofstream fout;
	fout.open("thw.txt", ios::app | ios::binary);
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
void ThreeWheeler::display()
{
	cout << "Total numbers of vehicles : " << Count << endl;
	cout << " Free Spaces left :" << FreeSpce << endl;
	cout << " Amount Collected : " << Amount << endl;
}
ThreeWheeler::~ThreeWheeler()
{
}
