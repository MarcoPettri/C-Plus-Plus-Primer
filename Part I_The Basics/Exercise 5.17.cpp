// Exercise 5.17
/*


		Given two vectors of ints, write a program to determine whether
		one vector is a prefix of the other. For vectors of unequal length, compare the num-
		ber of elements of the smaller vector. For example, given the vectors containing 0,
		1, 1, and 2 and 0, 1, 1, 2, 3, 5, 8, respectively your program should return true.
*/

#include<iostream>
#include<vector>

typedef std::vector<int> VectorInt;


bool isPrefix(VectorInt const&, VectorInt const&);


int main() {

	VectorInt superset{
		9, 140, 165, 104, 128, 142,  71,  94,  28, 140, 
		2, 177,  28, 112,  52, 124, 117, 154, 145, 160
	};

	VectorInt subset{
		9, 140, 165, 104, 128, 142,  71,  94,  28, 140,
	};

	std::cout << "Superset contains subset: " << std::boolalpha
		<< isPrefix(subset, superset) << std::endl;



	return 0;
}

bool isPrefix(VectorInt const& sub, VectorInt const& super) {


	decltype(sub.size())  end;

	if (auto subSize = sub.size(), superSize = super.size(); subSize == superSize) { return false; }
	else if (subSize < superSize) { end = subSize; }
	else { end = superSize; }

	for (auto begin{ 0 }; begin != end; ++begin) {

		if (sub.at(begin) != super.at(begin)) { return false; }
	}

	return true;
	
		 
}