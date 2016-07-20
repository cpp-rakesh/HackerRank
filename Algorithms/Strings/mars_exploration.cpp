/*
  Solution for Mars Exploration from HackerRank.com
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: July 20th, 2016
 */

#include <iostream>
#include <string>

int compare_message(const std::string& message) {
	int radiated_count = 0;
	if (message[0] != 'S')
		++radiated_count;
	if (message[1] != 'O')
		++radiated_count;
	if (message[2] != 'S')
		++radiated_count;
	
	return radiated_count;
}

int main() {
	std::string message;
	std::getline(std::cin, message);
	
	int radiated_count = 0;
	for (std::size_t i = 0; i < message.size(); i += 3)
		radiated_count += compare_message(message.substr(i, 3));

	std::cout << radiated_count << std::endl;
	
	return 0;
}
