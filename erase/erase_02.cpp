#include <string>
#include <iostream>

int main()
{
	std::string s{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

	std::cout << '|' << s << "|\n";
	s.erase(5, 7);  //erase 7 chars starting idx 5
	std::cout << '|' << s << "|\n";
}
