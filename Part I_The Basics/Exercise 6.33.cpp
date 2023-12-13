// Exercise 6.33
/*

		Write a recursive function to print the contents of a vector.
*/


#include<iostream>
#include<vector>
#include<string>
#include<iterator>


typedef std::ostream_iterator<int> outInt;
typedef std::ostream_iterator<std::string> outStr;

template<class Input_it, class Out_It> inline 
Out_It print(Input_it first,  Input_it last, Out_It put) {


	if ((first +1) != last) {  print(first, last -1, put); }

	*put = *(last - 1);
	++put;

	return put;

}



int main()
{
	std::vector<int> vec_int{ 61, 85, 50, 58,  6, 27, 40, 10, 15, 51 };
	std::vector<std::string> vec_str{"The", "C++", "Programming", "Language"};

	print(vec_int.cbegin(), vec_int.cend(), outInt(std::cout, " "));
	
	std::cout.put('\n');

	print(vec_str.cbegin(), vec_str.cend(), outStr(std::cout, " "));




	return 0;
}