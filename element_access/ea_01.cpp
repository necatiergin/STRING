#include <string>
#include <iostream>

int main()
{
	std::string s{ "necati ergin" };

	for (size_t i{}; i < s.length(); ++i)
		std::cout << s[i] << ' ';

	std::cout.put('\n');
	s[0] = 's';
	s[2] = 'l';
	s[4] = 'm';

	for (size_t i{}; i < s.length(); ++i)
		std::cout << s[i] << ' ';
}
