#include<iostream>
using namespace std;
int main()
{

	const int size = 5;
	int bucky[size];
	int bucky2[size]; 
	int check;
	//input
	cout << "Enter the values for the 1st array!............" << endl;
	for (int itr = 0; itr < size; itr++)
	{
		cin >> bucky[itr];
	}
	cout << "Enter the values for the 2nd array!............" << endl;
	for (int itr = 0; itr < size; itr++)
	{
		cin >> bucky2[itr];
	}
	cout << "Enter the value that you want to check!............" << endl;
	cin >> check;
	//process
	cout << endl << endl << endl ;
	for (int itr = 0; itr < size; itr++)
	{
		if (check == bucky[itr])
		{
			cout << "the entered value that you wanted to check is in 1st array!............" << endl;
		}
	}
	for (int itr = 0; itr < size; itr++)
	{
		if (check == bucky2[itr])
		{
			cout << "the entered value that you wanted to check is in 2nd array!............" << endl;
		}
	}
	cout << endl;
	return 0;
}