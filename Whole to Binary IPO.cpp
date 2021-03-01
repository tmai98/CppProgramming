// Whole number to Binary
#include <iostream>
using namespace std;

int main()

{
	int number1, number2, number3, number4, number5, number6, number7, number8;
	cout << "Pick a whole number from 1 to 8: ";
	cin >> number1;
	number2 = number1 % 2;
	number3 = number1 / 2;
	number4 = number3 % 2;
	number5 = number3 / 2;
	number6 = number5 % 2;
	number7 = number5 / 2;
	number8 = number7 % 2;
	cout << number8 << number6 << number4 << number2 << endl;
	return 0;
}

