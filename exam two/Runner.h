//I affirm that all code given below was written solely by me, 
// Samantha Nix, and that any help I received adhered to the rules stated for this exam.

#ifndef _RUNNER_H_
#define _RUNNER_H_

#include <iostream>
#include <string>
using namespace std;

class Runner
{
private:
	string firstname;
	string lastname;
	int pace;

public:
	Runner(string fname, string lname, int Pace);

	string get_firstname();
	string get_lastname();
	int get_pace();
	bool operator< (Runner&);
};


#endif _RUNNER_H_