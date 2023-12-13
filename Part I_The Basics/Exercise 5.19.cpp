// Exercise 5.19
/*

		Write a program that uses a do while loop to repetitively request two
		strings from the user and report which string is less than the other.

*/


#include<iostream>
#include<string>


int main()
{
	
	std::string str1;
	std::string str2;

	std::cout << "String 1: ",
		std::cin >> str1;
		
	do {
		std::cout << "String 2: ",
			std::cin >> str2;


		auto result{ str1.compare(str2) };

		std::cout << "String 1 " << (!result ? "==" : result > 0 ? ">" : "<") << " String 2" << std::endl;

		std::cout << "\nString 1: ";

	} while (std::cin >> str1);


	return 0;
}