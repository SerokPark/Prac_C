#include <iostream>
#include <vector>
#include <string>

int main()
{
	int age;
	std::cout << "insert your age :\n";
	std::cin >> age;

	if (age >= 1 && age <= 7)
	{
		std::cout << "Baby";
	}
	else if (age >= 8 && age <= 13)
	{
		std::cout << "Elementary school student";
	}
	else if (age >= 14 && age <= 16)
	{
		std::cout << "Middle school student";
	}
	else if (age >= 17 && age <= 19)
	{
		std::cout << "High school student";
	}
	else if (age >= 20 && age <= 199)
	{
		std::cout << "Adult";
	}
	else 
	{
		std::cout << "Die";
	}

	return 0;


}