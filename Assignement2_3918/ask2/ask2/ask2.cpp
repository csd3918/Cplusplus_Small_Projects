#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s1) {
	
	for (int i = 0; i <= s1.length() - 1; i++)
	{//With this 'for' loop we scan the input string.//
// In this 'íf'you check if the element in i position is the same with the element in the lenth-i position.//
		if (s1[i] != s1[s1.length() - 1 - i])
		{
			return false;
		}
		else 
		{
			return true;
		}
	}
}
int main()
{
	string word;
	
	cout << "Enter the string." << endl;
	cin >> word;	//Here we input the testing string.//
	// In this if we pass the string 'word' from the function, and we check if it is Palindrome or not.//
	if (isPalindrome(word))
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	return 0;
}