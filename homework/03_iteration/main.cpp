#include <iostream>
#include "dna.h"

using std::cout;
using std::cin;
/*
Write code that prompts user to enter 1 for Get GC Content,
or 2 for Get DNA Complement.  The program will prompt user for a
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as
user enters a y or Y.
*/
int main()
{
	int menu_choice;
	char choice;

	do
	{
		double x;
		//	x = get_gc_content(5, "abc");

		get_reverse_string("abc");
		get_dna_complement("def");

	} while (choice == 'y' || choice == 'Y');

	return 0;
}

