#include<iostream>
using namespace std;
//main code
int main()
{
	int threeDigitjoiner(int number3, int number2, int number1);
	int number1 = 0, number2 = 0, number3 = 0,num = 0;
	
	cout << "please enter your three digits  separately =";
	cin >> number1;
	cin >> number2;
	cin >> number3;
	
	cout << " joined numbers plus reversed " << threeDigitjoiner(number1, number2, number3)<<endl;
	return 0;
}
//function
int threeDigitjoiner(int number1, int number2, int number3)
{

	number3 *= 10;
	int num = number3 + number2;

	num *= 10;
	num = num + number1;
	return num;
}