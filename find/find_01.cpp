#include <string>
#include <iostream>

int main()
{
	std::string town{ "kahramanmaras" };

	std::cout << town << '\n';
	if (auto idx = town.find('a'); idx != std::string::npos) {
		std::cout << "found idx = " << idx << '\n';
		town[idx] = '!';
		std::cout << town << '\n';
	}

	if (auto idx = town.find('a', 5); idx != std::string::npos) {
		std::cout << "found idx = " << idx << '\n';
		town[idx] = '!';
		std::cout << town << '\n';
	}

	if (auto idx = town.rfind('a'); idx != std::string::npos) {
		std::cout << "found idx = " << idx << '\n';
		town[idx] = '!';
		std::cout << town << '\n';
	}

	if (auto idx = town.rfind('a', 10); idx != std::string::npos) {
		std::cout << "found idx = " << idx << '\n';
		town[idx] = '!';
		std::cout << town << '\n';
	}
}
