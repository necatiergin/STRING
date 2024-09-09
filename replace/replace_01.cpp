#include <iostream>
#include <string>

int main()
{
	std::string name{ "necati" };
	std::string surname{ "ergin" };

	std::cout << name << '\n';
	name.replace(1, 3, surname);
	std::cout << name << '\n';	//nerginti
}
