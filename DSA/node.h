#include <iostream>
using namespace std;
template <class T>
class node
{
    T data;
    node *next;

public:
    node()
    {
        data = NULL;
        next = NULL;
    }
    node(T dummy)
    {
        this->data = dummy;
        this->next = NULL;
    }
    void setdata(T data)
    {
        this->data = data;
    }
    T getdata()
    {
        return data;
    }
    void setnext(node *next)
    {
        this->next = next;
    }
    node *getnext()
    {
        return this->next;
    }
};