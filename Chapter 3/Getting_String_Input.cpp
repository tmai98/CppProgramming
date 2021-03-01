/************************************************************** 
* This program illustrates a problem that can occur if        *
* cin is used to read character data into a string object.    *
* RUN THE PROGRAM ENTERING BOTH YOUR FIRST AND LAST NAMES     *
* Read all the explanatory messages displayed by the program. *
**************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	string city;

	//Code that incorrectly uses cin to read strings
	cout << "Please enter your full name: ";
	cin >> name;
	cout << "Enter the city you live in: ";
	cin >> city;

	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl;
	
	//Display an explanatory message
	cout << "\n\nNotice that the user was never given the opportunity to enter the city.\n";
	cout << "That is because cin was used to read string input.\n";
	cout << "In the first input statement, when cin came to the space between the names,\n";
	cout << "it stopped reading. Only the first name was stored in the name variable.\n";
	cout << "In the second input statement, cin used the leftover characters it found in the keyboard buffer and ";
	cout << "stored the last name in the city variable.\n";
	
	//Pause the program and prompt user to continue
	cout << "\n\nNow the program will repeat, but this time cin won't be used to read strings.\n";
	cout << "Instead, the getline function will be used to store the user's input.\n";  
	cout << "Pay attention to how differently the program behaves.\n";
	cout << "\nPress any key to continue.\n";
	cin.get(); //removes the newline character left in the buffer by cin
	cin.get(); //pauses program waiting for user input
	cout << "\n-------------------------------";
	
	
	//Code that correctly uses the getline function to read strings
	cout << "\n\nPlease enter your full name: ";
	getline(cin, name);
	cout << "Enter the city you live in: ";
	getline(cin, city);

	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl;
	
	//Display an explanatory message
	cout << "\n\nThis time the program worked correctly with embedded spaces in the user's name.\n";
	cout << "The getline function reads an entire line, including all white spaces.\n";
	cout << "Pressing the [Enter] key causes a newline character (\'\\n\') to be stored\n";
	cout << "in the keyboard buffer.\n";
	cout << "\ncin will not remove a newline character. The getline function will.\n";
	cout << "cin.get() will also remove a newline character left in the buffer by cin.\n";
	
	return 0;
}
