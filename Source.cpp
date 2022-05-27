#include<iostream>
#include<vector> 

using namespace std;

int main() {

	vector<int>vector1;
	vector<int>vector2;

	vector1.push_back(10); vector1.push_back(20);

	cout << vector1.at(0) << " " 
		 << vector1.at(1) << endl;

	cout << "\nvector1: " <<vector1.size() << " bytes." << endl;

	vector2.push_back(100); vector2.push_back(200);

	cout << "\n" << vector2.at(0) << " "
				 << vector2.at(1) << endl;

	cout << "\nvector2: " << vector2.size() << " bytes." << endl;

	vector<vector<int>>vector_2d;

	vector_2d.push_back(vector1); vector_2d.push_back(vector2);

	cout << "\nvector_2d:" << endl;
	/*
	will output to the console:
	10, 20
	100, 200
	*/
	cout << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << "\n"
		 << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << endl;

	vector1.at(0) = 666;

	//cout << "\n" << vector1.at(0) << endl;

	cout << "\nvector_2d vector 1 [0, 0] should changed to 666 but doesn't:" << endl;

	cout << "\n" << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << "\n"
				 << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << endl;

	cout << "\nvector1 elements using vector1.at();" << endl;
	cout << vector1.at(0) << " "
		 << vector1.at(1) << endl;

	return 0;
} 