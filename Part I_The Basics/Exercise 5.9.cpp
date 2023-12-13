// Exercise: 5.9
/*

		Write a program to count the number of
		vowels in text read from cin
*/

#include<iostream>
#include<cctype>
#include<map>

int main()
{

	std::map<char, int> counts{
		{'a', 0},
		{'e', 0},
		{'i', 0},
		{'o', 0},
		{'u', 0},
	};
	std::cout << "-> ";

	char vowel;

	while (std::cin >> vowel) {

		vowel = std::tolower(vowel);

		switch (vowel) {

		case 'a': case 'e': case 'i': case 'o': case 'u':
			counts[vowel]++;
			break;
			
		default:
			break;
		}
	}

	for (auto it = counts.cbegin(); it != counts.cend(); ++it) {
		std::cout << it->first << ": " << it->second << '\n';
	}

	return 0;
}