#include <iostream>
//write include statements
#include <loops.h>
#include <loops.cpp>
/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	char choice;
	int num;

	while (true)
	{
		std::cout << "Enter a number";
		std::cin >> num;

		factorial(num);

		std::cout << "Would you like to continue? (Y/N)";
		std::cin >> choice;
		if (choice == 'N' || choice == 'n')
		{
			break;
		}
	}
	return 0;
}