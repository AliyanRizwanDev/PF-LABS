#include<iostream>
using namespace std;
int main()
{
	for (int row = 0; row < 5; row++)
	{
		cout << endl;
		for (int column	 = 0; column < 5; column++)
		{
			cout << (row*column) + (row + column) <<"\t";
		}
	}
	return 0;
}