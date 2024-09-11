#include <string>
#include <iostream>

int main()
{
	std::string str(10'000, 'a');

	std::cout << "length = " << str.length() << " capacity = " << str.capacity() << '\n';
	str.erase(50);
	std::cout << "length = " << str.length() << " capacity = " << str.capacity() << '\n';
	str.shrink_to_fit();
	std::cout << "length = " << str.length() << " capacity = " << str.capacity() << '\n';
}
