#include <string>
#include <iostream>

void print(const std::string& str)
{
	std::cout << "[" << str << "] [" << str.size() << "/" << str.capacity() << "]\n";
}

int main()
{
	std::string s1{ "life is very short and there's no time for fussing and fighting my friend" }; //cstring ctor
	print(s1);
	std::string s2{ s1, 23 }; //sub-string ctor
	print(s2);
	std::string s3{ s1, 8, 10 }; //sub-string ctor
	print(s3);
}
