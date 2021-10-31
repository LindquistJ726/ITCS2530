//Program: Cheesy Calculator
//Developer: Joshua Lindquist
//Function: The program takes an input of weight of cheese from the user and determines how many containers the amount would fill,
//the cost of producing these containers, and the profit the containers would provide
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace	std;
//Declaring varibles the are not going to change inside of the program
const double contchee = 2.76;
const double contprof = 1.45;
const double contcost = 4.12;

int main()
{
	//The IO manipulator set up for creating the intial message when starting the program
	cout <<setw(80) << setfill('*') << left << "\r"
		<< setw(25) << setfill('*') << left << "\n"
		<< left << " Welcome to Curds and Wheyght " << right << setw(26) << "\n"
		<< setw(80) << "\n"
		<< endl;


	//Declare varibles the are prone to change in the execution of the program
	int container, cheese;
	float  cost, profit;
	//Obtaining input from the user
	cout << "Please enter the total number of kilograms of cheese produced:  ";
	cin >> cheese;
	//Calculating the amount of containers, the cost of the container, and the profit made of the containers.
	container = round(cheese / contchee);
	cost = container * contcost;
	profit = container * contprof;
	//Reseting the setfill before printing outputs
	cout << setfill(' ');
	//Creating strings and printing the outputs with IO manipulators 
	string contstr = "The number of containers to hold the cheese is:  ";
	cout << setw(66) << left << contstr << setw(13) << right << container << endl;
	string coststr = "The cost of producing " + to_string(container) + " container(s) of cheese is: $";
	cout << setw(66) << left << coststr << setw(13) << right << cost << endl;
	string profstr = "The profit from producing " + to_string(container) + " container(s) of cheese is: $";
	cout << setw(66) << left << profstr <<setw(13) << right << profit << endl;
	return 0;
}