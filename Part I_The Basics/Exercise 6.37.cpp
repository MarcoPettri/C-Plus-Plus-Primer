//Exercise 6.36
/*

	Write three additional declarations for the function in the previous exercise.
	One should use a type alias, one should use a trailing return, and the third
	should use decltype.
*/


#include<string>

typedef std::string StrArray[10];

// Type Alias
static std::string (&arrRef1(StrArray &arg)) [10] { return arg; }


// Trailing return
static auto arrRef2(StrArray& arg) -> std::string(&)[10] { return arg; }

//  Decltype
StrArray MyArr;

static decltype(MyArr) &arrRef3(StrArray &arg)  { return arg; }