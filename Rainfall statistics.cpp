//Rainfall Statistics
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	
	const int MONTHS[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	const string monthName[] = {"January", "Febuary", "March", "April", "May", "June", "July", "August", "Septemebr", "October", "November", "December"};
	double rainfall[12];
	double avg, avg2;
	
	cout << "Enter the amount of rainfall per month. " << endl;
	
	for (int index = 0; index < 12; index++)
	{
		cout << "Rainfall for month " << (monthName[index]) << " : ";
		cin >> rainfall[index];
			if (rainfall[index] < 0)
				{
					cout << "Invalid date (negative rainfall) -- retry" << endl;
					return 0;
				}
			else 
				{
					avg += rainfall[index];
				}
	}
	
	cout << "The total rainfall for the year is: " << avg << endl;
	avg2 = avg/12;
	cout << "The average monthly rainfall is: " << avg2 << endl;
	
	int max;
	string maxName;
	for (int i =1; i<12; i++)
	{
		if (rainfall[i] > max)
		{
			
			max = MONTHS[i];
			maxName = monthName[max];
			
		}
	}
	cout << "The month with the highest amount of rainfall is " << maxName << endl;
	int min;
	string minName;
	for (int i =0; i<12; i++)
	{
		if (rainfall[i] < min)
		{
			
			min = MONTHS[i];
			minName = monthName[min];
			
		}
	}
	cout << "The month with the lowest amont of rainfall is " << minName << endl;
	return 0;
}

