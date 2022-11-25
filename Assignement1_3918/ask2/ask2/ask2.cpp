#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1;
	vector<int>::iterator it;
	char c1 = 'c';
	int j;
	int el = 0;
	float f1 = 2.0;
	double d1=1.2;	

	while (c1 != 'q') {

		try {
			cout << "Choose which of this action you want to do.\n1. Adding an element in the Vector by typing 'l'\n2. Deleting an element of the Vector by typing 'd'\n3. Print the elements of the Vector by typing'p'\n4. Quit Program by typing 'q'" << endl;
			
			cin >> c1;
			if (c1 != 'l' && c1 != 'd' && c1 != 'p' && c1 != 'q') throw(d1);
			if (c1 == 'l')
			{
				cin >> el;
				v1.push_back(el);
				cout << "The element added succesfully." << endl;
			}
			else if (c1 == 'd')
			{
				cout << "Enter the place in the queue that the element you want delete, exists. The 1st element is element #0" << endl;

				for (it = v1.begin(); it != v1.end(); ++it)
				{
					cout << *it << "\t";
				}
				cin >> j;
				if (j > sizeof v1 || j < 0) throw (f1);
				v1[j] = NULL;
				
			}
			else if (c1 == 'p')
			{
				for (it = v1.begin();it != v1.end(); ++it)
				{
					cout << *it << "\t";
				}
				cout << "\n";
			}
		}
		catch (double d1){

			cout << "Wrong input! Please enter the action you want to do." << endl;		     
		}
		catch (float f1) {
			cout << "This element does not exists. Please the element you want to delete." << endl;
			cin >> j;
		}
	}
	return 0;
}