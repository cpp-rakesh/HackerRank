#include <iostream>
#include <string>

int main() {
	int V[26] = { 0 };
	std::string S;
	std::cin >> S;

	bool is_found = true;
	for (std::size_t i = 0; i < S.length(); ++i)
		V[S[i] - 'a'] = V[S[i] - 'a'] + 1;

	int odd_count = 0;
	for (int i = 0; i < 26; ++i)
		if (V[i] % 2)
			++odd_count;

	if (odd_count > 1)
		std::cout << "NO" << std::endl;
	else
		std::cout << "YES" << std::endl;

	return 0;
}
