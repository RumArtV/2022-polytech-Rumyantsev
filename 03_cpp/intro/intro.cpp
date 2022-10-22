#include <iostream>

int main() {
    std::cout << "What's your name?";
	std::string username;
	std::cin >> username;
	std::cout << "Hello, " << username << "!" << std::endl;
	return 0;
}