#include<iostream>
//write include statements
#include <decisions.h>
#include <decisions.cpp>
#include <string.h>
/*
In main write code to capture a letter_grade and credit_hours from the keyboard:


Grade   Credit Hours	grade_points   credit_points
A          3            4              12
B          3            3               9
C          3            2               6
-----------------------------------------------
           9                           27
After each user input convert the Grade to grade points by calling the get_grade_points function, and
keep a should calculate to 3.0, make sure to display it before program exits.
 running total for both credit_points and credit_hours.

Call the calculate_gpa function with its arguments.
The GPA
Display:
GPA 3.0

*/
int main() 
{
	char grade1, grade2, grade3;
	int grade_point1, grade_point2, grade_point3, credit_hour1, credit_hour2, credit_hour3, credit_point1, credit_point2, credit_point3;
	double hours_sum, points_sum;
	
	std::cout << "Hello";
	std::cout << "Enter a letter grade: ";
	std::cin >> grade1;
	
	std::cout << "Enter credit hour: ";
	std::cin >> credit_hour1;

	std::cout << "Enter a letter grade: ";
	std::cin >> grade2;

	std::cout << "Enter credit hour: ";
	std::cin >> credit_hour2;

	std::cout << "Enter a letter grade: ";
	std::cin >> grade3;

	std::cout << "Enter credit hour: ";
	std::cin >> credit_hour3;


	grade_point1 = get_grade_points(grade1);
	grade_point2 = get_grade_points(grade2);
	grade_point3 = get_grade_points(grade3);


	credit_point1 = credit_hour1 * grade_point1;
	credit_point2 = credit_hour2 * grade_point2;
	credit_point3 = credit_hour3 * grade_point3;

	hours_sum = credit_hour1 + credit_hour2 + credit_hour3;
	points_sum = credit_point1 + credit_point2 + credit_point3;

	std::cout << "Credit Hours Letter Grade Grade Points Credit Points";
	std::cout << credit_hour1 << "     " << grade1 << "     " << grade_point1 << "     " << credit_point1;
	std::cout << credit_hour2 << "     " << grade2 << "     " << grade_point2 << "     " << credit_point2;
	std::cout << credit_hour3 << "     " << grade3 << "     " << grade_point3 << "     " << credit_point3;
	std::cout << "-----------------------------------------------";
	std::cout << "        " << hours_sum << "         " << points_sum;
	return 0;
}