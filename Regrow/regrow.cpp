#include<iostream>
using namespace std;

void inputArray(int* ptr, int size)
{
	cout << "plz enter " << size << " elements: ";
	for (int i = 0; i < size; i++)
	{
		cin >> ptr[i];
	}
}

void printArray(int* ptr, int size)
{
	cout << "your elements: ";
	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] << " ";
	}
	cout << endl;
}

void regrowDouble(int* &ptr, int &size)
{
	int* temp = new int[size * 2];
	for (int i = 0; i < size; i++)
	{
		temp[i] = ptr[i];
	}
	delete[]ptr;
	ptr = temp;
	size = size * 2;

}

void regrow(int*& ptr, int& size)
{
	int* temp = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		temp[i] = ptr[i];
	}
	delete[]ptr;
	ptr = temp;
	size = size + 1;

}

void insert(int* &ptr, int& size, int val)
{
	regrow(ptr, size);
	ptr[size - 1] = val;
}

int main()
{
	int size = 10, val;
	int csize = 0;
	int* ptr = new int[size];
	inputArray(ptr, size);
	csize = size;
	printArray(ptr, size);
	cout << "plz enter new value: ";
	cin >> val;
	insert(ptr, size, val);
	cout << "size = " << size;
	printArray(ptr, size);
	return 0;
}