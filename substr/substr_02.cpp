#include <string>
#include <iostream>

int main()
{
	std::string s{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

	std::cout << '|' << s << "|\n";
	std::cout << '|' << s.substr(0, 5) << "|\n";
	std::cout << '|' << s.substr(0, 10) << "|\n";
	std::cout << '|' << s.substr(0, 15) << "|\n";
	std::cout << '|' << s.substr(0, 20) << "|\n";
}
