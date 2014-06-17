//I affirm that all code given below was written solely by me, 
// Samantha Nix, and that any help I received adhered to the rules stated for this exam.

#include "Runner.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

	void sortPace(vector<Runner>&);//Function to place the runners into files based on pace

int main()
{
	vector<Runner> runners;//Creates a vector for the runners
	string firstname, lastname;
	int pace;
	fstream registrants("registrants.txt", ios::in);

	if (registrants.fail())
	{
		cout << "The file failed! :(" << endl;
	}

	while (registrants >> firstname >> lastname >> pace)
	{
		registrants >> firstname >> lastname >> pace;//Read in those values to the variables
		runners.push_back(Runner(firstname, lastname, pace));//Push back object that is created by constructor with the values the variables were just assigned to
	}
	sort(runners.begin(), runners.end()); //Sort the values in the array
	sortPace(runners); //Calls function to write the runners in the vector to text files
}


// function that sets the runner objects to the proper text file based on the pace
void sortPace(vector<Runner>& runners)
{
	fstream white("white.txt", ios::out); // create fstream objects for each color
	fstream yellow("yellow.txt", ios::out);
	fstream green("green.txt", ios::out);
	fstream orange("orange.txt", ios::out);
	fstream blue("blue.txt", ios::out);
	fstream lilac("lilac.txt", ios::out);
	fstream red("red.txt", ios::out);
	string first, last;
	int pace;
	for (int i = 0; i < runners.size(); i++)
	{
		first = runners[i].get_firstname(); // sets variable equal to the corresponding values for the specified object
		last = runners[i].get_lastname();
		pace = runners[i].get_pace();
		if (pace >= 0 && pace <= 360)
		{// pace parameters for white
			white << first << " " << last << " " << pace << endl;//Write values into the white text file
		}

		if (pace >= 361 && pace <= 420)
		{// pace parameters for yellow
			yellow << first << " " << last << " " << pace << endl;//Write values into the yellow text file
		}

		if (pace >= 421 && pace <= 480)
		{// pace parameters for green
			green << first << " " << last << " " << pace << endl;//Write values into the green text file
		}

		if (pace >= 481 && pace <= 540)
		{// pace parameters for orange
			orange << first << " " << last << " " << pace << endl;//Write values into the orange text file
		}

		if (pace >= 541 && pace <= 600)
		{// pace parameters for blue
			blue << first << " " << last << " " << pace << endl;//Write values into the blue text file
		}

		if (pace >= 601 && pace <= 720)
		{// pace parameters for lilac
			lilac << first << " " << last << " " << pace << endl;//Write values into the lilac text file
		}

		if (pace >= 721 && pace <= 1200)
		{// pace parameters for red
			red << first << " " << last << " " << pace << endl; //Write values into red text file
		}
	}

	white.close(); // closes fstream objects
	yellow.close();
	green.close();
	orange.close();
	blue.close();
	lilac.close();
	red.close();
}
