//This program demonstrates the use of some string class member functions

#include <iostream>

using namespace std;

int main ()
{

	string input;
	cout << "Enter a 3 letter word: ";
	
	getline(cin, input);
	
	cout << "The word you entered has " << input.length()	<< " letters.\n";
		
	cout << "\nThe first letter of " << input << " is " << input.at(0) << endl;
	cout << "The second letter of " << input << " is " << input.at(1) << endl;
	cout << "The third letter of " << input << " is " << input.at(2) << endl;
	
	cout << "\nThe word you entered is: ";
	
	for(int i = 0; i < input.length(); i++)
	   cout << input.at(i);
}
