// StarDiamond.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int rows, c;
	cout << "Enter height of diamond: ";
	cin >> rows;

	c = rows; //rows and columns are same
	int k = 0; //this to vary the value of subtraction before and after the middle of diamond
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < c; j++) {
			if (j >= (rows/2 - k) && j <= (rows/2 + k)) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		i < (rows/2) ? k++ : k--; //condition to vary the value of subtraction
		cout << endl;
	}
    return 0;
}

