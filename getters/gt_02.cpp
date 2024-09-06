#include <string>
#include <iostream>

int main()
{
	std::string s{ "quod timeas citius quam, quod speres evenit" };

	for (std::size_t idx{}; idx < s.size(); ++idx)
		std::cout << s[idx] << ' ';
}
