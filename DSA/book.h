#include "node.h"
class book
{
private:
    node *head;

public:
    book()
    {
        head = NULL;
    }
    void addbook(string name,
                 string authorname,
                 string catgeory,
                 int data)
    {
        node *N = new node(data, authorname, name, catgeory);
        if (head == NULL)
        {
            head = N;
        }
        else
        {
            node *temp = head;
            while (temp->getnext() != NULL)
            {
                temp = temp->getnext();
            }
            temp->setnext(N);
        }
    }
    bool deletebook(string bookname)
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return false;
        }
        else
        {
            node *temp = head;
            node *prev = head;
            temp = temp->getnext();
            while (temp != NULL)
            {
                if (temp->getbookname() == bookname)
                {
                    prev->setnext(temp->getnext());
                    return true;
                }
                else
                {
                    temp = temp->getnext();
                    prev = prev->getnext();
                }
            }
            return false;
        }
    }
    bool searchBook(string book)
    {
        if (head == NULL)
        {
            return false;
        }
        else
        {
            node *temp = head;
            while (temp != NULL)
            {
                if (temp->getbookname() == book)
                {
                    return true;
                }
            }
            return false;
        }
    }
    bool reservebook(string bookname)
    {
        bool changed = false;
        string name;
        cout << "Enter the name of the person issued to : ";
        getline(cin, name);
        node *temp = head;
        while (temp != NULL)
        {
            if (temp->getbookname() == bookname && temp->getreservestatus() == false)
            {
                temp->setreservestatus(true);
                temp->setissuedto(name);
                changed = true;
            }
        }
        return changed;
    }
    void reservedBooks()
    {
        node *temp = head;
        while (temp != NULL)
        {
            if (temp->getreservestatus())
                temp->display();
            temp = temp->getnext();
        }
    }
    void displaybooks()
    {
        if (head == NULL)
        {
            cout << "There are no Books to display";
            cout << endl;
        }

        node *temp = head;
        while (temp != NULL)
        {
            temp->display();
            temp = temp->getnext();
        }
    }
    void searchByCategory()
    {
        if (head == NULL)
        {
            cout << "No Books in the List" << endl;
            return;
        }
        else
        {
            string category;
            cout << "Enter the category you want to search";
            getline(cin, category);
            node *temp = head;
            while (temp != NULL)
            {
                if (temp->getcategory() == category)
                {
                    temp->display();
                }
                temp = temp->getnext();
            }
        }
    }
};