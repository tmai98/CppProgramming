//price inflation
#include <iostream>
using namespace std;

int main()
{
	int count;
	double pencils, years, inf, inf2, x, total;
	
	cout << "Enter the current price of pencils: ";
	cin >> pencils;
	cout << "Enter the number of years in the future that you will buy the pencil: ";
	cin >> years;
	cout << "Enter the inflation rate as a percentage: ";
	cin >> inf;
	inf2=inf/100;
	x=pencils*inf2;
	
	for (count=1; count<=years; count++)
		{
			pencils+= x;
		}
		
	cout << "The price of pencils will be $" << pencils << " in " << years << " years.";


	return 0;	
}

