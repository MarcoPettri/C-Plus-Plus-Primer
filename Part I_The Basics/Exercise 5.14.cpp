// Exercise 5.14
/*

			Write a program to read strings from standard input looking for duplicated words.
			The program should find places in the input where one word is followed immediately by itself. 
			Keep track of the largest number of times a single repetition occurs and which word is repeated.
			Print the maximum number of duplicates, or
			else print a message saying that no word was repeated. For example, if the input is

						how now now now brown cow cow

			the output should indicate that the word now occurred three times.
*/

#include<iostream>
#include<map>
#include<string>


int main()
{
	std::map<std::string, int> words_cnt;
	std::string word;

	std::cout << "-> ";

	while (std::cin >> word) {

		words_cnt[word]++;
	}

	for (auto it{ words_cnt.cbegin() }; it != words_cnt.cend(); ++it) {

		if (it->second > 1) {
			std::cout << it->first << ": " << it->second << '\n';
		}
	}
	

	return 0;
}