#include <iostream>
using namespace std;

string ReadPassword()
{
	string Password;
	cout << "Please enter the password (ONLY CAPITAL LETTER): ";
	cin >> Password;

	return Password;
}

void PrintAllWordsFromAAAToZZZ(string Password)
{
	string word = "";
	int counter = 0;
	for (int i = 65; i <= 90; i++)
	{

		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				word = "";
				word += char(i);
				word += char(j);
				word += char(k);
				counter++;
				cout << "Trial [" << counter << "] : " << word << endl;;
				if(word==Password)
				{
					cout << "Password is " << word << endl;
					cout << "found after Trial(s) [" << counter << "]";
					return;
				}
			}
			
		}
		
	}
	cout << "Password not found within AAA to ZZZ range." << endl;
}


int main()
{	
	 PrintAllWordsFromAAAToZZZ(ReadPassword());
	return 0;

}