//but : indendtifier si un nombre est a 5 chiffres
//Auteur : vincent lavoie whitlock
//date : 2021-09-02

#include <iostream>

void main(){
	int nb1;
	int nb;
	
	std::cout << "mettre un nombre a 5 chiffres ";
	std::cin >> nb1;
	if (nb1 <= 9999 || nb1 >= 100000) {
		std::cout << "le nombre na pas 5 chiffre ";
	}
	else {
		nb=nb1 % 10;
		std::cout << nb << "\n";
		nb=nb1/10 % 10;
		std::cout << nb << "\n";
		nb=nb1/100 % 10;
		std::cout << nb << "\n";
		nb=nb1/1000 % 10;
		std::cout << nb << "\n";

		nb=nb1/10000 % 10;
		std::cout << nb << "\n";
		}
	}
