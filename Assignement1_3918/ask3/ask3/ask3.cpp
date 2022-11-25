#include "pch.h"
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	
	string s1,s2,flavorch;
	double avmoney, fmoney;
	double bofypk = 30, quantity = 0, bb = 0.8, wcr = 1, sm = 0.9, alm = 1.1, gmb = 0.7, p = 0.6;
	int int1 = 1; //int1 variable will be used for a 'try-catch' exception. If the user add a topping that costs more than the avilable money that have left.//
	char c1 = 'c';//c1 variable will be used for a 'try-catch' exception. If the user enters a string that that is no topping.//
	float f1 = 2.0f;
	int i = 0, mxt = 0;

	cout << "Welcome to the frozen yogurt order!\n" << "Please enter your money availability" << endl;
	cin >> avmoney; //Here you enter your available money
	cout << "Please submit your order when you are ready by typing: 'submit_order'" << endl;
	cout << "Enter the flavor of the frozen yogurt you like\n" << "The available flavors are:\nFresh_Strawberry\nMagadaskar_Vanilla\nCookies_&_Cream_Shake\nToasted_Coconut" << endl;
	
	cin >> flavorch; //In this input, you choose your flavor

	cout << "Enter the quantity in gram" << endl;
	cin >> quantity; //In this input, you enter the weight of the frozen yogurt you gonna get
	
	cout << "This is the prize list:\n Flavored Frozen Yogurt: 30$ per kilo." << endl;
	cout << "The toppings:\n 1. bluberries: 0.8$\n 2. Whipped Cream: 1$\n 3. Smarties: 0.9$\n 4. Almonds: 1.1$\n 5. Gummy bears: 0.7$\n 6. Peanuts:0.6$" << endl;
	
	cout << "Enter how many toppings (1 or 2) you want in your frozen yogurt." << endl;
	cin >> mxt;//Here you enter the number of the toppings you will add on your frozen yogurt
	
	cout << "You can add:\nblueberries by typing '+bb'\nwhipped cream by typing '+wcr'\nsmarties by typing '+sm'\nAlmonds by typing '+alm'\nGummy bears by typing '+gmb'\npeanuts by typing '+p'" << endl;

	fmoney = avmoney - (bofypk*quantity/1000);

	
	
	while (s1 != "submit_order") {
		
		  cout << "Enter the topping you want otherwise submit your order." << endl;
		  cin >> s1;
		  if (s1 != "submit_order") {
		    
			
			 if (fmoney - bb < 0 && fmoney - wcr < 0 && fmoney - sm < 0 && fmoney - alm < 0 && fmoney - gmb < 0 && fmoney - p < 0)
			 {
					cout << "The money that have left are not enough for adding something else." << endl;
			 }
			 
				
				try
				{
					if (s1 != "+bb" && s1 != "+wcr" && s1 != "+sm" && s1 != "+alm" && s1 != "+gmb" && s1 != "+p") throw(c1);
					for (i = 0; i = mxt; ++i) {
						if (s1 == "+bb") {
							if (fmoney - bb < 0)throw(int1);
							fmoney -= bb;
							s2 += " Bluberry ";
						}
						else if (s1 == "+wcr") {
							if (fmoney - wcr < 0)throw(int1);
							fmoney -= wcr;
							s2 += " Whipped cream ";
						}
						else if (s1 == "+sm") {
							if (fmoney - sm < 0)throw(int1);
							fmoney -= sm;
							s2 += " Smarties ";
						}
						else if (s1 == "+alm") {
							if (fmoney - alm < 0)throw(int1);
							fmoney -= alm;
							s2 += " Almonds ";
						}
						else if (s1 == "+gmb") {
							if (fmoney - gmb < 0)throw(int1);
							fmoney -= gmb;
							s2 += " Gummy bears ";
						}
						else if (s1 == "+p") {
							if (fmoney - p < 0)throw(int1);
							fmoney -= p;
							s2 += " Peanuts ";
						}
						cout << "Your order is: " << quantity << " gram " << flavorch << " Frozen Yogurt with" << s2 << endl;

						if (mxt == 2) {
							s2 += "and";
						}
						cout << "Your changes are: " << fmoney << endl;

						if (i == mxt) {
							//This if prints the warning to the user when he reaches the max toppings
							cout << "Now you have to submit your order." << endl;
						}
						cin >> s1;

						if (s1 == "submit_order") break;
					}
					 
			    }
				catch (char c1) //This 'catch' order is for invalid input.//
				{
					cout << "You entered unknown input." << endl;
					--i;
				}
				catch (int int1) //This 'catch' order is for negative value in the variable of the available money that have left.//
				{
					cout << "The money that have left are not enough to add this topping" << endl;
					--i;
				}
			 	
			 }
		  
	}
	return 0;
}