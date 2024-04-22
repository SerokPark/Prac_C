#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::string name;
	int age;

	std::cout << "insert your name :\n";
	std::cin >> name;

	std::cout << "insert your age :\n";
	std::cin >> age;

	std::cout << "Hello!" << name << ". (" << age << ")";

	return 0;
}