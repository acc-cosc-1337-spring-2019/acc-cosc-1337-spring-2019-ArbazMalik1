#include "decisions.h"
#include <string.h>
//write include statement for decisions header



//Write code for function get_grade_points that accepts a string letter_grade and returns 
//the grade_points for as follows:
//given grade "A" returns 4
//given grade "B" returns 3
//given grade "C" returns 2
//given grade "D" returns 1
//given grade "F" returns 0
//another other value return -1


#include <iostream>
using namespace std;

	

int get_grade_points(string letter_grade)
{


	int ret_val;

	if (letter_grade == "A")
		ret_val = 4;
	else if (letter_grade == "B")
		ret_val = 3;
	else if (letter_grade == "C")
		ret_val = 2;
	else if (letter_grade == "D")
		ret_val = 1;
	else if (letter_grade == "F")
		ret_val = 0;
	else
		ret_val = -1;
	return(ret_val);
}

//Write a function prototype with name calculate_gpa that accepts an int named credit_hours and
//an double named credit_points.  




//Write code for function calculate_gpa that accepts an int named credit_hours and
//a double named credit_points.  The function returns the quotient of credit_points divided by
//credit_hours. In the function account for division by zero by returning a -1.
double calculate_gpa(int credit_hours, double credit_points)
{
	double quotient;

	if (credit_hours == 0)
		quotient = -1;
	else
		quotient = credit_points / credit_hours;

		return (quotient);
}