#include<iostream>
#include<iostream>
#include<fstream>
using namespace std;


int cstring(int first[8], int n){
	int k = 0;
	for (int i = 0; first[i] != NULL; i++)
	{
		k = k + 1;
		i++;
	}
}

int main()
{
	const int size = 8;
	char first[size] = { "t", "h", "e", "r", "e" };
	char second[size];
	int n = 0;
	cout << "Please enter your word = ";
	cin >> first;
	cout << "please enter the amount of numbers you want to repeat = ";
	cin >> n;
	int k = 0;
	k = k - 4;
	cout << k;



	return 0;
}