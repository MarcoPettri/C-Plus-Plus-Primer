// Exercise 5.23
/*

		Write a program that reads two integers from the standard input and
		prints the result of dividing the first number by the second.
*/

//Exercise 5.24:
/* 
		Revise your program to throw an exception if the second number is
		zero.Test your program with a zero input to see what happens on your system if you
		don't catch an exception.
*/

// Exercise 5.25

/*

		Revise your program from the previous exercise to use a try block to
		catch the exception. The catch clause should print a message to the user and ask
		them to supply a new number and repeat the code inside the try.


*/



#include<iostream>
#include<stdexcept>

int main()
{

	std::cout << "Dividend: ";
	int numerator;

	while (std::cin >> numerator) {
		try {

			int denominator;


			std::cout << "Divisor: ",
				std::cin >> denominator;

			if (!denominator) { throw std::overflow_error("ZeroDivisionError"); }

			double result{ static_cast<double>(numerator) / denominator };
			std::cout << "Quotient: " << result << '\n';

			std::cout << "\nDividend: ";
		}

		catch (const std::overflow_error& err) { 
			std::cerr << err.what() << std::endl; 
			std::cout << "\nDividend: ";
		}

		catch (...) {
			std::cerr << "RuntimeError: Unknown" << std::endl;
			return -1; 
		}
	}

	

	return 0;
}