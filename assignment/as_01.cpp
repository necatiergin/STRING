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
	std::string s2(50, 'B');
	print(s1);
	s1 = s2;
	print(s1);
	s1 = "necati";
	print(s1);
	s1 = { 'e', 'r', 'g', 'i', 'n' };
	print(s1);
	s2 = std::move(s1);
	print(s1); // moved-from state
}
