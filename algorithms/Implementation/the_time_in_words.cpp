#include <iostream>
#include <string>

int main() {
	std::string dict[] = {"one", "two", "three", "four", "five",
						  "six", "seven", "eight", "nine", "ten",
						  "eleven", "twelve", "thirteen", "fourteen", "quarter",
						  "sixteen", "seventeen", "eighteen", "nineteen", "twenty",
						  "twenty one", "twenty two", "twenty three", "twenty four", "twenty five",
						  "twenty six", "twenty seven", "twenty eight", "twenty nine"};

	int H = 0;
	int M = 0;

	std::cin >> H;
	std::cin >> M;

	if (M == 0)
		std::cout << dict[H - 1] << " o' clock" << std::endl;
	else if (M == 30)
		std::cout << "half past " << dict[H - 1] << std::endl;
	else if (M < 30)
		if (M == 1)
			std::cout << dict[M - 1] << " minute past " << dict[H - 1] << std::endl;
		else if (M == 15)
			std::cout << dict[M - 1] << " past " << dict[H - 1] << std::endl;
		else
			std::cout << dict[M - 1] << " minutes past " << dict[H - 1] << std::endl;
	else
		if (60 - M == 1)
			std::cout << dict[60 - M - 1] << " minute to " << dict[H] << std::endl;
		else if (60 - M == 15)
			std::cout << dict[60 - M - 1] << " to " << dict[H] << std::endl;
		else
			std::cout << dict[60 - M - 1] << " minutes to " << dict[H] << std::endl;

	return 0;
}
