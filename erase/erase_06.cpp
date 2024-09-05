#include <string>
#include <iostream>

int main()
{
	std::string s{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

	std::cout << '|' << s << "|\n";
	s.erase(5, std::string::npos); // erases all chars starting from idx 5

	std::cout << '|' << s << "|\n";
}
