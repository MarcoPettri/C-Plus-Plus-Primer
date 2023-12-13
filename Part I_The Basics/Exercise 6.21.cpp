// Exercise 6.21

/*

		Write a function that takes an int and a pointer to an int and returns
		the larger of the int value or the value to which the pointer points. 
*/


#include<iostream>


inline static int larger(int rhs, int const* lhs) { return rhs > *lhs ? rhs : *lhs; }

int main()
{
	int k{ 12 };
	int const j{ 89};


	const int *const jPtr{ &j };

	std::cout << larger(k, jPtr);




	return 0;
}
