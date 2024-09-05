#include <string>
#include <iostream>

int main()
{
	std::string s{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

	std::cout << '|' << s << "|\n";
	std::cout << '|' << s.substr(0, 4) << "|\n";
	std::cout << '|' << s.substr(4, 4) << "|\n";
	std::cout << '|' << s.substr(8, 4) << "|\n";
}
