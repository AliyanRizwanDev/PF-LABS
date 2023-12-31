#include <iostream>
using namespace std;


int main()
{

	int number;
	int min, max;
	long sum = 0;
	int result = 0;

	cout << "Enter the minimum range: ";
	cin >> min;

	cout << "Enter the maximum range: ";
	cin >> max;
	result = add(min, max);
	

	cout << "Sum of odd numbers in given range is: " << result;

	return 0;

}
int add(int, int)
{
	int temp = 0, number, max, min;
	for (number = min; number <= max; number++)
	if (number % 2 != 0)
		temp = temp + number;

	return temp;
}