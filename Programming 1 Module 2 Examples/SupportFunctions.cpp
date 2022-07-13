#include "example.h"


char getMenuChoice(string prompt, bool clearWindow) {
	char userInput;
	if (clearWindow)
		clearScreen();
	cout << prompt;
	cin >> userInput;

	return userInput;
}

void clearScreen() {
	system("cls");
}

void pressAKeyToContinue(bool clearWindow) {
	cout << DOUBLE_ENDLINE;
	if (clearWindow)
		clearScreen();
	system("Pause");
	cout << DOUBLE_ENDLINE;
}

