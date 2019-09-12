// ConsoleCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
	// Print to the console.
    cout << "Calculator Console Application\n";
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b\n";

	double x, y, result = 0.0;
	char oper = '+';

	Calculator calculator;

	while (true)
	{
		// Receive input from the user.
		cin >> x >> oper >> y;

		if (oper == '/' && y == 0)
		{
			cout << "Division by 0 exception\n";
			continue;
		}
		else
		{
			result = calculator.Calculate(x, oper, y);
		}

		cout << "Result is: " << result << "\n";
	}
}