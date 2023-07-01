#include "Vehicle.h"
int Vehicle::Count = 0;
int Vehicle::FreeSpce = 3;
int Vehicle::Two = 0;
int Vehicle::Three = 0;
int Vehicle::Four = 0;
Vehicle::Vehicle()
{
	PlateNo = 0;
	hours = 1;
	Amount = 1;
	Count++;
	FreeSpce--;
	Two++;
	Three++;
	Four++;
}
Vehicle::Vehicle(int am, int cn, int tw, int thw, int fw, int fs, int pn, int h)
{
	Amount = am;
	Count++;
	Two++;
	Three++;
	Four++;
	FreeSpce--;
	PlateNo = pn;
	hours = h;
}
void Vehicle::setAmount(int am)
{
	Amount = am;
}
void Vehicle::setCount(int cn)
{
	Count = cn;
}
void Vehicle::setT_W(int tw)
{
	Two = tw;
}
void Vehicle::setTh_W(int thw)
{
	Three = thw;
}
void Vehicle::setF_W(int fw)
{
	Four = fw;
}
int Vehicle::getAmount()
{
	return Amount;
}
void  Vehicle::setPlateNo(int pn)
{
	PlateNo = pn;
}
void  Vehicle::setHours(int h)
{
	hours = h;
}
int Vehicle::getCount()
{
	return Count;
}
void Vehicle::setFreeSpace(int fs)
{
	FreeSpce = fs;
}
int Vehicle::getFreeSpace()
{
	return FreeSpce;
}
int Vehicle::getT_ww()
{
	return Two;
}
int Vehicle::getTh_W()
{
	return Three;
}
int Vehicle::getF_w()
{
	return Four;
}
int  Vehicle::getHours()
{
	return hours;
}
int  Vehicle::getPlateNo()
{
	return PlateNo;
}

void  Vehicle::display()
{

}
void Vehicle::display2()
{

}
Vehicle::~Vehicle()
{
}
