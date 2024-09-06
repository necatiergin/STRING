#include <string>
#include <iostream>

int main()
{
	std::string s(30, 'A');

	std::cout << "length = " << s.length() << " capacity = " << s.capacity() << '\n';
	s.append(400, 'B');
	std::cout << "length = " << s.length() << " capacity = " << s.capacity() << '\n';
}
