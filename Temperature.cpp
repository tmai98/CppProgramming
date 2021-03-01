//Temperature
#include <iostream>
using namespace std;

int main()
{
	float temp;
	cout << "Enter the temperature: ";
	cin >> temp;
	
	if (temp > 100.0)
		cout << "Too hot!" << endl;
	else if (temp < 30.0 )
		cout << "Too cold!" << endl;
	else 
		cout << "Just right!" << endl;
	
	return 0;
}
