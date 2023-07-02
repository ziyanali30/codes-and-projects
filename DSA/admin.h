#include "usernode.h"
#include <string>
class admin
{
private:
    usernode *head;

public:
    admin()
    {
        head = NULL;
    }
    void addadmin()
    {
        int id;
        string username, pass;
        cout << "Enter the id for the new admin \n";
        cin >> id;
        cin.ignore();
        cout << "Enter the username for the new admin \n";
        getline(cin, username);
        cout << "Enter the password for the new admin \n";
        getline(cin, pass);
        usernode *N = new usernode(id, username, pass);
        if (head == NULL)
        {
            this->head = N;
        }
        else
        {
            usernode *temp = head;
            while (temp->getnext() != NULL)
            {
                temp = temp->getnext();
            }
            temp->setnext(N);
        }
    }
    bool Verify(string username, string pass)
    {
        if (head == NULL)
        {
            cout << "No Admins are yet registered";
            return false;
        }
        else
        {
            usernode *temp = head;
            while (temp != NULL)
            {
                if (temp->getname() == username && temp->getpass() == pass)
                {
                    return true;
                }
                temp = temp->getnext();
            }
            return false;
        }
    }
    bool removeadmin(string username)
    {
        if (head == NULL)
        {
            cout << "Admin list is empty" << endl;
            return false;
        }
        else
        {
            usernode *temp = head;
            usernode *prev = head;
            temp = temp->getnext();
            while (temp != NULL)
            {
                if (temp->getname() == username)
                {
                    prev->setnext(temp->getnext());
                    return true;
                }
                temp = temp->getnext();
                prev = prev->getnext();
            }
            return false;
        }
    }
    void display()
    {
        usernode *temp = head;
        while (temp != NULL)
        {
            temp->display();
            temp = temp->getnext();
        }
    }
};