#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	ifstream inputFile;
	string text;
	int line = 1;
	int amount;
	int total = 0;
	
	ifstream file("TelegramData.txt");
	
	while (getline(file, text))
	{
		if(line == 6)
		{
			cout << "Amount owed: $";
			line = -1;
			stringstream convert(text);
			convert >> amount;
			total += amount;
		}
		cout << text << endl;
		line++;
	}
	cout << endl;
	cout << "total is $" << total;
	
	return 0;
}
