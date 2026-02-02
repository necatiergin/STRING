#include <string>
#include <iostream>
#include <vector>

int main()
{
	std::vector<char>cvec{ 66, 65, 66, 65 };
	std::string str{ cvec.begin(), cvec.end() }; //range ctor
	std::cout << str << '\n';
}
