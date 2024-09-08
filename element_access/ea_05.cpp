#include <string>
#include <iostream>

int main()
{
	std::string name{ "serhan" };

	std::cout << name << '\n';

	name.front() = 'f';
	name.back() = 't';
	
	std::cout << name << '\n';
}
