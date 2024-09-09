#include <iostream>
#include <string>

//contains since C++23

int main()
{
	std::cout << std::boolalpha;
	std::string name{ "necatiergin" };
	
	std::cout << name.contains("tier") << '\n';
	std::cout << name.ends_with("atik") << '\n';
}
