#include "vectors.h"
#include <iostream>
#include <vector>



using namespace std;


/*
Write a value return function get_max_from_vector with a const reference
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/
int get_max_from_vector(std::vector<int> vec)

{
	int max;

	for (int i = 0; i < vec.size(); i++)
	{

		if (vec[0] < vec[i])
			max = vec[i];
	}

	return max;
}


/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/

/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current
number is prime.
*/

bool is_prime(int num)
{
	bool flag = true;
	for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
			flag = false;
			break;
		}
	}
	return flag;

}

void vector_of_primes(int n, vector<int> vec)//pass by reference

{

	int  num, i, j, count;

	cout << "Vector = ";
	for (num = 1; num <= n; num++) {
		count = 0;
		for (i = 2; i <= num / 2; i++) {
			if (num%i == 0) {
				count++;
				break;
			}
		}

		if (count == 0 && num != 1)
		{
			vec.push_back(num); // store prime num
		}

	}

	//	for (auto it = vec.begin(); it != vec.end(); ++it)
	//		cout << ' ' << *it;
	// or i can print as following
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";

	cout << endl;


}
