#include <string>
#include <iostream>

int main()
{
	std::string s{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

	try {
		s.erase(30);
	}
	//catch (const std::out_of_range& ex) {
	//catch (const std::logic_error& ex) {
	catch (const std::exception& ex) {
		std::cout << "exception caught: " << ex.what() << '\n';
	}
}
