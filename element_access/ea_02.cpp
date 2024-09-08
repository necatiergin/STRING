#include <string>

int main()
{
	const std::string s{ "kaya" };

	auto c = s[0];
	s[0] = 'm'; //invalid
}
