#include <string>
#include <iostream>

// insert - iterator interface

int main()
{
	std::string s1{ "ABCDEF" };
	std::string s2{ "0123456789" };

	std::cout << s1 << '\n';
	
	s1.insert(s1.begin() + 3, s2.begin(), s2.end());
	std::cout << s1 << '\n';
}
