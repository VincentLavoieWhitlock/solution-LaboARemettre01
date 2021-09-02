//but:un programme qui détermine si un entier est pair ou impair
//auteur : Vincent lavoie Whitlock
//Date : 2021-09-01

#include <iostream>;

void main() 
{
	int nb1;
	std::cout << "enter un nombre";
	std::cin >> nb1;
	if (nb1 % 2 == 0)
	{
		std::cout<< nb1 << " est un nombre pair";
	}
	else
	{
		std::cout << nb1 << " est un nombre impair";
	}
}