#include <string>
#include <iostream>

int main()
{
	std::string name{ "necatiergin" };

	std::cout << '|' << name << "|\n";
	name.resize(6);
	std::cout << '|' << name << "|\n";
	name.resize(0);
	std::cout << '|' << name << "|\n";
}
