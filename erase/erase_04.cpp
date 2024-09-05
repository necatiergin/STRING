#include <string>
#include <iostream>

int main()
{
	std::string s{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

	std::cout << '|' << s << "|\n";
	s.erase(s.begin()); // erases the first char
	
	std::cout << '|' << s << "|\n";
}
