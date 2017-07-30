#include <iostream>
#include <string>
#include <vector>

using namespace std;

void main()
{
	bool running = true;
	char choice;
	vector < string > employees;

	cout << "Welcome to the Staff Directory" << endl << endl;

	while (running == true)
	{
		cout << "Enter selection: [A]dd Employee, [V]iew Directory, [R]emove Employee, [E]xit: ";
		cin >> choice;
		cin.ignore();//flushes input
		cout << endl;

		if (choice == 'A' || choice == 'a')
		{
			cout << "Please enter the name of the employee: ";
			string tempVar;
			getline(cin, tempVar); // captures first AND last name

			employees.push_back(tempVar); // fills current open space and pushes to next one
			cout << endl;
		}

		else if (choice == 'V' || choice == 'v')
		{
			cout << "The directory currently has " << employees.size() << " employee(s)." << endl << endl;
			for (int i = 0; i < employees.size(); i++)
				cout << i << ". " << employees[i] << endl;

			cout << endl;
		}

		else if (choice == 'R' || choice == 'r')
		{
			int pos;
			cout << "Enter the vector position for the employee you wish to remove: ";
			cin >> pos;
			cin.ignore();

			employees.erase(employees.begin() + pos);
			cout << endl;
			cout << "Employee has been removed" << endl << endl;
		}

		else if (choice == 'E' || choice == 'e')
			running = false;
		else
		{
			cout << "Invalid selection, please try again." << endl << endl;
		}
	}
	system("pause");
}