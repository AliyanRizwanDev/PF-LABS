#include<iostream>
using namespace std;
int main()
{
	const int Baka = 5;
	int Bucky[Baka];
	int Bucky2[Baka];
	for (int i = 0; i < 5; i++)
	{
		if (Bucky[i] == Bucky2[i])
			cout << "Enter the numbers =" ;
			cin >> Bucky[i];
	}
	for (int i = 0; i < 5; i++)
	{
		if (Bucky2[i] == Bucky2[i])
			cout << "Enter the numbers 2nd time =";
			cin >> Bucky[i];
	}
	for (int i = 0; i < 1; i++)
	{
		for (int itr = 0; itr < 5; itr++)
		{
			if (Bucky[itr] != Bucky2[itr])
			{
				cout << "arrays are not same " << endl;
				break;
			}
			
			else
			{
				cout << "arrays are same" << endl;
			}
		}
		
	}






	return 0;
}