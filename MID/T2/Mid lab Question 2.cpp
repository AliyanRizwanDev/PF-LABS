#include<iostream>
#include<fstream>
using namespace std;
int numberCheck(int arr[100], int i, int updated_array[100]);
int main()
{
	ifstream input;
	input.open("input.txt");
	ofstream output;
	output.open("output.txt");
	int arr[100];
	int i = 0;
	while (!input.eof())
	{
		input >> arr[i];
		i++;
	}
	int updated_array[100];

	int count = numberCheck(arr, i, updated_array);

	for (int i = 0; i < count; i++)
		output << updated_array[i] << " ";

	return 0;
}

int numberCheck(int arr[100], int i, int updated_array[100])
{
	int count = 0;

	for (int j = 0; j < i; j++)
	{
		int number = arr[j];
		int last_digit = 0;
		int first_digit = arr[j] % 10;
		while (arr[j] > 0)
		{
			arr[j] /= 10;
			if (arr[j] <= 0)
				break;
			last_digit = arr[j] % 10;
		}
		if (last_digit == first_digit)
		{
			updated_array[count] = number;
			count++;
		}
	}
	return count;
}