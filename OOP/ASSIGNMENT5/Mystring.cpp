#include "Mystring.h"
mystr::mystr()
{
    ptr = NULL;
}
mystr::mystr(char *ptr)
{
    setdata(ptr);
}
mystr::mystr(const mystr &obj)
{
    setdata(obj.ptr);
}
void mystr::setdata(char *p)
{
    int size = 0;
    for (int i = 0; p[i] != '\0'; i++, size++)
        ;
    ptr = new char[size + 1];
    for (int i = 0; i < size + 1; i++)
    {
        this->ptr[i] = p[i];
    }
}
char *mystr::getdata() const
{
    return ptr;
}
void mystr::display()
{
    cout << ptr;
}
mystr::~mystr()
{
    ptr = NULL;
    delete[] ptr;
}
istream &operator>>(istream &in, mystr &obj)
{
    string dummy;
    getline(in, dummy);
    int size = dummy.length();
    char *dum = new char[size + 1];
    for (int i = 0; i < size + 1; i++)
    {
        dum[i] = dummy[i];
    }
    obj.setdata(dum);
    dum = NULL;
    delete[] dum;
    return in;
}