#include <iostream>
#include <string>

//starts_with since C++20

int main()
{
	std::cout << std::boolalpha;
	std::string name{ "necatiergin" };
	std::string s1{ "necat" };
	std::string s2{ "nebat" };

	std::cout << name.starts_with(s1) << '\n';
	std::cout << name.starts_with(s2) << '\n';
}
