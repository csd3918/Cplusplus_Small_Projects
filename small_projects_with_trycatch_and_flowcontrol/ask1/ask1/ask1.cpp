#include "pch.h"
#include <iostream>

using namespace std;

int armath;
double synolo = 0;
double mo;
double tmp = 0;


int main()
{
	cout << "PLease enter the sum of subjects that you have passed." << endl;
    try {
		cin >> armath;
		
		
		for (int i = 0; i != armath; ++i) {
			cin >> tmp;

			if (tmp < 5 )throw 'y';
			if (tmp > 10)throw 'w';

			synolo += tmp;
		}


	}
	catch (int y) {
		cout << "The subject is not passed if the grade is under 5..." << endl;
		
	}		
	catch (char w) {
		cout << "You cant have a subject with grade over 10..." << endl;
	}

	mo = (synolo / armath);

	cout << mo << " ";
	if (mo >= 5 && mo < 7.5) {
		cout << "Pass" << endl;
	}
	else if (mo >= 7.5 && mo < 8.5) {
		cout << "Pass with Credit" << endl;
	}
	else if (mo >= 8.5 && mo <= 10) {
		cout << "Pass with Distinction" << endl;
	}
	return 0;
}
