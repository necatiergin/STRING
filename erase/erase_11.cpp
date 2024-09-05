#include <string>
#include <iostream>

int main()
{
	std::string s{ "ali123mehmet4532sevim8734" };

	std::cout << '|' << s << "|\n";

	auto n = erase_if(s, [](char c) {return std::isdigit(c); });	  //since C++20

	std::cout << '|' << s << "|\n";
	std::cout << n << " chars erased\n";
}
