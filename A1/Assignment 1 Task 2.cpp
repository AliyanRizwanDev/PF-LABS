#include <iostream>
using namespace std;

int main(void)
{
	int countDigit(long n);
	long n;
	cout << "Enter number = ";
	cin >> n;
	cout << "In this sentence there are total " << countDigit(n) << " digits";
	return 0;
}
int countDigit(long n)
{
	int iterator = 0;
	for (; n != 0;)
	{
		n = n / 10;
		iterator++;
	}
	return iterator;
}