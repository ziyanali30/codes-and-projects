#include <iostream>
#include "book.h"
using namespace std;
int main()
{
    book b;
    int user;
    char use;
    b.addbook("Harry potter", "ziyan ali", "fiction", 2001);
    b.addbook("C++ Programming", "DS Malik", "Programming", 2000);

    while (use != 'n' || use != 'N')
    {
        cout << "Welcome to Library Management System \n\n";
        cout << "To add a book press 1 \n";
        cout << "To remove a book press 2\n";
        cout << "To reserve a book press 3 \n";
        cout << "To Search a book press 4 \n";
        cout << "To see all the reserved books press 5 \n";
        cout << "Display All Books \n";
        cin >> user;
        if (user == 1)
        {
            cin.ignore();
            string bookname;
            string authorname;
            string category;
            int releaseyear;
            cout << "Enter the book name: ";
            getline(cin, bookname);
            cout << "Enter the author name : ";
            getline(cin, authorname);
            cout << "Enter category of the book : ";
            getline(cin, category);
            cout << "Enter the release year for the book : ";
            cin >> releaseyear;
            b.addbook(bookname, authorname, category, releaseyear);
        }
        else if (user == 2)
        {
            string bookname;
            cout << "Enter the name of the book you want to delete : ";
            cin >> bookname;
            b.deletebook(bookname);
        }
        else if (user == 3)
        {
            string bookname;
            cout << "Enter the name of the book you want to reserve : ";
            cin >> bookname;
            if (b.reservebook(bookname))
            {
                cout << "Book was successfully reserved " << endl;
            }
            else
            {
                cout << "Book was not reserved " << endl;
            }
        }
        else if (user == 4)
        {
            string bookname;
            cout << "Enter the name of the book you want to search : ";
            cin >> bookname;
            if (b.searchBook(bookname))
            {
                cout << "Book is in the library" << endl;
            }
            else
            {
                cout << "Book is not available in the library list" << endl;
            }
        }
        else if (user == 5)
        {
            b.reservedBooks();
        }
        else if (user == 6)
        {
            b.displaybooks();
        }
        cout << "Do you want to perform more actions press n to end ";
        cin >> use;
    }
}