#include <string>
#include <iostream>

int main()
{
	std::string name{ "kemal" };

	try {
		auto c = name.at(9); //throws std::out_of_range
	}
	//catch (const std::out_of_range& ex) {
	//catch (const logic_error& ex) {
	catch (const std::exception& ex) {
		std::cout << "exception caught: " << ex.what() << '\n';
	}
}
