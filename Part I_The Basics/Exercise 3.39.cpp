// Exercise 3.39
/*

		Write a program to compare two strings. Now write a program to
		compare the values of two C-style character strings.

*/

#include<iostream>
#include<string>

bool compare_Cstring(char[], char[]);

int main()
{
	std::string str1{ "String STD" };
	std::string str2{ "String std" };


	std::cout << str1 << " and " << str2 << " are "
		<< (str1 != str2 ? "not " : "") << "equal\n\n";
	

	char str3[]{ "Character string" };
	char str4[]{ "Character string" };

	std::cout << str3 << " and " << str4 << " are "
		<< (compare_Cstring(str3, str4) ? "" : "not")
		<< "equal" << std::endl;


	return 0;
}

bool compare_Cstring(char rhs[], char lhs[]) {

	char* it1{ &rhs[0]};
	char* it2{ &lhs[0]};


	while (*it1 != '\0' && *it2 != '\0') { 

		if (*it1++ != *it2++) 
		{ return  false; } 
	}
	
	
	return (*it1 == '\0' && *it2 == '\0' ? true : false);

}