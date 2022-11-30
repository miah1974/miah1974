// CE122_ASGN_07.cpp
// CE 122 Assignment #07 Solutions

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num1;
	int num2;
	int sum_even = 0;
	int sum_odd = 0;
	//int odd_count = 0;
	//int even_count = 0;
	//
	cout << "Enter the first integer: ";
	cin >> num1;
	cout << endl;
	//num1 = abs(num1);
	cout << "Enter the second integer: ";
	cin >> num2;
	cout << endl;
	//num2 = abs(num2);
	
	if (num1 >= num2)
	{
		cout << "Caution: first integer must be less than the second integer!" << endl;
		cout << "Exit the program now!" << endl;
		return 0;
	}
	cout << "First integer is less than the second integer." << endl;

	while (num1 <= num2)
	{
		if ((num1 % 2) != 0)
		{
			//odd_count = odd_count + 1;
			sum_odd = sum_odd + num1;
			cout << "Odd number: " << num1 << endl;
		}
		else if ((num1 % 2) == 0)
		{
			//even_count = even_count + 1;
			sum_even = sum_even + num1;
			cout << "Even number " << num1 << endl;
		}
		else
			cout << "Invalid entry!" << endl;

		num1 = num1 + 1;
	}

	//cout << "Number of even numbers: " << even_count << endl;
	cout << "Sum of all odd numbers: " << sum_odd << endl;
	//cout << "Number of odd numbers: " << odd_count << endl;
	cout << "Sum of all even numbers " << sum_even << endl;

	return 0;
}
