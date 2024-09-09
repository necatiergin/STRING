#include <iostream>
#include <string>

//contains since C++23

int main()
{
	std::cout << std::boolalpha;
	std::string author{"ahmet hamdi tanpinar"};
	
	std::string name{ "hamdi" };
	std::cout << author.contains(name) << '\n';
}
