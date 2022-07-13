#include "example.h"

void setWidth() {
	int age1, age2, age3; 
	age1 = 5;
	age2 = 12; 
	age3 = 119; 
	clearScreen(); 
	ColorText setTextColor;

	setTextColor.setColors(Red, Black); 
	cout << "FIRST - No setwidth control. " << DOUBLE_ENDLINE;
	cout << "\t" << "age: " << age1 << " years old." << endl;
	cout << "\t" << "age: " << age2 << " years old." << endl;
	cout << "\t" << "age: " << age3 << " years old." << DOUBLE_ENDLINE;
	setTextColor.setColors(Yellow, Blue); 
	cout << "Notice that the numbers are different sizes. " << endl <<
		"This causes the words after the numbers to be off from each other." << endl; 
	cout << "Also, it's not clear but the numbers are aligned right in their field. " << endl;
	cout << "the field width defaults to the minimum number of spaces to display the value. " << endl;
	cout << "The 5 only needs 1 space, the 12 needs 2 and the 119 needs 3. " << endl; 
	setTextColor.setColors(White, Black); 
	
	pressAKeyToContinue(false); 

	setTextColor.setColors(Red, Black);
	cout << "Now with set width control " << DOUBLE_ENDLINE;
	cout << "\t" << "age: " << setw(4) << age1 << " years old." << endl;
	cout << "\t" << "age: " << setw(4) << age2 <<  " years old." << endl;
	cout << "\t" << "age: " << setw(4) << age3 <<  " years old." << DOUBLE_ENDLINE;
	setTextColor.setColors(Yellow, Blue);
	cout << "Now the numbers are all in a 'field' that is four characters wide. " << endl;
	cout << "Notice also that the numbers are 'right-aligned'. They are pushed up " << endl <<
		"against the right side of their four-character field. " << DOUBLE_ENDLINE; 
	setTextColor.setColors(White, Black);

	cout << "Are there any questions about this? " << endl; 

}

void leftAndRight() {
	int age1, age2, age3;
	age1 = 5;
	age2 = 12;
	age3 = 119;
	clearScreen();
	ColorText setTextColor;

	setTextColor.setColors(Yellow, Black); 
	cout << "First, let's display our ages in a field that is 10 characters wide." << endl;
	cout << "I will put square brackets around the field to make it easier to see. " << DOUBLE_ENDLINE; 

	cout << "Now with set width control " << DOUBLE_ENDLINE;
	cout << "\t" << "age: [" << setw(10) << age1 << "] years old." << endl;
	cout << "\t" << "age: [" << setw(10) << age2 << "] years old." << endl;
	cout << "\t" << "age: [" << setw(10) << age3 << "] years old." << DOUBLE_ENDLINE;

	cout << "First, let's display our ages in a field that is 10 characters wide." << endl;
	cout << "Now we'll change it to left justification.  Look in the code and see that " << endl;
	cout << "We only have to put ""left "" one time. then it applies to everything after that. " << endl; 

	cout << "Now with set width control " << DOUBLE_ENDLINE;
	// Here is the only time I specify left justification!!
	cout << left; 
	// now everything is left justified. 
	cout << "\t" << "age: [" << setw(10) << age1 << "] years old." << endl;
	cout << "\t" << "age: [" << setw(10) << age2 << "] years old." << endl;
	cout << "\t" << "age: [" << setw(10) << age3 << "] years old." << DOUBLE_ENDLINE;

	pressAKeyToContinue(false); 

	cout << "Here's something interesting.  The left and right also apply to text literals. " << endl;
	cout << "I'm going to set the width of the word 'age' now. " << endl; 
	cout << "I'll make it a little bigger each time. I'm doing this with the setw() command. " << endl; 
	cout << "Notice that everything is still left justified, but the field holding 'age' grows!" << endl; 

	cout << "\t" << setw(10) << "age:" << "[" << setw(10) << age1 << "] years old." << endl;
	cout << "\t" << setw(11) << "age:" << "[" << setw(10) << age2 << "] years old." << endl;
	cout << "\t" << setw(12) << "age:" << "[" << setw(10) << age3 << "] years old." << DOUBLE_ENDLINE;

	pressAKeyToContinue(false); 
	cout << "now let's make everything right justified and see what happens. " << endl;
	cout << right; 

	cout << "\t" << setw(10) << "age:" << "[" << setw(10) << age1 << "] years old." << endl;
	cout << "\t" << setw(11) << "age:" << "[" << setw(10) << age2 << "] years old." << endl;
	cout << "\t" << setw(12) << "age:" << "[" << setw(10) << age3 << "] years old." << DOUBLE_ENDLINE;
}

