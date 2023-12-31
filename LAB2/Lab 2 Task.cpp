#include<iostream>
using namespace std;
int main()
{
	const int arr = 20;
	char bucky[arr];
	char bucky2[arr];
	char bucky3[arr];
	cout << "Enter your first name = ";
	cin.getline(bucky, arr);
	cout << "Enter your Second name = ";
	cin.getline(bucky2, arr);
	
	for (int itr = 0; itr<20; itr++)
	{
		if (bucky[itr] = '\0')
		{
			break;
		}
		
			bucky3[itr] = bucky[itr];
		
		
	}
	
	cout << bucky3 << endl;



	return 0;
}