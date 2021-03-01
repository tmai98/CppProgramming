//isPrime function
#include <iostream>
using namespace std;

bool IsPrime(int);

int main()
{
	int number;
	
	cout << "Enter an integer: ";
	cin >> number;
	
	IsPrime(number);
	
	if (IsPrime(number))
	{
		cout << number << " is prime." << endl;
	}
	else
	{
		cout << number << " is not prime." << endl;
	}

	
	return 0;
}

bool IsPrime(int number)
{	
	int x;
	
	for (x=2; x<number; x++)
	{
		if (number % x == 0)
		{
			return false;
		}
	}
	
	return true;	
}