void liningUpDollars() {
	double sales;
	double stateTax;
	double cityTax;	
	ColorText setTextColor;

	setTextColor.setColors(Yellow, Black);

	sales = 1578.93; 
	stateTax = .04 * sales; 
	cityTax = .02 * sales; 
	clearScreen(); 

	cout << "We'll print a receipt. " << endl;
	cout << "Notice that we'll use a set width to set the width of row headings the same." << endl;
	cout << "everything will be set to left, which is normal default. " << DOUBLE_ENDLINE; 
	cout << "Sales receipt" << endl; 

	cout << left; 
	cout << setw(20) << "Purchase Total: " << sales << endl; 
	cout << setw(20) << "State Tax: " << stateTax << endl;
	cout << setw(20) << "City Tax: " << cityTax << DOUBLE_ENDLINE;
	setTextColor.setColors(White, Black); 
	cout << "Notice the width of the text field for purchase total and that it's left justified. " << endl;
	cout << "Notice also that the purchase price looks ok.. but what's up with the tax values? " << DOUBLE_ENDLINE; 

	pressAKeyToContinue(false); 

	cout << "Let's clean up those tax values. $$ values should only have two numbers for cents." << endl;
	cout << "We'll add 'setprecision(2) before we print any $$ values. Once we set that" << endl;
	cout << "It will stay that way until we change it. " << endl;
	cout << "We'll also set the display to 'fixed' which will force a decimal output." << DOUBLE_ENDLINE; 

	cout << left << setprecision(2) << fixed;
	cout << setw(20) << "Purchase Total: " << sales << endl;
	cout << setw(20) << "State Tax: " << stateTax << endl;
	cout << setw(20) << "City Tax: " << cityTax << DOUBLE_ENDLINE;

	setTextColor.setColors(White, Black);
	cout << "That's better, but it's still not lined up. " << endl;
	cout << "We need to specify the width of the $$ field, Right justify it. " << DOUBLE_ENDLINE;


	setTextColor.setColors(Yellow, Black); 
	pressAKeyToContinue(false); 
	clearScreen(); 

	cout << "To make everything work nicely we will have to alternate left and right justification " << endl;
	cout << "on the row header word (at the left) and the $$ amount. " << endl;
	cout << "We'll also have to set a consisten with by using setw(10) on the $$ values" << endl; 
	cout << "We'll also set the display to 'fixed' which will force a decimal output." << DOUBLE_ENDLINE;

	cout << setprecision(2) << fixed;
	cout << left << setw(20) << "Purchase Total: " << "$" << right << setw(10) << sales << endl;
	cout << left << setw(20) << "State Tax: " << "$" << right << setw(10) << stateTax << endl;
	cout << left << setw(20) << "City Tax: " << "$" << right << setw(10) << cityTax << DOUBLE_ENDLINE;

	setTextColor.setColors(White, Black);
	cout << "Puuurfect! " << endl;
	cout << " By carefully thinking through the use of fixed, set width, and set precision" << endl;
	cout << "we were able to display these $ values in an appropriate table." << DOUBLE_ENDLINE;


	setTextColor.setColors(Yellow, Black);
	pressAKeyToContinue(false);

}

void readSingleChars() {
	char letter1, letter2, letter3; 

	cout << "Enter 1 character please: ";
	cin >> letter1;
	cout << "The letter you entered is """ << letter1 << """; 
}