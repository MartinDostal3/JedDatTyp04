// JedDatTyp04.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;

int main()
{
	char x;
	cout << "Zadavej znaky * znamena konec: " << endl;
	cin >> x;
	bool jeLicha = false;

	while (x != '*' && !jeLicha)
	{
		cout << "\nZadany znak je: " << x << " a jeho ASCII kod: " << (int)x << "," << " predchazejici znak je: " << (char)(x - 1) << "," << " nasledujici znak je: " << (char)(x + 1) << endl;

		if (x >= '0' && x <= '9')
		{
			if (x % 2 != 0)
			{
				jeLicha = true;
			}
		}



		cin >> x;
	}
	if (jeLicha)
	{
		cout << "\nPosloupnost byla ukoncena protoze obsahovala lichou cifru." << endl << endl;
	}


}

