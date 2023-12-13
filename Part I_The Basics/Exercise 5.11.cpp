// Exercise 5.11
/*

		Modify our vowel-counting program so that it also counts the number
		of blank spaces, tabs, and newlines read
*/

#include<iostream>

int main() {

	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	unsigned spacesCnt = 0, tabsCnt = 0 ,newlinesCnt = 0;

	char ch;
	while (std::cin.get(ch)) {

		switch (ch) {
		case 'a':
		case 'A':
			++aCnt;
			break;

		case 'e':
		case 'E':
			++eCnt;
			break;

		case 'i':
		case 'I':
			++iCnt;
			break;

		case 'o':
		case 'O':
			++oCnt;
			break;

		case 'u':
		case 'U':
			++uCnt;
			break;

		case ' ':
			++spacesCnt;
			break;

		case '\t':
			++tabsCnt;
			break;

		case '\n':
			++newlinesCnt;
			break;
		}
	}

	std::cout << "Number of vowel a: \t" << aCnt << '\n'
		<< "Number of vowel e: \t" << eCnt << '\n'
		<< "Number of vowel i: \t" << iCnt << '\n'
		<< "Number of vowel o: \t" << oCnt << '\n'
		<< "Number of vowel u: \t" << uCnt << '\n'
		<< "Number of vowel spacesCnt: \t" << spacesCnt << '\n'
		<< "Number of vowel tabsCnt: \t" << tabsCnt << '\n'
		<< "Number of vowel newlinesCnt: \t" << newlinesCnt << std::endl;

	return 0;
}