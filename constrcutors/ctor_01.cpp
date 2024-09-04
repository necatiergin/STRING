#include <string>
#include <iostream>

void print(const std::string& str)
{
	std::cout << "[" << str << "] [" << str.size() << "/" << str.capacity() << "]\n";
}

int main()
{
	using namespace std;

	//string s1; //default ctor
	//string s1{}; // default ctor
	string s1 = {}; //default ctor
	print(s1);
	string s2{ "necati ergin" };	 //c-string ctor
	print(s2);
	string s3{ s2 };  // copy ctor
	print(s3);
	string s4{ move(s3) };  // move ctor
	print(s3);
	print(s4);
}
