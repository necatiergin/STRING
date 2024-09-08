#include <string>
#include <iostream>

int main()
{
	std::string name{ "bjarne stroustup" };

	std::cout << name << '\n';

	for (auto iter = name.cbegin(); iter != name.cend(); ++iter)
		std::cout << *iter;

	std::cout << '\n';

	for (const char c : name)
		std::cout << c;

	std::cout << '\n';
}
