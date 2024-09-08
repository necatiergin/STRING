#include <string>

int main()
{
	std::string name{ "kemal" };

	auto c = name[9]; //ub (doesn't throw an exception)
}
