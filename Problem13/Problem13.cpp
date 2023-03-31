#include <iostream>

using namespace std;

int main()
{
	//Write a C++ program to print number of zeros of a series of 10 numbers entered by the user.
	
	int zeros = 0, n;

	cout << "Enter the numbers: " << endl;
	
	for (int i = 1; i <= 10; i++)
	{
		cin >> n;
		if (n == 0)
		{
			zeros += 1;
		}
	}
	cout << "NUmber fo zeros = " << zeros;

	return 0;
}