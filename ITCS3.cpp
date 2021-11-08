//Program: Shipper Spending
//Developer: Joshua Lindquist
//Function: To calculate the users input of purchase, cost and location into shipping cost and total cost
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <stdlib.h>

using namespace std;
//Defining static values
int fragprice = 2;

int main()
{
	//Creating variables and strings
	int price, tot, shipcost, ship;
	shipcost = 0;
	price = 0;
	ship = 0;
	string dest, name, fragile;
	string itemname = "Please enter the item name (no spaces)";
	string itemfrag = "Is the item fragile? (y=yes/n=no)";
	string ordtot = "Please enter the order total";
	string destname = "Please enter the destination. (USA/CAN/AUS/JUPITER)";
	//Initial setfill command
	cout << setfill('.');
	// The program will print out the strings and then take the users inputs, when it gathers an input it will run it through a IF structure to determine factors that determind the final price
	cout << setw(66) << left << itemname << setw(13) << right << ":";
	cin >> name;
	cout << setw(66) << left << itemfrag << setw(13) << right << ":";
	cin >> fragile;
	if (fragile == "y" || fragile == "Y")
		ship = fragprice;
	else if (fragile == "n" || fragile == "N")
		ship = 0;
	//The IF structure will end the print Invalid entry if the user inputs the wrong charactor, then it exits the program
	else {
		cout << "Invalid entry, exiting" << endl;
		exit(EXIT_FAILURE);
	}
	cout << setw(66) << left << ordtot << setw(13) << right << ":";
	cin >> tot;
	cout << setw(66) << left << destname << setw(13) << right << ":";
	cin >> dest;
	//If structure to determine the price depending on distance and original total price
	if (dest == "USA")
		if (tot <= 50)
			shipcost = 6;
		else if (50.01 < tot && tot <= 100)
			shipcost = 9;
		else if (100.01 < tot && tot <= 150)
			shipcost = 12;
		else
			shipcost = 0;
	else if (dest == "CAN")
		if (tot <= 50)
			shipcost = 8;
		else if (50.01 < tot && tot <= 100)
			shipcost = 12;
		else if (100.01 < tot && tot <= 150)
			shipcost = 15;
		else
			shipcost = 0;
	else if (dest == "AUS")
		if (tot <= 50)
			shipcost = 10;
		else if (50.01 <= tot && tot <= 100)
			shipcost = 14;
		else if (100.01 <= tot && tot <= 150)
			shipcost = 17;
		else
			shipcost = 0;
	else if (dest == "JUPITER")
		if (tot <= 50)
			shipcost = 10;
		else if (50.01 <= tot && tot <= 100)
			shipcost = 15;
		else if (100.01 <= tot && tot <= 150)
			shipcost = 20;
		else
			shipcost = 0;
	else {
		cout << "Invalid entry, exiting" << endl;
		exit(EXIT_FAILURE);
	}
	//Combining the possible fragile costs with the distance costs
	shipcost = ship + shipcost;
	//Printing the outputs
	cout << setw(56) << left << "Your item is" << setw(13) << right << ":" << name << endl;
	cout << setw(56) << left << "Your shipping cost is" << setw(13) << right << ":" << shipcost << endl;
	cout << setw(56) << left << "Your shipping to" << setw(13) << right << ":" << dest << endl;
	cout << setw(56) << left << "Your total shipping costs are" << setw(13) << right << ":" << tot + shipcost << endl;
	
	cout << setfill('-');
	cout << setw(79) << right << "Thank You!" << endl;
	return 0;
} 