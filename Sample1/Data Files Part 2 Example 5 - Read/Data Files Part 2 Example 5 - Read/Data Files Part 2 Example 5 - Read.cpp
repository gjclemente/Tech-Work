//Data Files Part 2 Example 5 - Read
//Date Created: 5/17/19
//Programmer Name: Gabby Clemente

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <cmath>
#include <iomanip>

using std::ofstream;
using std::ios;
using namespace std;

void main()
{
	char name[10], major[15];
	double fee, total_chem_fees = 0, total_account_fees = 0, total_math_fees = 0;
	int total_chem_students = 0, total_account_students = 0, total_math_students = 0;
	ifstream infile;

	infile.open("H:\\C++ Files\\CHARGES.DAT", ios::in);

	cout << "Student\t\tStudent\t\tCurrent" << endl;
	cout << "Name\t\tMajor\t\tFee" << endl;
	cout << "--------------------------------------------" << endl;

	if (infile)
	{
		do
		{
			infile >> name;
			infile.ignore(80, '\n');
			infile >> major;
			infile.ignore(80, '\n');

			if (strcmp(major, "Chemistry") == 0)
			{
				fee = 300.00;
				total_chem_students++;
			}

			if (strcmp(major, "Mathematics") == 0)
			{
				fee = 185.50;
				total_math_students++;
			}

			if (strcmp(major, "Accounting") == 0)
			{
				fee = 275.50;
				total_account_students++;
			}


			if (strcmp(major, "Chemistry") == 0)
			{
				total_chem_fees = total_chem_fees + fee;
			}

			if (strcmp(major, "Mathematics") == 0)
			{
				total_math_fees = total_math_fees + fee;
			}

			if (strcmp(major, "Accounting") == 0)
			{
				total_account_fees = total_account_fees + fee;
			}

			cout << fixed;
			cout << setw(11) << left << name << "\t" << major << "\t" << setprecision(2) << fee << endl;
		} while (!infile.eof());


	}

	else
	{
		cout << "An error occurred while opening the file." << endl;
	}

	cout << "--------------------------------------------" << endl << endl;

	cout << fixed;
	cout << "Total Chemistry Students: " << total_chem_students << endl;
	cout << "Total Chemistry Fees: " << setprecision(2) << total_chem_fees << endl << endl;

	cout << "Total Accounting Students: " << total_account_students << endl;
	cout << "Total Accounting Fees: " << setprecision(2) << total_account_fees << endl << endl;

	cout << "Total Mathematics Students: " << total_math_students << endl;
	cout << "Total Mathematics Fees: " << setprecision(2) << total_math_fees << endl << endl;

	infile.close();

}