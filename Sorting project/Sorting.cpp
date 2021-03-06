#include <iostream>
#include <cstdlib>
#include <limits>
#include <ctime>
#include "./Tests.h"

using namespace std;

int main()
{
	system("cls"); //Windows Clear Command
	Tests tests; // Tests object allows me to refer to its functions.
	char choice = '1';
	int a[10]; // Array of integers which will be randomly made between numbers 1-100
	double myinf = numeric_limits<double>::infinity(); // Defines the value of infinity
	float b[10] = { myinf, -myinf, 0.0f, 1.7f, 3.4f, -5.9f, 1.0f, 1.011f, 1.01f, 1.5f };; // List of floats including infinity variables positive and negative
	cout << "Sorting Program\n" << endl;

	while (1)
	{
		system("cls");
		cout << "Welcome to my sorting program" << endl;
		cout << "1. Sort Integer list " << endl;
		cout << "2. Sort floating point list" << endl;
		cout << "q. quit " << endl;
		cout << "\n> ";
		cin >> choice;

		if (choice == '1')
		{
			cout << "Test 1: Sorting Integers" << endl;
			tests.IntegerSorter(a); // Fully functional Integer sorter.

		}
		else if (choice == '2')
		{
			cout << "\nTest 2: Sorting Float Numbers" << endl;
			tests.FloatSorter(b); // Sorts floating point objects.
		}
		else if (choice == '3')
		{
			cout << "\nTest 3: Sorting Integers and Floating Point numbers" << endl;
			
		}
		else if (choice == 'q' || choice == 'Q') // Quits the programs.
		{
			
			break;
		}
		else
		{
			cout << "Error";
		}
	}

	cin.get();
 
}

//REQUIREMENTS //
//1. Sort a finite amount of real numbers. (Create an algorithm) 
	//1a. Can sort integers - DONE
	//1b. Floating point numbers
//2. Sort just floating point objects
	//a. real numbers
	//b. negative zero
	//c. negative infinity
	//d. posiive infinity
	//e. NaN objects
//3. Can sort a list of length 0 - Return error
//4. Can sort a list of length 1
//5. Can sort a list of length 2
//6. Can sort a list of variable length
//7. Can sort a list with at least two equal elements
//8. Times the sorting algorithm by any machine implemented method
//9. Gives a table of time versus number of elements sorted
//10. Gives a graph of time versus number of elements sorted
//11. Bonus for original work or conventional work done exceptionally well
//12. Report in PDF file


