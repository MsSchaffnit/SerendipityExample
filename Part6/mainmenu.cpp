#include "cashier.h"
#include "invmenu.h"
#include "bookinfo.h"
#include "reports.h"

#include <iostream>
using namespace std;

int main()
{
	int choice = 0;	// To hold the user's menu choice

	// Display the menu until the user selects item 4
	while (choice != 4)
	{
		cout << "Serendipity Booksellers\n";
		cout << "\tMain Menu\n\n";

		cout << "1.Cashier Module\n";
		cout << "2.Inventory Database Module\n";
		cout << "3.Report Module\n";
		cout << "4.Exit\n\n";

		// Get the menu choice as input from the user
		cout << "Enter Your Choice: ";
		cin >> choice;

		// Validate the user's input
		while (choice < 1 || choice > 4)
		{
			cout << "\nPlease enter a number in the range 1 - 4.\n";

			cout << "Enter Your Choice: ";
			cin >> choice;
		}

		// Display a selection message
		{
			switch (choice)
			{ 
				case 1: 
					cin.ignore();
					cashier();
					break;
				case 2: 
					invMenu();
					break;
				case 3: 
					reports();
					break;
				case 4: 
					cout << "\nYou selected item 4.\n";
					break;
			}
		}

		cout << endl << endl;
	}

	return 0;
}