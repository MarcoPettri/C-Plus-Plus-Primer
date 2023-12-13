// Exercise 6.27
/*

		Write a function that takes an initializer_list<int> and pro-
		duces the sum of the elements in the list.
*/

#include<iostream>
#include<initializer_list>
#include<numeric>


namespace {
	int sum(std::initializer_list<int> arg) {
		return std::accumulate(arg.begin(), arg.end(), 0);
	}
}



int main()
{

	std::cout << sum({ 57, 65, 46, 42, 67, 49, 10, 56, 47, 34 });

	return 0;
}
