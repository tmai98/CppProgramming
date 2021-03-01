// Morse Code Project 3
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


//char text[26]= { A, a, B, b, C, c, D, d, E, e, F, f, G, g, H, h, I, i, J, j, K, k, L, l, M, m, O, o, P, p, Q, q, R, r, S, s, T, t, U, u, V, v, W, w, X, x, Y, y, Z, z;
//char morse[81] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

int main()
{
for(;;){
	string name;
	string address;
	string city;
	string state;
	string zip;
	string texttomorse(char c);
	int words, cusamt, cusamt2;
	int owe, owe3;
	double owe2, owe4, amtowe;
	int dollar, quarters, dimes, nickels, pennies;
	double chg;
	int chg2;
	string letter;
	int choice;

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
	if(choice == 2)												//if statement starts
	{
		
		string s;
		
		cout << "Enter a message: \n";
		cin.ignore();
		getline(cin, s);
													
		for (int i=0; i < s.length();i++)						//Loop for A-Z
		{
			letter = s[i];
			if(letter == "A" || letter == "a")
		{
			cout << ".-";
		}
		else if(letter == "B" || letter == "b")
		{
			cout << "-...";
		}
		else if(letter == "C" || letter == "c")
		{
			cout << "-.-.";
		}
		else if(letter == "D" || letter == "d")
		{
			cout << "-..";
		}
		else if(letter == "E" || letter == "e")
		{
			cout << ".";
		}
		else if(letter == "F" || letter == "f")
		{
			cout << "..-.";
		}
		else if(letter == "G" || letter == "g")
		{
			cout << "--.";
		}
		else if(letter == "H" || letter == "h")
		{
			cout << "....";
		}
		else if(letter == "I" || letter == "i")
		{
			cout << "..";
		}
		else if(letter == "J" || letter == "j")
		{
			cout << ".---";
		}
		else if(letter == "K" || letter == "k")
		{
			cout << "-.-";
		}
		else if(letter == "L" || letter == "l")
		{
			cout << ".-..";
		}
		else if(letter == "M" || letter == "m")
		{
			cout << "--";
		}
		else if(letter == "N" || letter == "n")
		{
			cout << "-.";
		}
		else if(letter == "O" || letter == "o")
		{
			cout << "---";
		}
		else if(letter == "P" || letter == "p")
		{
			cout << ".--.";
		}
		else if(letter == "Q" || letter == "q")
		{
			cout << "--.-";
		}
		else if(letter == "R" || letter == "r")
		{
			cout << ".-.";
		}
		else if(letter == "S" || letter == "s")
		{
			cout << "...";
		}
		else if(letter == "T" || letter == "t")
		{
			cout << "-";
		}
		else if(letter == "U" || letter == "u")
		{
			cout << "..-";
		}
		else if(letter == "V" || letter == "v")
		{
			cout << "...-";
		}
		else if(letter == "W" || letter == "w")
		{
			cout << ".--";
		}
		else if(letter == "X" || letter == "x")
		{
			cout << "-..-";
		}
		else if(letter == "Y" || letter == "y")
		{
			cout << "-.--";
		}
		else if(letter == "Z" || letter == "z")
		{
			cout << "--..";
		}
		else if(letter==" ")
		{
			cout << "   ";
		}
		else
		{
			s=s;
		}
		
		
	
	}
		
 	}
	else if(choice == 1)									//telegram bill
	{
	cout << endl;
	cout << endl;
	getline(cin, name);
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
	}
	else if(choice == 3)										//data file
	{
		cout << endl;
		cout << "Leslie Knope" << endl;
		cout << "1456 Plymouth Street" << endl;
		cout << "Pawnee, IN 47408" << endl;
		owe = 117/5 ;
		owe2 = owe*1.50 ;
		owe3 = words%5;
		owe4 = owe3*.50;
		amtowe = owe2+owe4;
		cout << "Amount Owed: $" << amtowe << endl;
		
		cout << endl;
		cout << "Tom Haveford" << endl;
		cout << "689 Lil Sebastion Avenue" << endl;
		cout << "Eagleton, IN 47320" << endl;
		owe = 34/5 ;
		owe2 = owe*1.50 ;
		owe3 = words%5;
		owe4 = owe3*.50;
		amtowe = owe2+owe4;
		cout << "Amount Owed: $" << amtowe << endl;
		
		cout << endl;
		cout << "April Ludgate" << endl;
		cout << "1123 9th Avenue" << endl;
		cout << "Wamapoke, IN 48034" << endl;
		owe = 60/5 ;
		owe2 = owe*1.50 ;
		owe3 = words%5;
		owe4 = owe3*.50;
		amtowe = owe2+owe4;
		cout << "Amount Owed: $" << amtowe << endl;
		
		cout << endl;
		cout << "Jery Gergich" << endl;
		cout << "3124 Woodbridge Road" << endl;
		cout << "Pawnee, IN 47407" << endl;
		owe = 378/5 ;
		owe2 = owe*1.50 ;
		owe3 = words%5;
		owe4 = owe3*.50;
		amtowe = owe2+owe4;
		cout << "Amount Owed: $" << amtowe << endl;
		
		cout << endl;
		cout << "Donna Meagle" << endl;
		cout << "1200 Elysian Fields Blvd" << endl;
		cout << "Eagleton, IN 47322" << endl;
		owe = 245/5 ;
		owe2 = owe*1.50 ;
		owe3 = words%5;
		owe4 = owe3*.50;
		amtowe = owe2+owe4;
		cout << "Amount Owed: $" << amtowe << endl;
	}
	else if(choice == 4)
	{
		cout << "Thank you. Closing program.";
		return 0;
	}
	else
	{
		cout << choice << " is not a valid choice" << endl;
		cout << endl;
	}
	
	
	

	
}
}
