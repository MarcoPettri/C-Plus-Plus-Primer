// Exercise 3.31
/*
	Write a program to define an array of ten ints. Give each element the
	same value as its position in the array.
*/


#include<iostream>

int main()
{
	constexpr int SIZE{ 10 };
	int arr[SIZE];

	for (int i{ 0 }; i < SIZE; ++i) {
		arr[i] = i;
	}

	for (int const& integ : arr) {
		std::cout << integ << " ";
	}

	
	return 0;
}