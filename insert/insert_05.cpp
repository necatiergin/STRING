#include <string>
#include <iostream>

//fill insert with idx

int main()
{
	std::string s{ "gl" };

	std::cout << '|' << s << "\n";
	s.insert(1, 5, 'o');
	std::cout << '|' << s << "|\n";
}
