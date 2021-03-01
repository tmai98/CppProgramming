// Morse Code Project 1
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()

{
	string name;
	string address;
	string city;
	string state;
	string zip;
	int words, cusamt, cusamt2;
	int owe, owe3;
	double owe2, owe4, amtowe;
	int dollar, quarters, dimes, nickels, pennies;
	double chg;
	int chg2;
	cout << "Enter the name of the customer: ";
	getline(cin, name);
	cout << "Enter street address: ";
	getline(cin, address);
	cout << "Enter city: ";
	getline(cin, city);
	cout << "Enter state: ";
	getline(cin, state);
	cout << "Enter zip code: ";
	getline(cin, zip);
	cout << "Enter the number of words sent: ";
	cin >> words;
	cout << endl;
	cout << endl;
	cout << name << endl;
	cout << address << endl;
	cout << city << ", " << state << " " << zip << endl;
	owe = words/5 ;
	owe2 = owe*1.50 ;
	owe3 = words%5;
	owe4 = owe3*.50;
	amtowe = owe2+owe4;
	cout << "Amount Owed: $" << amtowe << endl;
	cout << endl;
	cout << endl;
	cout << "Enter the amount recieved from customer in pennies: ";
	cin >> cusamt;
	cusamt2 = cusamt/100;
	chg = cusamt2-amtowe;
	chg2 = chg*100;
	cout << endl;
	cout << endl;
	cout << " Denomination" << setw(20) << "Number" << endl;
	cout << "---------------" << setw(22) << "---------------" << endl;
	dollar = chg2/100;
	quarters = (chg2%100)/25;
	dimes = (quarters%25)/10;
	nickels = (dimes%10)/5;
	pennies = (nickels%5)/1;
	cout << setw(10) << "Dollars" << setw(20) << dollar << endl;
	cout << setw(10) << "Quarters" << setw(20) << quarters << endl;
	cout << setw(10) << "Dimes" << setw(20) << dimes << endl;
	cout << setw(10) << "Nickels" << setw(20) << nickels << endl;
	cout << setw(10) << "Pennies" << setw(20) << pennies << endl;
	
	return 0;
	

	
}
