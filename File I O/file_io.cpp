#include <iostream>
#include <fstream>


using namespace std;

int main()
{   
	fstream file;
    file << "please enter two names." << endl;
    file.open("GameProg.txt", ios_base::in);

	if (file.is_open())
	{
		file << "Taurean Roberts" << endl;
	}

	else
	{
		cout << "An error has taken place \n";
	}
	file.close();
 



	system("pause");
}