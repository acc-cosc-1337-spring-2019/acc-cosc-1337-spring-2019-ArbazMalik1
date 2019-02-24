#include "vectors.h"

#include <vector>
/*
Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/


#include <iostream>



using namespace std;

int main()
{

	const int n = 50;
	int x = 0;
	int max;
	bool flag;
	vector<int> myvec;
	vector<int> myvector{ 11, 2, 13, 44, 5, 46, 37, 8, 49, 10 };


	/* part 1*/

	vector_of_primes(n, myvec);


	/* Part 2*/
	for (auto value = myvector.begin(); value != myvector.end(); ++value)
	{
		flag = is_prime(*value);

		if (flag == true)
			cout << *value << " is a prime number\n";
		else
			cout << *value << " is not a prime number\n";
	}

	/* part 3*/

	max = get_max_from_vector(myvector);
	cout << "maxvalue  =  " << max;

	cin >> x;


	return 0;
}
