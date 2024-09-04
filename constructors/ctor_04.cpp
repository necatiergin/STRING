#include <string>
#include <iostream>

void print(const std::string& str)
{
	std::cout << "[" << str << "] [" << str.size() << "/" << str.capacity() << "]\n";
}

int main()
{
	char buffer[] = { "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz" };

	std::string s1(buffer); //c-string ctor
	print(s1);
	std::string s2(buffer, buffer + 10); //range ctor
	print(s2);
	std::string s3(buffer + 10, buffer + 36); //range ctor
	print(s3);
	std::string s4(buffer, 10); //data ctor
	print(s4);
	std::string s5(buffer + 36, 5); //data ctor
	print(s5);
	//string s6(buffer, 500); //data ctor - ub
}
