#include<iostream>
using namespace std;
int main()
{
	const int Baka = 5;
	int Bucky[Baka];
	int Bucky2[Baka];
	int Bucky3[Baka] = {0};
	for (int i = 0; i < 5; i++)
	{
			cout << "Enter the numbers for first array =";
		cin >> Bucky[i];
	}
	for (int i = 0; i < 5; i++)
	{
			cout << "Enter the numbers for 2nd array =";
		cin >> Bucky2[i];
	}

	for (int i = 0; i < 1; i++)
	{
		for (int itr = 0; itr < 5; itr++)
		{
			if (Bucky[itr] == Bucky2[itr])
			{
				Bucky3[itr] = Bucky[itr];
			}
		}

		for (int i = 0; i < 5; i++)
		{
			cout << Bucky3[i] << endl;
		}
		
	}
	
	return 0;
}