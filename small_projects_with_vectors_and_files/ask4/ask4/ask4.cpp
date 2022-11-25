#include "pch.h"


int main()
{
	Vector2 tmp, tmp1, tmp2;
	
	float x = 0;
	
	std::cin >> tmp1 >> tmp2;// Here is the input of the 2 Vectors.//

	// operator + test//
	tmp = tmp1 + tmp2;
	std::cout << "Vector 1 + Vector2 = " << tmp <<std::endl;

	// operator - test//	
	tmp = tmp - tmp2;
	std::cout << "Vector 1 - Vector2 = " << tmp << std::endl;

	// operator * test//
	tmp = tmp * 3;
	std::cout << "Vector 1 * 3 = " << tmp << std::endl;

	// operator / test//
	tmp = tmp / 2;
	std::cout << "Vector 1 / 2 = " << tmp << std::endl;

	// out multiple//
	tmp = Vector2::out_multiple(tmp1, tmp2);
	std::cout << "Vector 1 * Vector2 = " << tmp << std::endl;

	return 0;
}

