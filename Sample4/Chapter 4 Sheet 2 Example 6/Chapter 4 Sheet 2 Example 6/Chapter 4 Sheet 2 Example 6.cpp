#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

//********************************************************************
//*      Program Name:  Chapter 4 Sheet 2 Example 6                  *
//*      Programmer:    Gabby Clemente                               *
//*      File Location: H:\C++\Chapter 4 Sheet 2 Example 6           *
//*      Date Created:  3/13/19                                      *
//********************************************************************

int main()
{
	cout << "***********************************************************************************\n";
	cout << "*                                                                                 *\n";
	cout << "* This program calculates a person's automobile insurance bill.                   *\n";
	cout << "*                                                                                 *\n";
	cout << "***********************************************************************************\n\n";

	double accidents, accident_charge, reg_charge, age, total_bill;
	int code;

	cout << "Please enter your Code Number: ";
	cin >> code;
	cout << endl;

	cout << "Please enter Number of Accidents: ";
	cin >> accidents;
	cout << endl;

	cout << "Please enter your Age: ";
	cin >> age;
	cout << endl;


	switch (code)
	{
	case 1:

			if (age >= 21 || (age < 21 && accidents < 2))
				{
					reg_charge = 450;
					accident_charge = 100;
					total_bill = reg_charge + (accident_charge * accidents);

					cout << "Code: " << code << endl;
					cout << "Accidents: " << accidents << endl;
					cout << "Age: " << age << endl << endl;

					cout << "Total Insurance Bill: $" << fixed << showpoint << setprecision(2) << total_bill << endl;
				}

			if (age < 21 && accidents >= 2)
				{
					reg_charge = 450;
					accident_charge = 100;
					total_bill = reg_charge + 125 + (accident_charge * accidents);

					cout << "Code: " << code << endl;
					cout << "Accidents: " << accidents << endl;
					cout << "Age: " << age << endl << endl;

					cout << "Total Insurance Bill: $" << fixed << showpoint << setprecision(2) << total_bill << endl;
				}

					break;

	case 2:

			if (age >= 21 || (age < 21 && accidents < 2))
				{
					reg_charge = 425;
					accident_charge = 85;
					total_bill = reg_charge + (accident_charge * accidents);

					cout << "Code: " << code << endl;
					cout << "Accidents: " << accidents << endl;
					cout << "Age: " << age << endl << endl;

					cout << "Total Insurance Bill: $" << fixed << showpoint << setprecision(2) << total_bill << endl;
				}

			if (age < 21 && accidents >= 2)
				{
					reg_charge = 425;
					accident_charge = 85;
					total_bill = reg_charge + 125 + (accident_charge * accidents);

					cout << "Code: " << code << endl;
					cout << "Accidents: " << accidents << endl;
					cout << "Age: " << age << endl << endl;

					cout << "Total Insurance Bill: $" << fixed << showpoint << setprecision(2) << total_bill << endl;
				}

					break;

	default:

			cout << "You have entered an invalid code." << endl;

					break;
	}

}
