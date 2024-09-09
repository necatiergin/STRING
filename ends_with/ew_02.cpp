#include <iostream>
#include <string>

//ends_with since C++20

int main()
{
	std::cout << std::boolalpha;
	std::string name{ "necatiergin" };

	std::cout << name.ends_with("gin") << '\n';
	std::cout << name.ends_with("cin") << '\n';
}
