#pragma once
#include <iostream>
#include <string>
using namespace std;
class mystr
{
private:
    char *ptr;

public:
    mystr();
    mystr(char *ptr);
    mystr(const mystr &obj);
    void setdata(char *ptr);
    char *getdata() const;
    void display();
    friend istream &operator>>(istream &in, mystr &obj);
    ~mystr();
};