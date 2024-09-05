#include <string>
#include <iostream>

int main()
{
	std::string s{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

	std::cout << '|' << s << "|\n";
	s.erase();  //erase all chars
	//s.erase(0, std::string::npos);  //erase all chars

	std::cout << '|' << s << "|\n";
}
