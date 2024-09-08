#include <string>
#include <iostream>


int main()
{
	std::string s{ "short" };

	std::cout << '|' << s << "\n";
	s.insert(0, "life ");
	std::cout << '|' << s << "|\n";
	s.insert(5, "is ");
	std::cout << '|' << s << "|\n";
	s.insert(8, "very ");
	std::cout << '|' << s << "|\n";
}
