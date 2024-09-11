#include <string>
#include <iostream>

int main()
{
	std::string name{ "necatiergin" };

	while (!name.empty()) {
		std::cout << name << '\n';
		name.pop_back();
	}
}
