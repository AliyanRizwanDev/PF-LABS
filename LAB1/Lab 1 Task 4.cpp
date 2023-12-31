#include<iostream>
using namespace std;
int main()
{
	const int size = 5;
	int bucky[size];
	int index;
	cout << "enter the values for array =" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> bucky[i];
	}
	
	cout << "Enter index to delete= ";
	cin >> index;
	for (int i = index; i < size - 1; i++)
	{
		bucky[i] = bucky[i + 1];
	}
	cout << "your Altered Array is as following!............"<< endl;
	for (int itr = 0; itr < 4; itr++)
	{
		cout << bucky[itr] << endl;
	}
	




	return 0;
}