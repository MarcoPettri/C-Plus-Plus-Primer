// Exercise 3.10
/*
	Write a program that reads a string of characters including punctuation
	and writes what was read but with the punctuation removed.
*/

#include<iostream>
#include<string>
#include<cctype>


int main()
{
	std::string str;
	std::string newStr;

	std::cout << "Enter the string: ";
	std::getline(std::cin, str, '\n');

	for (auto it{ str.cbegin() }; it != str.cend(); ++it) {

		if (not std::ispunct(*it)) {
			newStr.push_back(*it);
		}
	}
	std::cout << "string without punctuation: " << newStr << std::endl;
}