#include <string>
#include <iostream>

int main()
{
	std::string s{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

	std::cout << '|' << s << "|\n";
	s.erase(s.begin(), s.begin() + 10); // erases the first 10 char's
	
	std::cout << '|' << s << "|\n";
}
