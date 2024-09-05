#include <string>
#include <iostream>

int main()
{
	std::string s{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

	std::cout << '|' << s << "|\n";
	s.clear(); // erases all chars

	std::cout << '|' << s << "|\n";
}
