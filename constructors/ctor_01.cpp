#include <string>
#include <iostream>

void print(const std::string& str)
{
	std::cout << "[" << str << "] [" << str.size() << "/" << str.capacity() << "]\n";
}

int main()
{
	//std::string s1; //default ctor
	//std::string s1{}; // default ctor
	std::string s1 = {}; //default ctor
	print(s1);
	std::string s2{ "necati ergin" };	 //c-string ctor
	print(s2);
	std::string s3{ s2 };  // copy ctor
	print(s3);
	std::string s4{ move(s3) };  // move ctor
	print(s3);
	print(s4);
}
