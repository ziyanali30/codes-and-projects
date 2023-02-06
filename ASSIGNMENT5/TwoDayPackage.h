#pragma once
#include "package.h"
#include "package.cpp"
class TwoDayPackage : public package
{
private:
    double Flat_Fee;

public:
    TwoDayPackage();
    TwoDayPackage(char *SenderName, char *SenderAddress, char *SenderCity, char *SenderState, int senderZipcode, double Weight_In_Ounces,
                  double Price_Per_Ounce, char *Reciever_Name, char *Receiver_Address, char *Reciever_City, char *Reciever_State,
                  int Reciever_Zipcode, double FlatFee);
    TwoDayPackage(const TwoDayPackage &obj);
    double Calculate() const;
    void Display();
    void operator=(const TwoDayPackage &obj);
    void setFlat_Fee(double fee);
    double getFlat_Fee() const;
    friend istream &operator>>(istream &in, TwoDayPackage &obj);
    friend ostream &operator<<(ostream &os, const TwoDayPackage &obj);
    ~TwoDayPackage();
};