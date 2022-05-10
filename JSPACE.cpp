#include <iostream>
#include <string>
using namespace std;

int main() {
	string napis;
	while (getline(cin, napis))
	{
		bool spacja = false;
		string nowe = "";
		for (int i = 0; i < napis.length(); i++)
		{
			if (napis[i] != ' ')
			{
				if (spacja == true)
				{
					if (napis[i] >= 'a' && napis[i] <= 'z')
					{
						nowe += napis[i] - 32;
					}
					else
					{
						nowe += napis[i];
					}
					spacja = false;
				}
				else
				{
					nowe += napis[i];
				}
			}
			else
			{
				spacja = true;
			}
		}
		cout << nowe<< endl;
	}

	return 0;
}