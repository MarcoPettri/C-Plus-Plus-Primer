// Exercise 6.54, 6.55, 6.66
/*
		Exercise 6.54: Write a declaration for a function that takes two int parameters and
		returns an int, and declare a vector whose elements have this function pointer type.

		Exercise 6.55: Write four functions that add, subtract, multiply, and divide two int

		values. Store pointers to these functions in your vector from the previous exercise.
		Exercise 6.56: Call each element in the vector and print their result.

*/

#include<iostream>
#include<vector>
#include<cassert>


static inline int add(int augend, int addend) { return augend + addend; }
static inline int substract(int minuend, int substraend) { return minuend - substraend; }
static inline int multiply(int multiplier, int multiplicand) { return multiplier * multiplicand; }
static inline int divide(int dividend, int divisor) { assert(divisor); return dividend / divisor; }
static inline int mod(int num1, int num2) { assert(num2); return num1 % num2; }

typedef int (*FunPtr)(int, int);

int main()
{

	std::vector<FunPtr> vect_FP{ &add, &substract, &multiply, &divide, &mod };
	const std::vector<char>  operations{ '+', '-', '*', '/', '%' };

	int num1{ 34 };
	int num2{ 12 };


	auto vectFP_beg{ vect_FP.cbegin() };
	auto vectFP_end{ vect_FP.cend() };

	auto operat_beg{ operations.cbegin() };
	auto operat_end{ operations.cend() };


	while (vectFP_beg != vectFP_end && operat_beg != operat_end) {

		FunPtr functPtr{ *vectFP_beg++ };

		std::cout << num1 << " " 
			<< *operat_beg++ << " " 
			<< num2 << " = "
			<< (*functPtr)(num1, num2) << '\n';

	}





	return 0;
}