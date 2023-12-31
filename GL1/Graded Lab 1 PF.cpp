#include<iostream>
#include<fstream>
using namespace std;
int main()
{

	const int Array = 1000;
	char Bucky[Array];
	int words = 0;
	int i = 0;


	ifstream file_input;
	file_input.open("input.txt");

	if (file_input.is_open())
	{
		while (!file_input.eof())
		{
			file_input >>Bucky[i];
			i++;
			words++;
		}
		int itr = 0;
		while ( itr <= words)
		{

			cout << Bucky[itr];
			itr++;
		}

		
	}
	file_input.close();

	return 0;
}