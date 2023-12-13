//	Exercise 6.10

/*
		Using pointers, write a function to swap the values of two ints. Test
		the function by calling it and printing the swapped values.
*/


#include<iostream>


void swap(int *const, int *const);

int main()
{

	int prime{ 13 };
	int prime2{ 15 };

	swap(&prime, &prime2);

	std::cout << "Prime 1: " << prime << "\nPrime 2: " << prime2 << std::endl;

	return 0;
}

void swap(int *const lhs, int *const rhs) {

	int temp{ *lhs };
	*lhs = *rhs;
	*rhs = temp;

}