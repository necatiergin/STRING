#include <string>
#include <iostream>

void print(const std::string& str)
{
	std::cout << "[" << str << "] [" << str.size() << "/" << str.capacity() << "]\n";
}

int main()
{
	//std::string s1('a'); //invalid - no ctor. with char param.
	std::string s2(65, 'A'); //fill ctor
	print(s2);
	std::string s3{ 65, 'A' }; //init_list ctor
	//std::string s3 = { 65, 'A' }; //init_list ctor
	print(s3);
}
