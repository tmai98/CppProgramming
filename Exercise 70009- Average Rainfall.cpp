// Average Rainfall 
#include <iostream>
#include <string>
using namespace std;

int main()

{
	string month1;
	string month2;
	string month3;
	double amt1, amt2, amt3;
	double average;
	
	cout << "What is the first month you would like to average?";
	getline(cin, month1);
	cout << "Second month?";
	getline(cin, month2);
	cout << "Third month?";
	getline(cin, month3);
	cout << "How much did it rain on " << month1 << "?";
	cin >> amt1;
	cout << "How much on " << month2 << "?";
	cin >> amt2;
	cout << "and " << month3 << "?";
	cin >> amt3;
	average = (amt1 + amt2 + amt3) / 3;
	cout << "The average rainfall for " << month1 << ", " << month2 << ", " << "and \n";
	cout << month3 << " is " << average << " inches." << endl;
	return 0;
}
