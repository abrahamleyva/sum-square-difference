// Author: Abraham Medina
// Last Modified: 11/28/2016

#include <iostream>
using namespace std;

int main()
{
	// Initialize variables
	int sumOfSquares = 0;
	int squareOfSums = 0;
	
	for(int i = 1; i <= 100; i++) // Steps 1-100 for calculations
	{
		sumOfSquares += i * i; // Squares individual values then adds
		squareOfSums += i; // Adds 1-100
	}
	
	squareOfSums *= squareOfSums; // Squares sum of 1-100
	
	cout << "Difference: " << squareOfSums - sumOfSquares << endl;

	return 0;
}
