#include <string>
#include <iostream>

int main()
{
	std::string s("omer ");
	std::string name("faruk ");
	std::string town("ankara");

	char ar[]{ "sevgi" };

	std::cout << '[' << s << "]\n";
	s.append(name);
	std::cout << '[' << s << "]\n";
	s.append(ar, 3);
	std::cout << '[' << s << "]\n";
	s.append("can");
	std::cout << '[' << s << "]\n";
	s.append({ 'l', 'a', 'r' }).append(3, '.');
	std::cout << '[' << s << "]\n";

}
