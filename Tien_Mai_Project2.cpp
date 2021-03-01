// Morse Code Project 2
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


//char text[26]= { A, a, B, b, C, c, D, d, E, e, F, f, G, g, H, h, I, i, J, j, K, k, L, l, M, m, O, o, P, p, Q, q, R, r, S, s, T, t, U, u, V, v, W, w, X, x, Y, y, Z, z;
//char morse[81] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

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
	string letter;
	int choice;
	char A, a, B, b, C, c, D, d, E, e, F, f, G, g, H, h, I, i, J, j, K, k, L, l, M, m, O, o, P, p, Q, q, R, r, S, s, T, t, U, u, V, v, W, w, X, x, Y, y, Z, z;
	
	cout << "Welcome to Western Union Telegraph Company";
	cout << endl;
	cout << "1-Process Telegram Bill" << endl;
	cout << "2-Translate to Morse Code" << endl;
	cout << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	if(choice == 2)
	{
		cout << "Enter a single letter: ";
		cin >> letter;
		if(letter == "A" || letter == "a")
		{
			cout << "The letter " << letter << " translates to " << ".-";
		}
		else if(letter == "B" || letter == "b")
		{
			cout << "The letter " << letter << " translates to " << "-...";
		}
		else if(letter == "C" || letter == "c")
		{
			cout << "The letter " << letter << " translates to " << "-.-.";
		}
		else if(letter == "D" || letter == "d")
		{
			cout << "The letter " << letter << " translates to " << "-..";
		}
		else if(letter == "E" || letter == "e")
		{
			cout << "The letter " << letter << " translates to " << ".";
		}
		else if(letter == "F" || letter == "f")
		{
			cout << "The letter " << letter << " translates to " << "..-.";
		}
		else if(letter == "G" || letter == "g")
		{
			cout << "The letter " << letter << " translates to " << "--.";
		}
		else if(letter == "H" || letter == "h")
		{
			cout << "The letter " << letter << " translates to " << "....";
		}
		else if(letter == "I" || letter == "i")
		{
			cout << "The letter " << letter << " translates to " << "..";
		}
		else if(letter == "J" || letter == "j")
		{
			cout << "The letter " << letter << " translates to " << ".---";
		}
		else if(letter == "K" || letter == "k")
		{
			cout << "The letter " << letter << " translates to " << "-.-";
		}
		else if(letter == "L" || letter == "l")
		{
			cout << "The letter " << letter << " translates to " << ".-..";
		}
		else if(letter == "M" || letter == "m")
		{
			cout << "The letter " << letter << " translates to " << "--";
		}
		else if(letter == "N" || letter == "n")
		{
			cout << "The letter " << letter << " translates to " << "-.";
		}
		else if(letter == "O" || letter == "o")
		{
			cout << "The letter " << letter << " translates to " << "---";
		}
		else if(letter == "P" || letter == "p")
		{
			cout << "The letter " << letter << " translates to " << ".--.";
		}
		else if(letter == "Q" || letter == "q")
		{
			cout << "The letter " << letter << " translates to " << "--.-";
		}
		else if(letter == "R" || letter == "r")
		{
			cout << "The letter " << letter << " translates to " << ".-.";
		}
		else if(letter == "S" || letter == "s")
		{
			cout << "The letter " << letter << " translates to " << "...";
		}
		else if(letter == "T" || letter == "t")
		{
			cout << "The letter " << letter << " translates to " << "-";
		}
		else if(letter == "U" || letter == "u")
		{
			cout << "The letter " << letter << " translates to " << "..-";
		}
		else if(letter == "V" || letter == "v")
		{
			cout << "The letter " << letter << " translates to " << "...-";
		}
		else if(letter == "W" || letter == "w")
		{
			cout << "The letter " << letter << " translates to " << ".--";
		}
		else if(letter == "X" || letter == "x")
		{
			cout << "The letter " << letter << " translates to " << "-..-";
		}
		else if(letter == "Y" || letter == "y")
		{
			cout << "The letter " << letter << " translates to " << "-.--";
		}
		else if(letter == "Z" || letter == "z")
		{
			cout << "The letter " << letter << " translates to " << "--..";
		}
		else
		{
			cout << letter << " is not a valid choice.";
		}
	}
	else if(choice == 1)
	{
	cout << endl;
	cout << endl;
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
	else
	{
		cout << "Invalid Choice";
	}
	
	
	return 0;
	

	
}
