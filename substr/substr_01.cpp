#include <string>
#include <iostream>

int main()
{
	std::string s{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

	std::cout << '|' << s << "|\n";
	std::cout << '|' << s.substr() << "|\n";
	std::cout << '|' << s.substr(0, std::string::npos) << "|\n";
}
