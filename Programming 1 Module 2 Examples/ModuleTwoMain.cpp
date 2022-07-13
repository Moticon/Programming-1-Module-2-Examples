#include "example.h"

void main() {

	char choice = ':';
	ColorText setTextColor;

	while (toupper(choice) != 'Q') {
		clearScreen();
		setTextColor.setColors(Red, Black);

		cout << "Examples: " << endl
			<< "1) Examples of setwidth." << endl
			<< "2) Left and right Justification " << endl
			<< "3) Set precision, left, etc for $$ display" << endl
			<< "4) Single Character (char) input" << endl
			<< "5) " << endl
			<< "6) No Example Here. :)" << endl
			<< "7) No Example Here. :) " << endl
			<< "8) No Example Here. :)" << endl
			<< "9) No Example Here. :)" << DOUBLE_ENDLINE;


		setTextColor.setColors(Yellow, Black);
		cout << "A) Code snippet - also not here... :)" << DOUBLE_ENDLINE;

		setTextColor.setColors(Green, Black);
		cout << "Q) Quit Program" << DOUBLE_ENDLINE;

		setTextColor.setColors(White, Black);

		choice = getMenuChoice("Enter choice for Example to display: ", false);
		cout << DOUBLE_ENDLINE;

		switch (choice) {
		case '1':
			setWidth();
			break;
		case '2':
			leftAndRight();
			break;
		case '3': 
			liningUpDollars();
			break; 
		case '4':
			readSingleChars();
			break; 
		case '5':
			break; 
		default:
			cout << "By default there is not a function to call." << DOUBLE_ENDLINE;
		}

		if (toupper(choice) != 'Q')
			pressAKeyToContinue(false);
	}
}