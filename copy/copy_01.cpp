#include <iostream>
#include <string>

int main()
{
	char buf[20];

	std::string name{ "necati ergin" };

	auto n = name.copy(buf, 20);
	buf[n] = '\0';

	std::cout << buf;
}
