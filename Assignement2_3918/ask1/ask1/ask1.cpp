#include "pch.h"
#include <iostream>

using namespace std;

int power(int base, int exponent) {
	if (exponent == 0) {
		// This case is for when the exponent becomes 0 the function stops call herself.//
		return 1;
	}
	else
	{
		// Here is the recursion. The function is calling herself and it reduces every time the exponent by 1.//
		return (base * power(base, exponent - 1));
	}
}

int main()
{
	int base = 5, exponent = 4;
	cout << "5^4=" << power(base, exponent);
	return 0;
}