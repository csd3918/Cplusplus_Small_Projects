#include <iostream>
#include "math.h"
#include <algorithm>
using namespace std;


bool syngrisi(int a, int b) {
	if (a > b) {
		return false;
	}
	else if (a <= b) {
		return true;
	}
}

int main() {
	int n=0,f=0,j=0;
	int sq = 0;
	char c;
	cout << "Give me the 'n'"<<endl;
	cin >> n;
	sq = (n*n);
	for (int i = 0; i < n; i++) {
		f += ((2*j) + 4);
		j++;
	}
	syngrisi(f,sq);
	cin >> c;
		return 0;
		system("pause");
}