#include <iostream>
#include <string>

int main()
{
	std::string s1{ "ABCDEFGH" };
	std::string s2{ "0123456789" };

	std::cout << s1 << '\n';
	s1.replace(2, 5, s2, 3, 4);
	std::cout << s1 << '\n';   //AB3456H
}
