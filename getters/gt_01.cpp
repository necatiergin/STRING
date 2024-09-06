#include <string>
#include <iterator>
#include <iostream>

int main()
{
	std::string s{ "ali ismail korkmaz" };

	auto sz1 = s.size();
	auto sz2 = size(s); //ADL (std::size since C++17)
	auto sz3 = ssize(s); //ADL (std::size since C++20)

	std::cout << sz1 << ' ' << sz2 << ' ' << sz3 << '\n';
}
