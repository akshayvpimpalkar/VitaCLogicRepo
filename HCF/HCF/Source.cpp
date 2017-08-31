#include <iostream>
using namespace std;

void main() {
	int num1, num2, min, c = 0;
	cout << "Enter num 1: " << endl;
	cin >> num1;

	
	cout << "Enter num 2: " << endl;
	cin >> num2;

	min = num1;
	if (num2 < min) {
		min = num2;
	}
	for (int i = 1; i <= min; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			c = i;
		}	
	}

	cout << "HCF of " << num1 << " and " << num2 << " is " << c << endl;


	//to check if both numbers are com-prime
	if (c == 1) {
		cout << num1 << " and " << num2 << " are co-prime numbers" << endl;
	}
}