#include <string>
#include <iostream>

int main()
{
	std::string s{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

	std::cout << '|' << s << "|\n";
	s = {}; //erase all chars

	std::cout << '|' << s << "|\n";
}
