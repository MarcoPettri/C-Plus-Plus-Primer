// Exercise 6.25


/*

		Write a main function that takes two arguments. Concatenate the sup-
		plied arguments and print the resulting string.

*/

#include<iostream>
#include<string>

int main(int argc, char* argv[]) {


	if (argc > 1) {
		std::string str{};

		using std::literals::string_literals::operator""s;

		for (decltype(sizeof argv) i{ 1 }; i != argc; ++i) {
			str += argv[i] + " "s;
		}


		std::cout << str << std::endl;
	}
	else {

		std::cout << "Not arguments" << std::endl;
	}

	return 0;
}