#include <iostream>
#include <fstream>
using namespace std;
void converter(char arr[], int size)
{
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	int num = 0;
	cout << "Enter key : ";
	cin >> num;
	fin.getline(arr, size);
	fout.open("output.txt");
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] >= 65 && arr[i] <= 9)
		{
			arr[i] = arr[i] + num;
		}
		else if (arr[i] >= 97 && arr[i] <= 122)
		{
			arr[i] = arr[i] + num;
		}
	}
	fout << arr << endl;
	fout.close();
}
int main()
{
	const int size = 100;
	char arr[size];
	int num;
	converter(arr, size);

	return 0;
}