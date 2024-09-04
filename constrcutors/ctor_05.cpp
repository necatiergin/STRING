#include <string>
#include <iostream>

int main()
{
	//std::string s1 = 'A'; //error
	std::string s2(1, 'A'); //fill ctor
	std::string s3{ 'A' }; // init list ctor
	std::string s4{ "A" }; // c-string ctor
	std::cout << s2 << s3 << s4;
}
