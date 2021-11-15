//Programmer: Joshua Lindquist
//Program: The Letter Counter
//Description: This program will take a file from the user and determine how many vowels are in it as well as the amount of each vowel.


#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <sstream>
#include <cstring>

using namespace std;

int main(int argc, char* argv[]) {
	cout << setw(66) << setfill('*') << left << "\r"
		<< setw(12) << setfill('*') << left << "\n"
		<< left << " Welcome to my Letter Count Program " << right << setw(19) << "\n"
		<< setw(66) << "\n"
		<< endl;
	if (argc < 2)
	{
		std::cout << "Error with input.." << endl;
		return 1;
	}
	//for (int i = 0; i < argc; i++) {
		//std::cout << i << ":" << argv[i] << endl;

	//}
	//Opening the file
	std::ifstream inFile;
	inFile.open(argv[1], 1);
	if (!inFile)
	{
		std::cout << "Error with file name.." << endl;
		return 1;
	}
	//Declaring Variables
	int acount = 0, icount = 0, ecount = 0, ocount = 0, ucount = 0, vcount = 0, scount = 0, tcount = 0, hcount = 0;

	std::stringstream strStream;
	strStream << inFile.rdbuf();
	std::string str = strStream.str();
	//Declaring i varible for the array
	int i = 0;
	//Printing notice of file analysis
	std::cout << "Analyzing file " << argv[1] << "..." << "\n" << endl;
	//Giving the array its length
	const char* con_array = str.c_str();
	// The loop for counting the amount of vowels
	for (size_t i = 0; i < str.length(); i++)
	{
		if (con_array[i] == 'a') {
			acount = acount + 1;
		}
		else if (con_array[i] == 'A') {
			acount = acount + 1;
		}
		else if (con_array[i] == 'e') {
			ecount = ecount + 1;
		}
		else if (con_array[i] == 'E') {
			ecount = ecount + 1;
		}
		else if (con_array[i] == 'i') {
			icount = icount + 1;
		}
		else if (con_array[i] == 'I') {
			icount = icount + 1;
		}
		else if (con_array[i] == 'o') {
			ocount = ocount + 1;
		}
		else if (con_array[i] == 'O') {
			ocount = ocount + 1;
		}
		else if (con_array[i] == 'u') {
			ucount = ucount + 1;
		}
		else if (con_array[i] == 'U') {
			ucount = ucount + 1;
		}
		else if (con_array[i] == 'T') {
			tcount = tcount + 1;
		}
		else if (con_array[i] == 't') {
			tcount = tcount + 1;
		}
		else if (con_array[i] == 's') {
			scount = scount + 1;
		}
		else if (con_array[i] == 'S') {
			scount = scount + 1;
		}
		else if (con_array[i] == 'h') {
			hcount = hcount + 1;
		}
		else if (con_array[i] == 'H') {
			hcount = hcount + 1;
		}


		
	}
	//Adding the vowels up and printing the outputs
	vcount = acount + ecount + icount + ocount + ucount;
	cout << setfill('.');

	cout << setw(56) << left << "The number of A's are:" << setw(13) << right << acount << endl;
	cout << setw(56) << left << "The number of E's are:" << setw(13) << right << ecount << endl;
	cout << setw(56) << left << "The number of I's are:" << setw(13) << right << icount << endl;
	cout << setw(56) << left << "The number of O's are:" << setw(13) << right << ocount << endl;
	cout << setw(56) << left << "The number of U's are:" << setw(13) << right << ucount << endl;
	cout << setw(56) << left << "The number of T's are:" << setw(13) << right << tcount << endl;
	cout << setw(56) << left << "The number of S's are:" << setw(13) << right << scount << endl;
	cout << setw(56) << left << "The number of H's are:" << setw(13) << right << hcount << endl;
	cout << setw(56) << left << "The Vowel count is:" << setw(13) << right << vcount << endl;
	//Closing the file
	inFile.close();
	return 0;
}