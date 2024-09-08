#include <string>
#include <iostream>

void print(const std::string& s)
{
	std::cout << "len: " << s.length() << " cap : " << s.capacity() 
	<< " |"	<< s << "|\n";
}

int main()
{
	char str[] = "necati ergin";
	std::string s;
	//

	s = str;
	print(s);
	s.assign(str, str + 6);
	print(s);
	s.assign(str + 3, str + 6);
	print(s);
	s.assign(str, 4);
	print(s);
}
