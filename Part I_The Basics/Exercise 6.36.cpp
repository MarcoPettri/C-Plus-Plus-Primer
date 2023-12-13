// Exercise 6.36
/*
		Write the declaration for a function that returns a reference to an array
		of ten strings, without using either a trailing return, decltype, or a type alias.

*/


#include<iostream>
#include<string>


static std::string (&arrRef(std::string (&arg)[10])) [10] { return arg; }
 
int main()
{


	
	std::string myArr[10]{ "This", "is", "Array", "Of", "Teen", "String", "In", "C", "++"};



	for (const auto& str : myArr) {
		std::cout << str << " ";
	}

	arrRef(myArr)[0][0] = 't';

	std::cout << std::endl;
	for (const auto& str : myArr) {
		std::cout << str << " ";
	}

	return 0;
}