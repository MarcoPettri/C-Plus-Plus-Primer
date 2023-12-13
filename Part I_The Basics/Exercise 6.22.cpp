// Exercise 6.22
/*

		Write a function to swap two int pointers
*/


namespace { 
	void swap(int *const rhs, int *const lhs) {
		
		int temp{ *rhs };  
		*rhs = *lhs;
		*lhs = temp;
	}
}


#include<iostream>


int main()
{

	int  num1{ 123 };
	int  num2{ 44 };

	int *const num1Ptr{ &num1 };
	int *const num2Ptr{ &num2 };

	std::cout << "Num1: " << num1 << "\nNum2: " << num2 << '\n';

	swap(num1Ptr, num2Ptr);
	std::cout << "\nNum1: " << num1 << "\nNum2: " << num2 << std::endl;

	return 0;
}