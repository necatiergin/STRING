#include <string>
#include <iostream>

// insert - iterator interface

int main()
{
	std::string s{ "ABCDEF" };

	std::cout << s << '\n';
	
	s.insert(s.begin(), '*');
	std::cout << s << '\n';
	s.insert(s.end(), '*');
	std::cout << s << '\n';
}
