#include "pch.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main() {
	char x;
	vector<string> str_arr;
	string str_temp;
	ifstream file;
	ifstream file2;
	ofstream out_file;
	file.open("inputFile1.txt");
	file2.open("inputFile2.txt");
	out_file.open("outputFile.txt");

	while (file >> str_temp)
	{//Here I put the elements of the 1st txt file in the vector 'str_arr'
		str_arr.push_back(str_temp);
	}
	while (file2 >> str_temp) 
	{//Here I add the elements of the 2nd txt file to the vector 'str_arr' 
		str_arr.push_back(str_temp);
	}
	//Here we close the 2 files that contains the elements that we want to sort them.
	file.close();
	file2.close();

	cout << "Output file contains : " << endl << "  ";
	//Otherwise I do bubble sort. Here we use the <algorith> lib.
	sort(str_arr.begin(), str_arr.end());
	for (int i = 0; i < str_arr.size(); i++) {
		out_file << str_arr[i] << " ";
		cout << str_arr[i] << " ";
	}

	cout << endl << "Press Enter to Exit ...";

	out_file.close();
	
	cin >> x;

	return 0;
}