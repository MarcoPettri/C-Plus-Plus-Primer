// Exercise 3.35
/*


	Using pointers, write a program to set the elements in an array to zero
*/

#include<iostream>

int main()
{
	constexpr int SIZE{ 20 };

	int integers[SIZE];

	int* begin{ &integers[0] };
	int* end{   &integers[SIZE] }; 

	for (int* it{ begin };  it != end; ++it) {
		*it = 0;
	}


	for(const int& num: integers) {
		std::cout << num << " ";
	}

	return 0;
}