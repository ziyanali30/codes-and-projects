#pragma once
#include "package.h"
class OverNightPackage : public package
{
private:
    double OverNightfee;

public:
    OverNightPackage();
    OverNightPackage(char *SenderName, char *SenderAddress, char *SenderCity, char *SenderState, int senderZipcode, double Weight_In_Ounces, double Price_Per_Ounce, char *Reciever_Name, char *Receiver_Address, char *Reciever_City, char *Reciever_State, int Reciever_Zipcode, double overnightfee);
    OverNightPackage(const OverNightPackage &obj);
    double Calculate() const;
    void setOverNightFee(double);
    double getOverNightFee() const;
    friend ostream &operator<<(ostream &out, const OverNightPackage &obj);
    friend istream &operator>>(istream &in, OverNightPackage &obj);
    void operator=(const OverNightPackage &obj);
    void Display();
};