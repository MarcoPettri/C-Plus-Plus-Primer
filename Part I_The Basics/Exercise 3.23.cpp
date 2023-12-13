// Exercise 3.23

/*
	Write a program to create a vector with ten int elements. Using an
	iterator, assign each element a value that is twice its current value. Test your program
	by printing the vector.

*/

#include<iostream>
#include<vector>


int main()
{

	std::vector<int> vec{ 
		573,  553,  572,  789, 1090,
		275, 1412, 1213, 1481, 1557 
	};

	std::cout << "Before\n";
	for (const auto& elem : vec) { std::cout << elem << " "; }
	

	for (std::vector<int>::iterator it{ vec.begin() };
		it != vec.end(); ++it) { 
		
		*it *= 2;
	}

	std::cout << "\n\nAfter" << std::endl;
	for (const auto& elem : vec) { std::cout << elem << " "; }


	return 0;
}