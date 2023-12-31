#include <iostream>
using namespace std;
void toggle(char bucky[]);
int main()
{
	int const size = 50;
	char bucky[50];
	
	
	cout << "Enter the String in uppercase: ";
	cin.getline(bucky,49);

	toggle(bucky);
	
	return 0;
}

void toggle(char bucky[])
{


	for (int i = 0; i <= 49; i++)
	{

		if (bucky[i] >= 65 && bucky[i] <= 90)
		{
			bucky[i] = bucky[i] + 32;
		}
		else if (bucky[i] >= 97 && bucky[i] <= 122)
		{
			bucky[i] = bucky[i] - 32;
		}
	}
	cout << " your new string/array is =  " << bucky;

}