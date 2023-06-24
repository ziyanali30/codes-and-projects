#include "package.h"
package::package()
{
    Weight_In_Ouces = 0;
    price_1_ounce = 0;
}
package::package(char *SenderName, char *SenderAddress, char *SenderCity, char *SenderState, int senderZipcode, double Weight_In_Ounces, double Price_Per_Ounce, char *Reciever_Name, char *Receiver_Address, char *Reciever_City, char *Reciever_State, int Reciever_Zipcode)
{
    setSender_Name(SenderName);
    setSender_Address(SenderAddress);
    setSender_City(SenderCity);
    setSender_state(SenderState);
    setSender_Zipcode(senderZipcode);

    //* Receiver Setters
    setReciever_Name(Reciever_Name);
    setReciever_Address(Receiver_Address);
    setReciever_City(Reciever_City);
    setReciever_State(Reciever_State);
    setReciever_Zipcode(Reciever_Zipcode);

    //*Other Setters

    setWeight(Weight_In_Ounces);
    setPricePerOunce(Price_Per_Ounce);
}
package::package(const package &obj)
{
    setSender_Name(obj.getSender_Name());
    setSender_Address(obj.getSender_Address());
    setSender_City(obj.getSender_City());
    setSender_state(obj.getSender_State());
    setSender_Zipcode(obj.getSender_Zipcode());

    //* Receiver Setters
    setReciever_Name(obj.getReciever_Name());
    setReciever_Address(obj.getReciever_Address());
    setReciever_City(obj.getReciever_City());
    setReciever_State(obj.getReciever_State());
    setReciever_Zipcode(obj.getReciever_Zipcode());

    //*Other Setters

    setWeight(obj.getWeight());
    setPricePerOunce(obj.getPrice_Per_Ounce());
}

// * Reciever Setters Definition

void package::setReciever_Name(char *Name)
{
    this->reciever_name.setdata(Name);
}
void package::setReciever_Address(char *add)
{
    this->reciever_Address.setdata(add);
}
void package::setReciever_City(char *city)
{
    this->reciever_city.setdata(city);
}
void package::setReciever_State(char *state)
{
    this->reciever_state.setdata(state);
}
void package::setReciever_Zipcode(int zip)
{
    this->reciever_zipcode = zip;
}

// * Sender Setter Definition

void package::setSender_Name(char *Name)
{
    this->sender_Name.setdata(Name);
}
void package::setSender_Address(char *add)
{
    this->sender_Address.setdata(add);
}
void package::setSender_City(char *city)
{
    this->sender_city.setdata(city);
}
void package::setSender_state(char *state)
{
    this->sender_State.setdata(state);
}
void package::setSender_Zipcode(int zipcode)
{
    this->sender_zipcode = zipcode;
}

//* Other Setters.

void package::setWeight(double weight)
{
    if (weight > 0)
    {
        this->Weight_In_Ouces = weight;
    }
    else
    {
        cout << "Weight Amount You entered is not valid" << endl;
        Weight_In_Ouces = 0;
    }
}
void package::setPricePerOunce(double price)
{
    if (price > 0)
    {
        this->price_1_ounce = price;
    }
    else
    {
        cout << "Price is not Valid" << endl;
        price_1_ounce = 0;
    }
}

// * Getters for Sender

char *package::getSender_Name() const
{
    return this->sender_Name.getdata();
}
char *package::getSender_Address() const
{
    return this->sender_Address.getdata();
}
char *package::getSender_City() const
{
    return this->sender_city.getdata();
}
char *package::getSender_State() const
{
    return this->sender_State.getdata();
}
int package::getSender_Zipcode() const
{
    return this->sender_zipcode;
}

//* GETTER FOR RECIEVER

char *package::getReciever_Name() const
{
    return this->reciever_name.getdata();
}
char *package::getReciever_Address() const
{
    return this->reciever_Address.getdata();
}
char *package::getReciever_City() const
{
    return this->reciever_city.getdata();
}
char *package::getReciever_State() const
{
    return this->reciever_state.getdata();
}
int package::getReciever_Zipcode() const
{
    return this->reciever_zipcode;
}

//* Other Getters

double package::getWeight() const
{
    return this->Weight_In_Ouces;
}
double package::getPrice_Per_Ounce() const
{
    return this->price_1_ounce;
}