#include<iostream>
#include<string>
#include"ArrayList.hpp"
using namespace std;


int main()
{
	ArrayList list;

	int choice;
	int userNum;
	int position;
	char tryAgain = 'y';

	while (tryAgain == 'Y' || tryAgain == 'y')
	{
		cout << "list operations using array list" << endl;
		cout << "1. Insert" << endl;
		cout << "2. Remove" << endl;
		cout << "3. Clear" << endl;
		cout << "4. Check Empty" << endl;
		cout << "5. Get Length" << endl;
		cout << "6. Get an Entry at position" << endl;
		cout << "7. Set an Entry at position" << endl;
		cout << "8. Display List" << endl;

		cout << "Enter a choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Insert an integer at a specified position" << endl;
			cout << "What is the integer? ";
			cin >> userNum;
			cout << "In what position shall we place this entry? ";
			cin >> position;

			if (list.Insert(position, userNum))
			{
				cout << "inserted " << list.GetEntry(position) << " at " << position << endl;
			}
			else
			{
				cout << "cannot insert " << userNum << " at " << position << endl;
			}
			break;

		default:
			break;
		}

		cout << endl << "Try Again? (y/n) ";
		cin >> tryAgain;
	}

	return 0;
}