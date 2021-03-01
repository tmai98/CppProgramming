// Program that compute the sum of the digits in an integer
#include <iostream>

using namespace std;

int main()

{
	int number1, number2, number3, number4, number5, answer;
	cout << "Enter an integer that is between 0 and 1000.";
	cin >> number1;
	number2 = number1 % 10 ;
	number3 = number1 / 10;
	number4 = number3 % 10;
	number5 = number3 / 10;
	answer = number5 + number4 + number2;
	cout << "The sum of the digits is " << answer << endl;
	return 0;
}
