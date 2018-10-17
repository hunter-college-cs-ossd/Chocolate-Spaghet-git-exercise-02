/******************************************************************************
  Title          : main.cpp
  Author         : Andrey Shtukenberg
  Created on     : October  17, 2018
  Description    : Displays random peculiar facts
  Purpose        : To exercise collaborative source code development
  Usage          : nuttyfact
  Build with     : g++ -Wall -g -o oddities  main.cpp
  Modifications  :
                    1. Added a function that streams out an intro
                    2. Added a function that prints out an oddity
  Notes:
  The number N below is the number of people on each team.
  This program prints N peculiar facts, called "oddities" here.
  The main program calls N functions, each with the syntax defined
  by the output_function typedef defined below. Each function must be
  named
       username_oddity

  where username is the GitHub username of its author.
  For example,
      output_function  stewartweiss_oddity;

  Oddities are found in the file "oddities.txt" in the project source directory

******************************************************************************/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <sstream>

using namespace std;

/******************************************************************************/

// The syntax of the output function that must be used to print an oddity.
typedef ostream& (*output_function) (ostream & out);

/******************************************************************************

                        All Function Definitions

******************************************************************************/

// Declaration of introduction function
ostream& intro_oddity (ostream &out);

// Declaration of oddity printing functions
ostream& chocolate_spaghet_oddity (ostream &out);
ostream& johncgenere_oddity(ostream &out);
ostream& gutierrezjdr_oddity(ostream &out);

int main(int argc, char* argv[] )
{

    // Calls to intro functions
    intro_oddity(cout);
    // Calls to oddity functions
    chocolate_spaghet_oddity(cout);
    johncgenere_oddity(cout);
    gutierrezjdr_oddity(cout);  
  
    return 0;
}

ostream& intro_oddity (ostream &out){
    out << "This is a collection of odd, but true facts." << endl << endl;
    return out;
}

ostream& chocolate_spaghet_oddity (ostream &out){
    out << "You know how most packages say \"Open here\". What is the protocol if the package says, \"Open somewhere else\"?" << endl;
    return out;
}

ostream& johncgenere_oddity(ostream &out){
    out << "Why do we drive on parkways and park on driveways?" << endl;
    return out;
}

ostream&gutierrezjdr_oddity (ostream & out)
{
	out<<"Why do they put Braille dots on the keypad of the drive-up ATM?"<<endl;
	
	return out;
} 
