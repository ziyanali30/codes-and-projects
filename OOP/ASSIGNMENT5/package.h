#pragma once
#include "Mystring.h"
#include "Mystring.cpp"
// TODO: Overload Extraction and insertion operators;
class package
{
protected:
    mystr sender_Name;
    mystr sender_Address;
    mystr sender_State;
    mystr sender_city;
    int sender_zipcode;
    // *INFORMATION FOR RECEIVER
    mystr reciever_name;
    mystr reciever_Address;
    mystr reciever_state;
    mystr reciever_city;
    int reciever_zipcode;
    // *Other Variables
    double Weight_In_Ouces;
    double price_1_ounce;

public:
    package();
    package(char *, char *, char *, char *, int, double, double, char *, char *, char *, char *, int);
    package(const package &obj);
    void setSender_Name(char *);
    void setSender_Address(char *);
    void setSender_City(char *);
    void setSender_state(char *);
    void setSender_Zipcode(int);
    // *Receiver setter;
    void setReciever_Name(char *);
    void setReciever_Address(char *);
    void setReciever_City(char *);
    void setReciever_State(char *);
    void setReciever_Zipcode(int);
    //* Other Setters;
    void setWeight(double);
    void setPricePerOunce(double);
    //* Getters for Sender
    char *getSender_Name() const;
    char *getSender_Address() const;
    char *getSender_City() const;
    char *getSender_State() const;
    int getSender_Zipcode() const;
    // *Getter for Reciever;
    char *getReciever_Name() const;
    char *getReciever_Address() const;
    char *getReciever_City() const;
    char *getReciever_State() const;
    int getReciever_Zipcode() const;
    //*Other getters;
    double getWeight() const;
    double getPrice_Per_Ounce() const;
    //* Virtual Function
    virtual double Calculate() const = 0;
    friend istream &operator>>(istream &in, const package &obj);
};