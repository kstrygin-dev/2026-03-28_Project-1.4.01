#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int chislo;
	int sum;
	sum = 0;
	
	do {
		std::cout << "¬ведите целое число или число '0', чтобы закончить: " << std::endl;
		std::cin >> chislo;
		sum += chislo;
	} while (chislo != 0);
	std::cout << "—умма: " << sum;
	
	return EXIT_SUCCESS;
}