#include "invmenu.h"
#include <iostream>
using namespace std;

void invMenu()
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
					lookUpBook();
					break;
				case 2: 
					addBook();
					break;
				case 3: 
					editBook();
					break;
				case 4: 
					deleteBook();
					break;
				case 5: 
					cout << "\nYou selected item 5.\n";
					break;
			}
		}

		cout << endl << endl;
	}

}

//lookUpBook stub function
void lookUpBook()
{
	cout << "\nYou selected Look Up Book.\n";
}

//addBook stub function
void addBook()
{
	cout << "\nYou selected Add Book.\n";
}

//editBook stub function
void editBook()
{
	cout << "\nYou selected Edit Book.\n";
}

//deleteBook stub function
void deleteBook()
{
	cout << "\nYou selected Delete Book.\n";
}