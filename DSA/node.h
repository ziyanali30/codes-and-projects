#include <iostream>
#include "string"
using namespace std;
class node
{
    int id = 0;
    int data;
    string author;
    string bookname;
    string category;
    bool reserved;
    string issued_to;
    node *next;

public:
    node()
    {
        id++;
        data = 0;
        next = NULL;
        author = '\0';
        bookname = '\0';
        category = '\0';
        reserved = false;
        issued_to = '\0';
    }
    node(int dummy, string auth, string title, string category, bool reserve = false, string issued = "\0")
    {
        id++;
        author = auth;
        bookname = title;
        this->category = category;
        reserved = reserve;
        issued_to = issued;
        this->data = dummy;
        this->next = NULL;
    }
    void setauthor(string auth)
    {
        this->author = auth;
    }
    void setbookname(string bookname)
    {
        this->bookname = bookname;
    }
    void setcategory(string category)
    {
        this->category = category;
    }
    void setissuedto(string issuedto)
    {
        this->issued_to = issuedto;
    }
    void publishedyear(int year)
    {
        this->data = year;
    }
    void setreservestatus(bool res)
    {
        this->reserved = res;
    }
    int getyear()
    {
        return this->data;
    }
    string getbookname()
    {
        return this->bookname;
    }
    string getcategory()
    {
        return category;
    }
    string getissuestatus()
    {
        return issued_to;
    }
    bool getreservestatus()
    {
        return reserved;
    }
    void setdata(int data)
    {
        this->data = data;
    }
    int getdata()
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
    int getid()
    {
        return id;
    }
    void display()
    {
        cout << "Book ID : " << id << endl;
        cout << "Book Title : " << bookname << endl;
        cout << "Author Name : " << author << endl;
        cout << "Category : " << category << endl;
        if (reserved)
        {
            cout << "Reserve status: Reserved";
        }
        else
        {
            cout << "Reserve status : Available " << endl;
        }
        cout << "Publish year" << data << endl;
    }
};