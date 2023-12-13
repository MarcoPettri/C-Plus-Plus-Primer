// Exercise 3.17
/*

	Read a sequence of words from cin and store the values a vector. After 
	you've read all the words, process the vector and change each word to uppercase.
	Print the transformed elements, eight words to a line
*/


#include<iostream>
#include<vector>
#include<string>
#include<cctype>

void to_upper(std::string&);
int main()
{

	std::vector<std::string> words;
	std::string word;

	std::cout << "--> ";

	while (std::cin >> word) {
		words.push_back(word);
		std::cout << "--> ";
	}

	for (auto& wrd : words) {

		to_upper(wrd);
	}
	
	for (auto& wrd : words) {
		std::cout << wrd << " ";
	}
}


void to_upper(std::string& str) {

	for (auto& ch : str) {

		int val{ static_cast<int>(ch) };

		if (val > 96 && val < 123) {
			ch = static_cast<char>(val - 32);
		}
		
	}
}