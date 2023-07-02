#include <iostream>
using namespace std;
class usernode
{
private:
    int id;
    string name;
    string pass;
    usernode *next;

public:
    usernode()
    {
        id = 0;
        name = "\0";
        pass = "\0";
        next = NULL;
    }
    usernode(int id, string name, string pass)
    {
        this->id = id;
        this->name = name;
        this->pass = pass;
        next = NULL;
    }
    void setid(int id)
    {
        this->id = id;
    }
    void setname(string name)
    {
        this->name = name;
    }
    void setpass(string pass)
    {
        this->pass = pass;
    }
    void setnext(usernode *next)
    {
        this->next = next;
    }
    int getid() const
    {
        return id;
    }
    string getname() const
    {
        return name;
    }
    string getpass() const
    {
        return pass;
    }
    usernode *getnext()
    {
        return next;
    }
    void display()
    {
        cout << "ID : " << id << endl;
        cout << "Username : " << name << endl;
    }
};