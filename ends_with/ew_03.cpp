#include <iostream>
#include <string>

//starts_with since C++20

int main()
{
	std::cout << std::boolalpha;
	std::string name{ "necatiergin" };
	std::string s1{ "ergin" };
	std::string s2{ "erkan" };

	std::cout << name.ends_with(s1) << '\n';
	std::cout << name.ends_with(s2) << '\n';
}
