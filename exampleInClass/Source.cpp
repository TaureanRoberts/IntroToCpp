#include <iostream>


float HalfValue(float a)
{
	float halfLife = a / 2;
	return halfLife;
}

int main()
{
	std::cout << HalfValue(4) << std::endl;


	system("pause");
}