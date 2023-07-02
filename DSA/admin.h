#include "usernode.h"
#include <string>

// Class definition for 'admin'
class admin
{
private:
    usernode *head;

public:
    // Constructor
    admin()
    {
        head = NULL;
    }

    // Function to add a new admin
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

        // Create a new 'usernode' object
        usernode *N = new usernode(id, username, pass);

        // Check if the 'head' is NULL (empty list)
        if (head == NULL)
        {
            this->head = N; // Make the new node the head of the list
        }
        else
        {
            usernode *temp = head;

            // Traverse the list to find the last node
            while (temp->getnext() != NULL)
            {
                temp = temp->getnext();
            }

            temp->setnext(N); // Add the new node at the end of the list
        }
    }

    // Function to verify if an admin exists with the given username and password
    bool Verify(string username, string pass)
    {
        // Check if the list is empty
        if (head == NULL)
        {
            cout << "No Admins are yet registered";
            return false;
        }
        else
        {
            usernode *temp = head;

            // Traverse the list
            while (temp != NULL)
            {
                if (temp->getname() == username && temp->getpass() == pass)
                {
                    return true; // Admin found
                }
                temp = temp->getnext();
            }
            return false; // Admin not found
        }
    }

    // Function to remove an admin with the given username
    bool removeadmin(string username)
    {
        // Check if the list is empty
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

            // Traverse the list
            while (temp != NULL)
            {
                if (temp->getname() == username)
                {
                    prev->setnext(temp->getnext()); // Remove the node from the list
                    return true;                    // Admin removed
                }
                temp = temp->getnext();
                prev = prev->getnext();
            }
            return false; // Admin not found
        }
    }

    // Function to display the list of admins
    void display()
    {
        usernode *temp = head;

        // Traverse the list and display each admin
        while (temp != NULL)
        {
            temp->display();
            temp = temp->getnext();
        }
    }
};
