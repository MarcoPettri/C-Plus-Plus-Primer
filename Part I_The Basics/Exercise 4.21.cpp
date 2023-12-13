// Exercise 4.21 
/*
		Write a program to use a conditional operator to find the elements in a
		vector<int> that have odd value and double the value of each such element.
*/


#include<iostream>
#include<vector>

typedef std::vector<int> Integers;

int main()
{
	Integers integers{
		60, 51, 22,  1, 72, 47, 96, 82, 61, 91,
		20, 48, 15,  2, 56, 52, 68, 31, 69, 15,
		85, 26, 92, 97, 79, 50, 98, 97, 28, 74
	};


	for (int& integ : integers) {
		
		std::cout << (integ & 1 ? integ *= 2 : integ)
			<< (integ != integers.back() ? ", " : "\n");
	}

	return 0;
}