#include <iostream>
#include <string>
#include <cmath>

int main() {
	int A[26] = { 0 };
	int B[26] = { 0 };
	std::string S1;
	std::string S2;

	std::cin >> S1;
	std::cin >> S2;

	int deleted_chars = 0;
	for (std::size_t i = 0; i < S1.length(); ++i)
		A[S1[i] - 'a'] = A[S1[i] - 'a'] + 1;

	for (std::size_t i = 0; i < S2.length(); ++i)
		B[S2[i] - 'a'] = B[S2[i] - 'a'] + 1;

	for (int i = 0; i < 26; ++i)
		deleted_chars += std::abs(A[i] - B[i]);

	std::cout << deleted_chars << std::endl;

	return 0;
}
