//Grade Calculator
#include <iostream>
using namespace std;

int main()
{
	int n;
	double rec;
	double poss;
	double total;
	double total2;
	
	cout << "Enter number of assignments to input: ";
	cin >> n;
	
	for (int count =1; count <= n; count++)
	{
	
		
		cout << "Enter number of points recieved for assignment " << count << ": ";
		cin >> rec;
		total +=rec;
		cout << "Enter number of possible points for assignment " << count << ": ";
		cin >> poss;
		total2 +=poss;
		
	
	}
		double percent;
		percent=(total/total2)*100;
		cout << "Your total amount of points is " << total << " out of " << total2 << ", or " << percent << "%" << endl;
		
	return 0;
	

}
