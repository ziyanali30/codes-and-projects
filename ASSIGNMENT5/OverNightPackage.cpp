#include "OverNightPackage.h"
OverNightPackage::OverNightPackage()
{
    OverNightfee = 0;
}
OverNightPackage::OverNightPackage(char *SenderName, char *SenderAddress, char *SenderCity, char *SenderState, int senderZipcode, double Weight_In_Ounces, double Price_Per_Ounce, char *Reciever_Name, char *Receiver_Address, char *Reciever_City, char *Reciever_State, int Reciever_Zipcode, double OverNightFee)
    : package(SenderName, SenderAddress, SenderCity, SenderState, senderZipcode, Weight_In_Ounces, Price_Per_Ounce, Reciever_Name, Receiver_Address, Reciever_City, Reciever_State, Reciever_Zipcode)
{
    this->OverNightfee = OverNightFee;
}
OverNightPackage::OverNightPackage(const OverNightPackage &obj) : package(obj)
{
    this->OverNightfee = obj.OverNightfee;
}
double OverNightPackage::Calculate() const
{
    return getWeight() * getPrice_Per_Ounce() + (OverNightfee * getWeight());
}
void OverNightPackage::Display()
{
    cout << "Sender Name: " << getSender_Name() << endl;
    cout << "Sender Address: " << getSender_Address() << endl;
    cout << "Sender City: " << getSender_City() << endl;
    cout << "Sender State: " << getSender_State() << endl;
    cout << "Sender Zipcode: " << getSender_Zipcode() << endl;

    //* Reciever Print

    cout << "Reciever DATA" << endl;
    cout << "Recieve Name :" << getReciever_Name() << endl;
    cout << "Reciever Address : " << getReciever_Address() << endl;
    cout << "Reciever City: " << getReciever_City() << endl;
    cout << "Reciever State: " << getReciever_State() << endl;
    cout << "Reciever Zipcode: " << getReciever_Zipcode() << endl;

    //* Other Print

    cout << "Weight: " << getWeight() << endl;
    cout << "Price Per Ounce: " << getPrice_Per_Ounce() << endl;
    cout << "Additional Fee Per Ounce: " << OverNightfee << endl;
    cout << "Total Cost: " << Calculate() << endl;
}
void OverNightPackage::operator=(const OverNightPackage &obj)
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
    setOverNightFee(obj.getOverNightFee());
}
ostream &operator<<(ostream &out, const OverNightPackage &obj)
{
    out << "Sender Name: " << obj.getSender_Name() << endl;
    out << "Sender Address: " << obj.getSender_Address() << endl;
    out << "Sender City: " << obj.getSender_City() << endl;
    out << "Sender State: " << obj.getSender_State() << endl
        << endl;

    //* Reciever Data.

    out << "Reciever DATA" << endl
        << endl;
    out << "Recieve Name :" << obj.getReciever_Name() << endl;
    out << "Reciever Address : " << obj.getReciever_Address() << endl;
    out << "Reciever City: " << obj.getReciever_City() << endl;
    out << "Reciever State: " << obj.getReciever_State() << endl;
    out << "Reciever Zipcode: " << obj.getReciever_Zipcode() << endl;

    //* Other Print

    out << "Weight: " << obj.getWeight() << endl;
    out << "Price Per Ounce: " << obj.getPrice_Per_Ounce() << endl;
    out << "Additional Fee Per Ounce: " << obj.OverNightfee << endl;
    out << "Total Cost: " << obj.Calculate() << endl;
    return out;
}
void OverNightPackage::setOverNightFee(double fee)
{
    this->OverNightfee = fee;
}
double OverNightPackage::getOverNightFee() const
{
    return OverNightfee;
}
istream &operator>>(istream &in, OverNightPackage &obj)
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

    cout << "Enter the OverNightFee Per Ounce : ";
    in >> temp;
    obj.setOverNightFee(temp);
    return in;
}