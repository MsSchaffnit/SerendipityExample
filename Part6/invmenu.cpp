#include <iostream>
using namespace std;

int main()
{
	int choice = 0;	// To hold the user's choice

	// Display the menu until the user selects item 5
	while (choice != 5)
	{
		cout << "Serendipity Booksellers\n";
		cout << "  Inventory Database\n\n";

		cout << "1.Look Up a Book\n";
		cout << "2.Add a Book\n";
		cout << "3.Edit a Book's Record\n";
		cout << "4.Delete a Book\n";
		cout << "5.Return to the Main Menu\n\n";

		// Get the choice as input from the user
		cout << "Enter Your Choice: ";
		cin >> choice;

		// Validate the user's input
		while (choice < 1 || choice > 5)
		{
			cout << "\nPlease enter a number in the range 1 - 5.\n";

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
			}
		}

		cout << endl << endl;
	}

	return 0;
}