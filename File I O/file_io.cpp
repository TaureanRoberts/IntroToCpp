#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	file.open("GameProg.txt", ios_base::out | ios_base::_Nocreate);
	fstream file;
    cout << "please enter two names." << endl;

	if (file.is_open())
	{
		file << "Taurean Roberts \n";

	}

	else
	{
		cout << "An error has taken place \n";
	}
	file.close();
 

	system("pause");
}