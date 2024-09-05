#include <string>
#include <iostream>

int main()
{
	std::string s{ "ankara kahramanmaras adana" };

	std::cout << '|' << s << "|\n";
	auto n = erase(s, 'a');	  //since C++20

	std::cout << '|' << s << "|\n";
	std::cout << n << " chars erased\n";
}
