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
    void displaybooks()
    {
        node *temp = head;
        while (temp != NULL)
        {
            temp->display();
        }
    }
};