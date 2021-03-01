// practice exam peer program assignment
// Did it in an hour and 12 minutes
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()

{
	char package;
	double hours;
	double hour1;
	double hour2;
	double hour3;
	double A, a, B, b, C, c;
	double bill, bill2, bill3;
	
	cout << "Hello user, do you have package A or package B? Type A, B, or C:  ";
	cin >> package;
	cout << "How many hours are used? ";
	cin>> hours;
	cout << endl;
	
	if (package == 'A' || package == 'a')
	{
		hour1=hours-10;
		bill=(hour1*2.0)+9.95;
		cout << "Your bill amount is: $" << bill << endl;
		
	}
	
	
	else if (package== 'B' || package=='b')
	{
		hour2=hours-20;
		bill2=(hour2*1)+14.95;
		cout << "Your bill amount is: $" << bill2 << endl;
		
	}
		

	else if (package=='C' || package=='c')
	{
		bill3=19.95;
		cout << "Your bill amount is: $" << bill3 << endl;
		
	}
	else 
	{
		cout << "Invalid Pacakge choice.";
	}	
	
	return 0;
	
	
}


