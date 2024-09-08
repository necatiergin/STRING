#include <string>
#include <iostream>

void print(const std::string& s)
{
	std::cout << "len: " << s.length() << " cap : " << s.capacity() 
	<< " |"	<< s << "|\n";
}

int main()
{
	std::string s1(30, 'A');
	print(s1);
	std::string s2(50, 'B');
	s1.assign(s2);
	print(s1);
	s1.assign(s2, 40);
	print(s1);
	s1.assign(s2, 40, 4);
	print(s1);
	s1.assign(7, 'X');
	print(s1);
}
