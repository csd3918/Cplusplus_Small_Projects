#ifndef PCH_H
#define PCH_H

#include <iostream>
#include <string>


class Vector2 {

public:
	float vector[2];

	Vector2() {} // Here we make Vector2 as a const.//

			//In this block we initialize the Vector2 as vector[0],vector[1] variables.//
	Vector2(float _first, float _second) {
		vector[0] = _first;
		vector[1] = _second;
		
	}
	// In this block we overload the operator* so we can multiple vector with number.//
	Vector2& operator*(float y) {
		Vector2 result;
		result.vector[0] = vector[0] * y;
		result.vector[1] = vector[1] * y;
	  
		return result;
	}
	// In this block we overload the operator/ so we can divide vector with number.//
	Vector2& operator/(float y) {
		Vector2 result;
		result.vector[0] = vector[0] / y;
		result.vector[1] = vector[1] / y;
		

		return result;
	}
	// In this block we overload the operator+ so we can add the elements of 2 vectors.//
	Vector2& operator+(Vector2& y) {
		Vector2 result;
		result.vector[0] = vector[0] + y.vector[0];
		result.vector[1] = vector[1] + y.vector[1];

		return result;
	}
	// In this block we overload the operator- so we can subtract the elements of the second vector from the first vector.//
	Vector2& operator-(Vector2& y) {
		Vector2 result;
		result.vector[0] = vector[0] - y.vector[0];
		result.vector[1] = vector[1] - y.vector[1];

		return result;
	}
	// In this block we fill the prices to each element of the vector.//
	void populate_vector(float _first, float _second) {
		vector[0] = _first;
		vector[1] = _second;
	}
	// This block is for the process of the out multiple.//
	static Vector2& out_multiple(Vector2& one, Vector2& two) {
		Vector2 result;

		result.vector[0] = one.vector[0] * two.vector[0];
		result.vector[1] = one.vector[1] * two.vector[1];
	
		return result;
	}
	// In this block we overload the operator>> so the input takes the elements of the vectors seriatim.//
	friend std::istream& operator>> (std::istream& is, Vector2& x) {
		is >> x.vector[0];
		is >> x.vector[1];
		
		return is;
	}
	// In this block we overload the operator<< so the output prints the elements of the vector in this form : [v[0],v[1]].//
    friend std::ostream& operator<< (std::ostream& os, const Vector2& x) {
		os << "[" << x.vector[0] << ", " << x.vector[1] << "]";
		return os;
	}
};

#endif //PCH_H