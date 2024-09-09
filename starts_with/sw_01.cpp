#include <iostream>
#include <string>

//starts_with since C++20

int main()
{
	std::cout << std::boolalpha;
	std::string name{ "necatiergin" };

	std::cout << name.starts_with("necati") << '\n';
	std::cout << name.starts_with("nedim") << '\n';
}
