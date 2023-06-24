#include "Customer.h"

Customer::Customer()
{
	ID = 0;
}
Customer::Customer(int id, string name, string add, string email)
{
	ID = id;
	Name = name;
	Address = add;
	Email = email;
}
// void Customer::deepCopy(char*&dest, const char*src)
//{
//	int len = strlen(src);
//	dest = new char[len + 1];
//	for (int i = 0; i < len; i++)
//	{
//		dest[i] = src[i];
//	}
//	dest[len] = '\0';
// }
void Customer::setID(int id)
{
	ID = id;
}
void Customer::setName(string name)
{
	Name = name;
}
void Customer::setAddress(string add)
{
	Address = add;
}
void Customer::setEmail(string email)
{
	Email = email;
}
int Customer::getID()
{
	return ID;
}
string Customer::getName()
{
	return Name;
}
string Customer::getAddress()
{
	return Address;
}
string Customer::getEmail()
{
	return Email;
}
void Customer::AddCustomer()
{
	cout << " Enter ID: ";
	cin >> ID;
	cin.ignore();
	cout << " Enter Name: ";
	getline(cin, Name);
	cout << " Enter Address: ";
	getline(cin, Address);
	cout << " Enter Email :";
	cin >> Email;
	cout << endl;
	cout << " Customer Added Successfully !!!" << endl;
}
void Customer::Display()
{
	cout << " ID :" << ID << endl;
	cout << " Name: " << Name << endl;
	cout << " Address: " << Address << endl;
	cout << " Email: " << Email << endl;
}
void Customer::storeCustomerData()
{
	ofstream fout;
	fout.open("Customer.txt", ios::app | ios::binary);
	if (!fout)
	{
		cout << " Error file not open !!! " << endl;
	}
	else
	{
		fout << ID << endl;
		fout << Name << endl;
		fout << Address << endl;
		fout << Email << endl;
		fout.close();
	}
}

Customer::~Customer()
{ /*
  if (Name != nullptr)
  delete[]Name;
  if (Address != nullptr)
  delete[]Address;
  if (Email != nullptr)
  delete[]Email;*/
}
