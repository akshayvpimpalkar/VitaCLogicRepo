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

	int n;
	if (rows % 2 == 0) { 
		n = (rows / 2) - 1;
	}
	else {
		n = rows / 2; // its the variable to indicate middle row value
	}
	 
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < c; j++) {
			if (j >= (n - k) && j <= (n + k)) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}

		if (rows % 2 == 0) {
			if (i < n) k++;
			if (i > n) k--;
		}
		else {
			i < n ? k++ : k--; //condition to vary the value of subtraction
		}
		
		cout << endl;
	}
    
	cout << "--------------------------------------------" << endl;

	/*
	The below is same but just using indices for i,j from 1 to number of rows 
	and columns respectively
	*/
	k = 0; //we have to reset k because we have changed it's value in above pattern

	int n1 = (rows + 1) / 2; //n1 is the middle index of the column for this pattern
	for (int i = 1; i <= rows; i++) {

		if (rows % 2 == 0) {
			if (i <= n1) k++;
			if (i > (n1+1)) k--;
		}
		else {
			i <= n1 ? k++ : k--; //condition to vary the value of subtraction
		}
		for (int j = 1; j <= c; j++) {
			if (j >= (n1+1 - k) && j <= (n1-1 + k)) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}


	return 0;
}

