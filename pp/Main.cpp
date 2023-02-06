#include "File.h"
int main()
{
	system("color 3");
	int i = 0, j = 0;
	bool flag = true;
	char email[100] = "a";
	char password[100] = "123";
	char Email[100];
	char Password[100];
	cout << "EMAIL :: ";
	cin.getline(Email, 100);
	cout << endl;
	cout << "PASSWORD :: ";
	cin.getline(Password, 100);
	cout << endl;
	while (Email[i] != '\0' && Password[j] != '\0')
	{
		if (Email[i] == email[i] && Password[j] == password[j])
		{
			flag = true;
		}
		else
		{
			flag = false;
			cout << " Login unsuccessfull!!" << endl;
			break;
		}
		char again = 'Y';
		while (again == 'y' || again == 'Y')
		{
			system("cls");
			cout << "**********************************************************************" << endl;
			cout << "*                                                                    *" << endl;
			cout << "*                                                                    *" << endl;
			cout << "*                       WECLOME TO PARKING SYSTEM                    *" << endl;
			cout << "*                                                                    *" << endl;
			cout << "*                                                                    *" << endl;
			cout << "**********************************************************************" << endl;
			cout << "                                     Menu                                  " << endl;
			cout << " Press 1 To Add customer " << endl;
			cout << " Press 2 Add Two Wheeler " << endl;
			cout << " Press 3 Add Three Wheeler " << endl;
			cout << " Press 4 Add Four Wheeler " << endl;
			cout << " Press 5 to Show  Record " << endl;
			cout << " Press 6 Book Slot  " << endl;
			cout << " Press 7 Search Record  " << endl;
			cout << " Press 8 to Delete Record " << endl;
			cout << " Press 9 to View Two Wheeler Records  " << endl;
			cout << " Press 10 to View Three Wheeler Records  " << endl;
			cout << " Press 11 to View Four Wheeler Records  " << endl;
			cout << " Press 12 to Search Two Wheeler Records  " << endl;
			cout << " Press 13 to Search Three Wheeler Records  " << endl;
			cout << " Press 14 to Search Four Wheeler Records  " << endl;
			cout << " Press 15 to Delete Two Wheeler Records  " << endl;
			cout << " Press 16 to Delete Three Wheeler Records  " << endl;
			cout << " Press 17 to Delete Four Wheeler Records  " << endl;
			cout << " Press 18 to Show booking  Records  " << endl;
			cout << " Press 19 to Search Records " << endl;
			cout << " Press 20 to Delete Records " << endl;
			cout << endl;
			int choice;

			cout << " Enter your choice :";
			cin >> choice;

			switch (choice)
			{
			case 1:
			{
				system("cls");
				Customer cus;
				cus.AddCustomer();
				cus.Display();
				cus.storeCustomerData();
				break;
			}
			case 2:

				system("cls");
				{
					TwoWheeler tw;
					tw.T_wh();
					tw.display2();
					tw.display();
					break;
				}

			case 3:
			{
				system("cls");
				ThreeWheeler th_w;
				th_w.Th_w();
				th_w.display2();
				th_w.display();
				break;
			}
			case 4:
			{
				system("cls");
				FourWheeler F_w;
				F_w.F_wheler();
				F_w.display2();
				F_w.display();
				break;
			}

			case 5:
			{
				system("cls");
				ShowRecod sh;
				sh.ShowRecord();
				// sh.Display();
				break;
			}
			case 6:
			{
				system("cls");
				ParkingSlot sl;
				sl.Input();
				sl.Book();
				sl.displayDuration();
				break;
			}
			case 7:
			{
				system("cls");
				SearchRecord sr;
				sr.searchRecord();
				break;
			}

			case 8:
			{
				system("cls");
				DeleteRecord dl;
				dl.deleteRecord();
				break;
			}
			case 9:
			{
				system("cls");
				Vehicle *ptr;
				TwRecords twr;
				ptr = &twr;
				ptr->display();
				break;
			}
			case 10:
			{
				system("cls");
				Vehicle *ptr;
				ThWRecord thwr;
				ptr = &thwr;
				ptr->display();
				break;
			}
			case 11:
			{
				system("cls");
				Vehicle *ptr;
				FwRecords fw;
				ptr = &fw;
				ptr->display();
				break;
			}
			case 12:
			{
				system("cls");
				TwSearchRecord twsr;
				twsr.TwSearchR();
				break;
			}
			case 13:
			{
				system("cls");
				ThwSearchRecod thwsr;
				thwsr.ThWSearchR();
				break;
			}
			case 14:
			{
				system("cls");
				FwSearchRecord fwsr;
				fwsr.FwSearchR();
				break;
			}
			case 15:
			{
				system("cls");
				DelTwRecord dtwr;
				dtwr.DeltwR();
				break;
			}
			case 16:
			{
				system("cls");
				DelThwRecord dthwr;
				dthwr.DelthwR();
				break;
			}
			case 17:
			{
				system("cls");
				DelFwRecord dfwr;
				dfwr.DeltDFwR();
				break;
			}
			case 18:
			{
				system("cls");
				DetailBooking db;
				db.Showbooking();
				break;
			}
			case 19:
			{
				system("cls");
				SearchBooking sb;
				sb.searchBooking();
				break;
			}
			case 20:
			{
				system("cls");
				DeleteBooking db;
				db.deleteBooking();
				break;
			}
			default:
				cout << " Invalid option :" << endl;
			}

			cout << " You Want To Select more options(y<>n) :";
			cin >> again;
		}
		i++;
		j++;
	}
	//	system("pause");
	return 0;
}
