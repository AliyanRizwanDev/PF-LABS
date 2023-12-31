#include<iostream>
using namespace std;
//separator
int threeDigitseperator(int& number, int& number1, int& number2, int& number3)
{


	number3 = number % 10;

	number2 = (number / 10) % 10;
	number1 = number / 100;

	return number, number1, number2, number3;
}



// main code
int main()
{
	int number = 0;
	int number1 = 0;
	int number2 = 0;
	int number3= 0;
	int countDigit(int number);
	cout << "Please ente a number consisting of three digits make sure it is non negative = ";
	cin >> number;
	cout << endl;
	if (number>=0)
	{
		cout << "Number of digits entered are as following " << endl<<endl; 
		cout << countDigit(number) << endl << endl; 
		threeDigitseperator(number, number1, number2, number3);
		cout << " The Seperated Digits are as following "<<endl;
		cout << number1 << endl;
		cout << number2 << endl;
		cout << number3 << endl;
	}
	else
	{
		cout << "Please Enter correct value!...........";
	}
	return 0;
}


//counter
int countDigit(int number)
{
	int i = 0;
	for (; number != 0; i++)
	{
		number = number / 10;

	}
	return i;
}