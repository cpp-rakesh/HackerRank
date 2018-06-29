#include <cstdio>
#include <vector>

int main() {
	int N = 0;
	int K = 0;
	std::vector<std::vector<int> > chapters_list;
	scanf("%d %d", &N, &K);

	for (int i = 0; i < N; ++i) {
		int problems = 0;
		scanf("%d", &problems);

		int chapters = (problems % K) ? (problems / K) + 1 : problems / K;
		int porblem_index = 1;
		for (int j = 0; j < chapters; ++j) {
			std::vector<int> chapter;
			for (int k = 1; k <= K; ++k) {
				if (porblem_index > problems)
					break;
				chapter.push_back(porblem_index++);
			}
			chapters_list.push_back(chapter);
		}
	}

	int special_problems = 0;
	for (std::size_t i = 0; i < chapters_list.size(); ++i)
		for (std::size_t j = 0; j < chapters_list[i].size(); ++j)
			if (i + 1 == chapters_list[i][j])
				++special_problems;

	printf("%d\n", special_problems);
	return 0;
}
