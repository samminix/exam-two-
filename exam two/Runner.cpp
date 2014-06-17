//I affirm that all code given below was written solely by me, 
// Samantha Nix, and that any help I received adhered to the rules stated for this exam.

#include "Runner.h"
#include <fstream>

Runner::Runner(string fname, string lname, int Pace) //constructor
{
	firstname = fname;
	lastname = lname;
	pace = Pace;
}

string Runner::get_firstname() 
{ 
	return firstname; //returns persons first name
}
string Runner::get_lastname()
{ 
	return lastname;  //returns persons last name
}
int Runner::get_pace() 
{ 
	return pace; //returns persons pace
}

bool Runner::operator<(Runner& runner) //compares pace of two runners
{
	return (pace < runner.get_pace() );
}