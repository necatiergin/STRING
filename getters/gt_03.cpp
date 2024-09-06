#include <string>
#include <iostream>

int main()
{
	std::string s{ "vulnerant omnes, ultima necat." };

	boolalpha(std::cout);
	std::cout << "size     = " << s.size() << '\n';
	std::cout << "length   = " << s.length() << '\n';
	std::cout << "empty    = " << s.empty() << '\n';

	s = {};

	std::cout << "size     = " << s.size() << '\n';
	std::cout << "length   = " << s.length() << '\n';
	std::cout << "empty    = " << s.empty() << '\n';
}
