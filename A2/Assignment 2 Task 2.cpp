#include<iostream>
#include<fstream>
using namespace std;

//function
void input(ifstream& fin, int* py, int size)
{
	int itr2 = 0;
	while (itr2 < size)
	{
		fin >> py[itr2];
		itr2++;
	}
}



//main 
int main()
{
	int highest(int arr[], int n);
	int const size = 50;
	int arr[size], initial = 0, finalValue = 0, *ptr, result;
	ifstream fin("data.txt");
	ptr = arr;
	input(fin, ptr, 10);

	cout << " Enter the starting point = ";
	cin >> initial;

	cout << "end:";
	cin >> finalValue;
	ptr = &arr[initial];
	
	result = highest(ptr, finalValue);
	cout << " Your maximum value is as following = " << endl;
	cout << result << endl;

	return 0;
}


//function
int highest(int arr[], int n)
{
	int i;

	int max = arr[0];

	for (i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
