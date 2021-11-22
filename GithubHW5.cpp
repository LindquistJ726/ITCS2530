//Program: Surfboard Shop
//Programmer: Joshua Lindquist
//Description: This program will show the user how to utilize the program to make a purchase of surfboards 
//The program will ask the user for the size and the amount and give them a total
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <sstream>

using namespace std;



void ShowUsage(){
	cout << "To purchase a surfboard press'P'" << endl;
	cout << "To display current purchases press'C'" << endl;
	cout << "To display total amount due press 'T'" << endl;
	cout << "To quit the program press 'Q'" << endl;
}
void MakePurchase(int & iTotalSmall, int & iTotalMedium, int & iTotalLarge, int & iTotalxxxs) {
		const float prsmall = 175.00, prmedium = 190.00, prlarge = 200.00, prxxxs = 35.00;
		iTotalSmall *= prsmall;
		iTotalMedium *= prmedium;
		iTotalLarge *= prlarge;
		iTotalxxxs *= prxxxs;
}
void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalxxxs){
	// I didn't exactly struggle on this but I did have a funny interaction of trying to bug fix for ~20 minutes and then realizing I didnt change the names after I copy-pasted the if structure
	// If structure to tell the user the amount of surfboard they have in their current purchases, if they have none it will print "No purchases made yet." 
	if (iTotalSmall == 0 && iTotalMedium == 0 && iTotalLarge == 0 && iTotalxxxs == 0) {
		cout << "No purchases made yet." << endl;
	}
	if (iTotalSmall >= 1) {
		cout << "The total number of small surfboards is " << iTotalSmall << endl;
	}
	if (iTotalMedium >= 1) {
		cout << "The total number of medium surfboards is " << iTotalMedium << endl;
	}
	if (iTotalLarge >= 1) {
		cout << "The total number of large surfboards is " << iTotalLarge << endl;
	}
	if (iTotalxxxs >= 1) {
		cout << "The total number of XXXS surfboards is " << iTotalxxxs << endl;
	}
	
}
void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalxxxs){
	//Variables and math to determine the total cost and amount of boards for each side
	int total = 0;
	int bsamount = 0, bmamount = 0, blamount = 0, bxxxs = 0;
	const int prsmall = 175.00, prmedium = 190.00, prlarge = 200.00, prxxxs = 35.00;

	bsamount = iTotalSmall / prsmall;
	bmamount = iTotalMedium / prmedium;
	blamount = iTotalLarge / prlarge;
	bxxxs = iTotalxxxs / prxxxs;
	total = iTotalSmall + iTotalMedium + iTotalLarge + iTotalxxxs;
	//If structures to determine what to print based on the inputs into the function
	if (iTotalSmall != 0) {
		cout << "The total number of small surfboards is " << bsamount << " at a total of:  $" << iTotalSmall << endl;
	}
	if (iTotalMedium != 0) {
		cout << "The total number of medium surfboards is " << bmamount << " at a total of:  $" << iTotalMedium << endl;
	}
	if (iTotalLarge != 0) {
		cout << "The total number of large surfboards is " << blamount <<" at a total of:  $" << iTotalLarge << endl;
	}
	if (iTotalxxxs != 0) {
		cout << "The total number of XXXS surfboards is " << bxxxs << " at a total of:  $" << iTotalxxxs << endl;
	}
	if (total != 0) 
		cout << "Amount due: $"<< total << endl;
	else 
		cout << "No purchases made yet." << endl;
	}
int main() {
	cout << setw(61) << setfill('*') << left << "\r"
		<< setw(6) << setfill('*') << left << "\n"
		<< left << " Welcome to my Johnny Utah's PointBreak Surf Shop " << right << setw(6) << "\n"
		<< setw(61) << "\n"
		<< endl;
	//Defining variables 
	int bsamount = 0,bmamount = 0 , blamount = 0, bxsamount = 0;
	float bsmalltotal = 0, bmediumtotal = 0, blargetotal = 0, bxstotal = 0;
	//Inital menu to show the user how the program functions, if the user forget a option they can bring the menu back up with "S"
	cout << "To show program usage 'S'" << endl;
	cout << "To purchase a surfboard press'P'" << endl;
	cout << "To display current purchases press'C'" << endl;
	cout << "To display total amount due press 'T'" << endl;
	cout << "To quit the program press 'Q'" << endl;
	string userinput;
	cout << "Please enter selection:  ";
	cin >> userinput;

	do {
		// If structure to take the users input and run the proper function
		if (userinput == "S" || userinput == "s") {
			ShowUsage();
		}
		else if (userinput == "P" || userinput == "p") {
			int amount = 0;
			string type;
			// I struggled with this part trying to find a way to split the two inputs while only inputing one into the function
			cout << "Please enter the quanity and type (S = Small, M = Medium, L = Large, XXXS = Squirrel) of surfboard you'd like to purchase:  ";
			cin >> amount >> type;
			int bmedium = 0, bsmall = 0, blarge = 0, bxxxs = 0;
			if (type == "s" || type == "S") {
				bsmall = amount;
				bsamount = bsmall + bsamount;
				amount = 0;
			}
			else if (type == "m" || type == "M") {
				bmedium = amount;
				bmamount = bmedium + bmamount;
				amount = 0;
			}
			else if (type == "l" || type == "L") {
				blarge = amount;
				blamount = blarge + blamount;
				amount = 0;
			}
			else if (type == "XXXS" || type == "xxxs") {
				bxxxs = amount;
				bxsamount = bxxxs + bxsamount;
				amount = 0;
			else {
				cout << "That is not a size option, Exiting...";
				exit(EXIT_FAILURE);
			}
			// At first I was unsure on how I should keep the initial variables  after they have been converted into the amount of money
			//, but because of the solution I created for the previous part I was able to create a counter to hold them.
			MakePurchase(bsmall, bmedium, blarge, bxxxs);
			bsmalltotal = bsmalltotal + bsmall;
			bmediumtotal = bmediumtotal + bmedium;
			blargetotal = blargetotal + blarge;
			bxstotal = bxstotal + bxxxs;

		}
		else if (userinput == "c" || userinput == "C") {
			DisplayPurchase(bsamount, bmamount, blamount,bxxxs);
		}
		else if (userinput == "t" || userinput == "T") {
			DisplayTotal(bsmalltotal, bmediumtotal, blargetotal, bxstotal);
		}
		else
			cout << "That wasn't a valid option, please try again." << endl;
		//Taking the users input again to restart the loop
		cout << "Please enter selection:  ";
		cin >> userinput;
	} while (userinput != "Q");
	// End of the do while loop
	cout << "Thank you for you business!" << endl;
	
}