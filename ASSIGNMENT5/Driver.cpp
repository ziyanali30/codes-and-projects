#include "TwoDayPackage.h"
#include "TwoDayPackage.cpp"
#include "OverNightPackage.h"
#include "OverNightPackage.cpp"
#include <stdlib.h>
using namespace std;
int main()
{
    package *ptr[2];
    ptr[0] = new TwoDayPackage("Ziyan Ali", "Example Address 1", "Lahore", "Punjab", 54000, 15, 2, "Ahmed Bilal",
                               "I8 house 345", "Islamabad", "Capital", 5467, 200);
    ptr[1] = new OverNightPackage("Ali amjad", "Example Sender", "Faisalabad", "Punjab", 5678, 250, 3, "Haider Shafiq", "Example street", "Lahore", "Punjab", 54000, 3);
    int total_cost = 0, totalcust = 2;
    int option;
    char user;
    do
    {
        cout << "HELLO" << endl;
        cout << "Enter Desired option \nPress 1 for all sender Details \n Press 2 for all Receiver Details\n Press 3 to Print Whole labels\n Press 4 to get total cost\n Currently there are 2 Customers in the system Press 5 to search single records \n press The corresponding Number to print the whole label for them = ";
        cin >> option;
        system("CLS");
        if (option == 1)
        {
            for (int i = 0; i < 2; i++)
            {
                cout << "Details of Customer no " << i + 1 << endl;
                cout << "Sender Data \n";
                cout << "Sender Name : " << ptr[i]->getSender_Name() << endl;
                cout << "Sender Address: " << ptr[i]->getSender_Address() << endl;
                cout << "Sender City : " << ptr[i]->getSender_City() << endl;
                cout << "Sender State: " << ptr[i]->getSender_State() << endl;
                cout << "Sender ZipCode: " << ptr[i]->getSender_Zipcode() << endl;
            }
        }
        else if (option == 2)
        {
            for (int i = 0; i < 2; i++)
            {
                cout << "Details of Customer no " << i + 1 << endl;
                cout << "\nReceiver Data \n";
                cout << "Receiver Name : " << ptr[i]->getReciever_Name() << endl;
                cout << "Receiver Address: " << ptr[i]->getReciever_Address() << endl;
                cout << "Receiver City: " << ptr[i]->getReciever_City() << endl;
                cout << "Receiver State:" << ptr[i]->getReciever_State() << endl;
                cout << "Receiver ZipCode: " << ptr[i]->getReciever_Zipcode() << endl;
            }
        }
        if (option == 3)
        {
            for (int i = 0; i < 2; i++)
            {
                cout << "Details of Package no " << i + 1 << endl;
                cout << "Sender Data \n";
                cout << "Sender Name : " << ptr[i]->getSender_Name() << endl;
                cout << "Sender Address: " << ptr[i]->getSender_Address() << endl;
                cout << "Sender City : " << ptr[i]->getSender_City() << endl;
                cout << "Sender State: " << ptr[i]->getSender_State() << endl;
                cout << "Sender ZipCode: " << ptr[i]->getSender_Zipcode() << endl;
                cout << "\nReceiver Data \n";
                cout << "Receiver Name : " << ptr[i]->getReciever_Name() << endl;
                cout << "Receiver Address: " << ptr[i]->getReciever_Address() << endl;
                cout << "Receiver City: " << ptr[i]->getReciever_City() << endl;
                cout << "Receiver State:" << ptr[i]->getReciever_State() << endl;
                cout << "Receiver ZipCode: " << ptr[i]->getReciever_Zipcode() << endl;
                cout << "\nPackage Details\n";
                cout << "Weight of the package is : " << ptr[i]->getWeight() << endl;
                cout << "Price Per Ounce for the package is : " << ptr[i]->getPrice_Per_Ounce() << endl;
                cout << "Total cost for the Package is: " << ptr[i]->Calculate() << endl
                     << endl;
                ;
            }
        }
        if (option == 4)
        {
            for (int i = 0; i < 2; i++)
            {
                total_cost = total_cost + ptr[i]->Calculate();
            }
            cout << "Total Cost Accumulated is " << total_cost << endl;
        }
        if (option == 5)
        {
            cout << "Enter the Customer Number " << endl;
            int i;
            cin >> i;
            if (i < totalcust && i > 0)
            {
                cout << "Sender Data \n";
                cout << "Sender Name : " << ptr[i]->getSender_Name() << endl;
                cout << "Sender Address: " << ptr[i]->getSender_Address() << endl;
                cout << "Sender City : " << ptr[i]->getSender_City() << endl;
                cout << "Sender State: " << ptr[i]->getSender_State() << endl;
                cout << "Sender ZipCode: " << ptr[i]->getSender_Zipcode() << endl;
                cout << "\nReceiver Data \n";
                cout << "Receiver Name : " << ptr[i]->getReciever_Name() << endl;
                cout << "Receiver Address: " << ptr[i]->getReciever_Address() << endl;
                cout << "Receiver City: " << ptr[i]->getReciever_City() << endl;
                cout << "Receiver State:" << ptr[i]->getReciever_State() << endl;
                cout << "Receiver ZipCode: " << ptr[i]->getReciever_Zipcode() << endl;
                cout << "\nPackage Details\n";
                cout << "Weight of the package is : " << ptr[i]->getWeight() << endl;
                cout << "Price Per Ounce for the package is : " << ptr[i]->getPrice_Per_Ounce() << endl;
                cout << "Total cost for the Package is: " << ptr[i]->Calculate() << endl
                     << endl;
                ;
            }
            else
            {
                cout << "Please enter the correct number of customer" << endl;
            }
        }
        cout << "Do you want to select more options ? Press n to terminate";
        cin >> user;
    } while (user != 'n');
}