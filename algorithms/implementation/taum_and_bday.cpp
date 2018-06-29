#include <iostream>

int main() {
	int T = 0;
	std::cin >> T;

	while (T--) {
		unsigned long long int B = 0;
		unsigned long long int W = 0;
		unsigned long long int X = 0;
		unsigned long long int Y = 0;
		unsigned long long int Z = 0;

		std::cin >> B >> W;
		std::cin >> X >> Y >> Z;

		const unsigned long long int t = X;
		if (Y + Z < X)
			X = Y + Z;
		if (t + Z < Y)
			Y = t + Z;

		std::cout << (B * X) + (W * Y) << std::endl;
	}

	return 0;
}
