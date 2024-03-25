/*
Name: Daniel DiCocco

Project Name: CSC450-CTA01_0

Project Purpose: Demonstrate an understanding of basic C++ programming concepts
and basic data types by printing formatted statements containing strings and ints

Algorithm Used: n/a

Program Inputs: n/a

Program Outputs: Prints two statements to the console and returns 0

Program Limitations: n/a

Program Errors: n/a

==================
 */


/* Simple Program with a few Errors for Correction */
// Please be sure to correct all outlined errors.

#include <iostream>
#include <string>

// Standard namespace declaration
using namespace std;

// Main Function
int main() {

	// Declare variables
	string fName = "Daniel";
	string lName = "DiCocco";
	string sAddress = "123 Maple Lane";
	string city = "Oakland, NE";
	int zipCode = 53142;

	// Print data for fictional person
	cout << "This fictional person is named " << fName << " " << lName << "." << endl;
	cout << "They live at " << sAddress << " in " << city << ", " << zipCode << "." << endl;

	//Main Function return Statement
	return 0;
}
