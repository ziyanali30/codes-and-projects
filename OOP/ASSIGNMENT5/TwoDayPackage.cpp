#include "TwoDayPackage.h"
TwoDayPackage::TwoDayPackage()
{
    Flat_Fee = 0;
}
TwoDayPackage::TwoDayPackage(char *SenderName, char *SenderAddress, char *SenderCity, char *SenderState, int senderZipcode, double Weight_In_Ounces, double Price_Per_Ounce, char *Reciever_Name, char *Receiver_Address, char *Reciever_City, char *Reciever_State, int Reciever_Zipcode, double FlatFee) : package(SenderName, SenderAddress, SenderCity, SenderState, senderZipcode, Weight_In_Ounces, Price_Per_Ounce, Reciever_Name, Receiver_Address, Reciever_City, Reciever_State, Reciever_Zipcode)
{
    this->Flat_Fee = FlatFee;
}
TwoDayPackage::TwoDayPackage(const TwoDayPackage &obj) : package(obj)
{
    this->Flat_Fee = obj.Flat_Fee;
}
double TwoDayPackage::Calculate() const
{
    return getWeight() * getPrice_Per_Ounce() + Flat_Fee;
}
void TwoDayPackage::Display()
{
    cout << "Sender Name: " << getSender_Name() << endl;
    cout << "Sender Address: " << getSender_Address() << endl;
    cout << "Sender City: " << getSender_City() << endl;
    cout << "Sender State: " << getSender_State() << endl;
    cout << "Sender ZipCode: " << getSender_Zipcode() << endl;
    //* Reciever Print
    cout << "Reciever DATA" << endl;
    cout << "Receive Name :" << getReciever_Name() << endl;
    cout << "Reciever Address : " << getReciever_Address() << endl;
    cout << "Reciever City: " << getReciever_City() << endl;
    cout << "Reciever State: " << getReciever_State() << endl;
    cout << "Reciever Zipcode: " << getReciever_Zipcode() << endl;
    //* Other Print
    cout << "Weight: " << getWeight() << endl;
    cout << "Price Per Ounce: " << getPrice_Per_Ounce() << endl;
    cout << "Flat Fee: " << Flat_Fee << endl;
    cout << "Total Cost: " << Calculate() << endl;
}
ostream &operator<<(ostream &os, const TwoDayPackage &obj)
{
    os << "Sender Name: " << obj.getSender_Name() << endl;
    os << "Sender Address: " << obj.getSender_Address() << endl;
    os << "Sender City: " << obj.getSender_City() << endl;
    os << "Sender State: " << obj.getSender_State() << endl;
    os << "Sender Zipcode: " << obj.getSender_Zipcode() << endl;
    //* Reciever Print
    os << "Reciever DATA" << endl;
    os << "Receive Name :" << obj.getReciever_Name() << endl;
    os << "Reciever Address : " << obj.getReciever_Address() << endl;
    os << "Reciever City: " << obj.getReciever_City() << endl;
    os << "Reciever State: " << obj.getReciever_State() << endl;
    os << "Reciever Zipcode: " << obj.getReciever_Zipcode() << endl;
    //* Other Print
    os << "Weight: " << obj.getWeight() << endl;
    os << "Price Per Ounce: " << obj.getPrice_Per_Ounce() << endl;
    os << "Flat Fee: " << obj.Flat_Fee << endl;
    os << "Total Cost: " << obj.Calculate() << endl;
    return os;
}
void TwoDayPackage::operator=(const TwoDayPackage &obj)
{
    //* Setters for Sender
    setSender_Name(obj.getSender_Name());
    setSender_City(obj.getSender_City());
    setSender_state(obj.getSender_State());
    setSender_Zipcode(obj.getSender_Zipcode());
    setSender_Address(obj.getSender_Address());
    //*Setter for Reciever;
    setReciever_Name(obj.getReciever_Name());
    setReciever_Address(obj.getReciever_Address());
    setReciever_State(obj.getReciever_State());
    setReciever_City(obj.getReciever_City());
    setReciever_Zipcode(obj.getReciever_Zipcode());
    //*Other Setters
    setWeight(obj.getWeight());
    setPricePerOunce(obj.getPrice_Per_Ounce());
    setFlat_Fee(obj.getFlat_Fee());
}
void TwoDayPackage::setFlat_Fee(double fee)
{
    this->Flat_Fee = fee;
}
double TwoDayPackage::getFlat_Fee() const
{
    return Flat_Fee;
}
TwoDayPackage::~TwoDayPackage(){

};
istream &operator>>(istream &in, TwoDayPackage &obj)
{
    double temp;
    cout << "Enter sender name :";
    in >> obj.sender_Name;
    cout << "Enter Sender Address :";
    in >> obj.sender_Address;
    cout << "Enter Sender City:";
    in >> obj.sender_city;
    cout << "Enter Sender State:";
    in >> obj.sender_State;
    cout << "Enter Sender Zipcode";
    in >> temp;
    if (temp > 0)
    {
        obj.sender_zipcode = temp;
    }
    else
    {
        obj.sender_zipcode = 0;
    }
    //*Weight data
    cout << "Enter weight of the Package:";
    in >> temp;
    obj.setWeight(temp);
    cout << "Enter Price per Ounce: ";
    in >> temp;
    obj.setPricePerOunce(temp);

    //* Reciever DATA
    in.ignore();
    cout << "Enter Reciever Name : ";
    in >> obj.reciever_name;
    cout << "Enter Reciever Address :";
    in >> obj.reciever_Address;
    cout << "Enter Reciever City : ";
    in >> obj.reciever_city;
    cout << "Enter Reciever State : ";
    in >> obj.reciever_state;
    cout << "Enter Reciever zipcode : ";
    cin >> obj.reciever_zipcode;
    //* Fee input
    cout << "Enter the Flat_Fee : ";
    in >> temp;
    obj.setFlat_Fee(temp);
    return in;
}