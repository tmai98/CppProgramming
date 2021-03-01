/*project 4
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;




string choice2()
{
		string s;
		string letter;
		string output;
		
		cout << endl;
		cout << "Enter a message: ";
		cin.ignore();
		getline(cin, s);
													
		for (int i=0; i < s.length();i++)						//Loop for A-Z
		{
			letter = s[i];
			if(letter == "A" || letter == "a")
		{
			output += ".-";
		}
		else if(letter == "B" || letter == "b")
		{
			output += "-...";
		}
		else if(letter == "C" || letter == "c")
		{
			output += "-.-.";
		}
		else if(letter == "D" || letter == "d")
		{
			output += "-..";
		}
		else if(letter == "E" || letter == "e")
		{
			output += ".";
		}
		else if(letter == "F" || letter == "f")
		{
			output += "..-.";
		}
		else if(letter == "G" || letter == "g")
		{
			output += "--.";
		}
		else if(letter == "H" || letter == "h")
		{
			output += "....";
		}
		else if(letter == "I" || letter == "i")
		{
			output += "..";
		}
		else if(letter == "J" || letter == "j")
		{
			output += ".---";
		}
		else if(letter == "K" || letter == "k")
		{
			output += "-.-";
		}
		else if(letter == "L" || letter == "l")
		{
			output += ".-..";
		}
		else if(letter == "M" || letter == "m")
		{
			output += "--";
		}
		else if(letter == "N" || letter == "n")
		{
			output += "-.";
		}
		else if(letter == "O" || letter == "o")
		{
			output += "---";
		}
		else if(letter == "P" || letter == "p")
		{
			output += ".--.";
		}
		else if(letter == "Q" || letter == "q")
		{
			output += "--.-";
		}
		else if(letter == "R" || letter == "r")
		{
			output += ".-.";
		}
		else if(letter == "S" || letter == "s")
		{
			output += "...";
		}
		else if(letter == "T" || letter == "t")
		{
			output += "-";
		}
		else if(letter == "U" || letter == "u")
		{
			output += "..-";
		}
		else if(letter == "V" || letter == "v")
		{
			output += "...-";
		}
		else if(letter == "W" || letter == "w")
		{
			output += ".--";
		}
		else if(letter == "X" || letter == "x")
		{
			output += "-..-";
		}
		else if(letter == "Y" || letter == "y")
		{
			output += "-.--";
		}
		else if(letter == "Z" || letter == "z")
		{
			output += "--..";
		}
		else if(letter==" ")
		{
			output += "   ";
		}
		else
		{
			s=s;
		}
	}
	return output;
}
void choice3()
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
	cout << "The total cost of the Telegram Bill is $" << total;
	cout << endl;

}
void choice4()
{
		cout << "Thank you. Closing program.";
}
void choice1 ()
{

	int words;
	double owe, owe2, owe3, owe4, amtowe;
	
	
	cout << "Enter the number of words sent: ";
	cin >> words;
	owe = words/5 ;
	owe2 = owe*1.50 ;
	owe3 = words%5;
	owe4 = owe3*.50;
	amtowe = owe2+owe4;
	cout << "Amount Owed: $" << amtowe << endl;
}

int main()
{
	int choice;
	string morse;
	
	while (choice != 4)
	{
		cout << endl;
	cout << "Welcome to Western Union Telegraph Company";		//Menu
	cout << endl;
	cout << "1-Process Telegram Bill" << endl;
	cout << "2-Translate to Morse Code" << endl;
	cout << "3-Process a Data File" << endl;
	cout << "4-Quit" << endl;
	cout << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	
	if (choice == 2)
	{
		morse = choice2();
		cout << morse;
	}
	else if (choice == 3)
	{
		choice3();
	}
	else if (choice == 4)
	{
		choice4();
	}
	else if (choice == 1)
	{
		choice1();
	}
	else
	{
		cout << choice << " is not a valid choice" << endl;
		
	}
	
	}
	
}









































