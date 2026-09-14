#include <iostream>
using namespace std;

int main()
{
	int choice = 0;	// To hold the user's choice

	// Display the menu until the user selects item 7
	while (choice != 7)
	{
		cout << "Serendipity Booksellers\n";
		cout << "\tReports\n\n";

		cout << "1.Inventory Listing\n";
		cout << "2.Inventory Wholesale Value\n";
		cout << "3.Inventory Retail Value\n";
		cout << "4.Listing by Quantity\n";
		cout << "5.Listing by Cost\n";
		cout << "6.Listing by Age\n";
		cout << "7.Return to the Main Menu\n\n";

		// Get the choice as input from the user
		cout << "Enter Your Choice: ";
		cin >> choice;

		// Validate the user's input
		while (choice < 1 || choice > 7)
		{
			cout << "\nPlease enter a number in the range 1 - 7.\n";

			cout << "Enter Your Choice: ";
			cin >> choice;
		}

		// Display a selection message
		{
			switch (choice)
			{ 
				case 1: 
					cout << "\nYou selected item 1.\n";
					break;
				case 2: 
					cout << "\nYou selected item 2.\n";
					break;
				case 3: 
					cout << "\nYou selected item 3.\n";
					break;
				case 4: 
					cout << "\nYou selected item 4.\n";
					break;
				case 5: 
					cout << "\nYou selected item 5.\n";
					break;
				case 6: 
					cout << "\nYou selected item 6.\n";
					break;
				case 7: 
					cout << "\nYou selected item 7.\n";
					break;
			}
		}

		cout << endl << endl;
	}

	return 0;
}