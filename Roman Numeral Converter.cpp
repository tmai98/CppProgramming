//Roman Numeral Converter
#include <iostream>
using namespace std;

int main()
{ 
	int choice;
	
	cout << "Enter a number within the range of 1 through 10: ";
	cin >> choice;
	switch (choice)
	{
		case 1: cout << "I" << endl;
		break;
		case 2: cout << "II" << endl;
		break;
		case 3: cout << "III" << endl;
		break;
		case 4: cout << "IV" << endl;
		break;
		case 5: cout << "V" << endl;
		break;
		case 6: cout << "VI" << endl;
		break;
		case 7: cout << "VII" << endl;
		break;
		case 8: cout << "VIII" << endl;
		break;
		case 9: cout << "IX" << endl;
		break;
		case 10: cout << "X" << endl;
		break;
		default: cout << "Not a number within the range of 1 through 10.";
	}
	return 0;
}
