#include <iostream>

int main() {
	int issue_dd = 0;
	int issue_mm = 0;
	int issue_yy = 0;

	int return_dd = 0;
	int return_mm = 0;
	int return_yy = 0;

	std::cin >> return_dd >> return_mm >> return_yy;
	std::cin >> issue_dd >> issue_mm >> issue_yy;


	if (return_yy > issue_yy) {
		std::cout << 10000 << std::endl;
	}
	else {
		if (return_yy == issue_yy && return_mm > issue_mm)
			std::cout << 500 * (return_mm - issue_mm) << std::endl;
		else if (return_yy == issue_yy && return_mm == issue_mm && return_dd > issue_dd)
			std::cout << 15 * (return_dd - issue_dd) << std::endl;
		else
			std::cout << 0 << std::endl;
	}

	return 0;
}
