//Exercise 4.6
/*

	Write an expression to determine whether an int value is even or odd.

*/

#include<iostream>


inline bool isEven(int arg) { return not(arg % 2); }


int main()
{

	int n{ 33 };
	int n2{ 22 };

	std::cout << n << " is " << (isEven(n) ? "even" : "odd") << std::endl;
	std::cout << n2 << " is " << (isEven(n2) ? "even" : "odd") << std::endl;

	return 0;
}