#include <string>
#include <iostream>

int main()
{
	std::string s1{ "ABCDEF" };
	std::string s2{ "TUVWXYZ" };
	
	std::cout << '|' << s1 << "|\n";
	
	s1 += 'G';	 //appends a char
	
	std::cout << '|' << s1 << "|\n";
	
	s1 += "HIJKLMNOP"; //appends a cstring
	
	std::cout << '|' << s1 << "|\n";
	
	s1 += {'Q', 'R', 'S' }; //appends an init.list
	
	std::cout << '|' << s1 << "|\n";
	
	s1 += s2;  //appends a std::string
	
	std::cout << '|' << s1 << "|\n";
}
