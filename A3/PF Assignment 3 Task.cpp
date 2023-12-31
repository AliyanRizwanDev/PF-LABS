#include<iostream>
using namespace std;

void regrowbyfactor(double *&bucky, int &size, int factor);
int main()
{
	int size=5, factor;
	double *bucky =new double[size];
	cout << "Enter the Elements of the array" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> bucky[i];
	}
	cout << "The current size of the array is " << size << endl;
	cout << "Enter the factor of the array of array by which you want to regrow = ";
	cin >> factor;
	regrowbyfactor(bucky, size, factor);
	for (int i = 0; i < size; i++)
	{
		cout << bucky[i] << endl;
	}
	return 0;
}
void regrowbyfactor(double *&bucky, int &size, int factor)
{
	int temp = size*factor;
	double *temparr = new double[temp];
	for (int i = 0; i < temp; i++)
	{
		temparr[i] = bucky[i];
	}
	delete[] bucky;
	size = temp;
	bucky = temparr;
	for (int i = 0; i < size; i++)
	{
		bucky[i] = temparr[i];
	}

}
