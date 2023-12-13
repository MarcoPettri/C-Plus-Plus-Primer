// Exercise 5.20
/*

		Write a program to read a sequence of strings from the standard input
		until either the same word occurs twice in succession or all the words have been read.
		Use a while loop to read the text one word at a time. Use the break statement to
		terminate the loop if a word occurs twice in succession. Print the word if it occurs
		twice in succession, or else print a message saying that no word was repeated.
*/


#include<iostream>

int main()
{


	std::string input;
	std::string temp{};

	std::cout << "-> ";

	while (std::cin >> input) {
		
		if (input == temp) { break; }

		temp = input;
	}

	std::cout << (input == temp ? input : "No word was repeated.") << std::endl;


	return 0;
}