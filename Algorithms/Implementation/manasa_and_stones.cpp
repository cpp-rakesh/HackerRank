#include <iostream>

int min(const int A, const int B) {
	return A < B ? A : B;
}

int max(const int A, const int B) {
	return A > B ? A : B;
}

int main() {
	int T = 0;
	std::cin >> T;

	while (T--) {
		int S = 0;
		std::cin >> S;

		S--;

		int IA = 0;
		int IB = 0;

		std::cin >> IA;
		std::cin >> IB;

		const int A = min(IA, IB);
		const int B = max(IA, IB);

		const int D = B - A;
		int I = A * S;
		const int M = B * S;

		if (A == B) {
			std::cout << I << std::endl;
		}
		else {
			while (I <= M) {
				std::cout << I << " ";
				I += D;
			}
			std::cout << std::endl;
		}
	}

	return 0;
}
