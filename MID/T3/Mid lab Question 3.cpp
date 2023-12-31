#include<iostream>
#include<fstream>

using namespace std;
void read(char bucky[], int size)
{
	ifstream fin;
	fin.open("input.txt");
	if (fin.is_open())
	{
		fin.getline(bucky, size);
	}
	else
	{
		cout << "file not found...!";
	}
	fin.close();
}
void word(char bucky[], int size)
{
	ofstream fout;
	fout.open("Word.txt");

	if (fout.is_open())
	{
		for (int i = 0; bucky[i] != '\0'; i++)
		{

			if (bucky[i] >= 65 && bucky[i] <= 90 || bucky[i] >= 97 && bucky[i] <= 122)
			{
				fout << bucky[i];
			}
			else if (bucky[i] == ' ')
			{
				fout << ' ';
			}
		}
	}
	fout.close();
}
void numeric(char bucky[], int size)
{
	ofstream fout;
	fout.open("Numeric.txt");

	if (fout.is_open())
	{
		for (int i = 0; bucky[i] != '\0'; i++)
		{

			if (bucky[i] >= 48 && bucky[i] <= 57)
			{
				fout << bucky[i];
			}
			else if (bucky[i] == ' ')
			{
				fout << ' ';
			}
		}
	}
	fout.close();
}
int main()
{
	const int size = 60;
	char bucky[size];
	read(bucky, size);
	word(bucky, size);
	numeric(bucky, size);
	return 0;
}
