/*
  Solution for
  Solution for Richie Rich from HackerRank.com
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: July 20th, 2016
 */

#include <cstdio>
#include <string>
#include <iostream>

int diff_count(const std::string& line) {
	int s = 0;
	int e = line.size() - 1;

	int count = 0;
	while (s < e)
		if (line[s++] != line[e--])
			++count;

	return count;
}

void change_line(std::string& line) {
	int s = 0;
	int e = line.size() - 1;

	while (s < e) {
		if (line[s] != line[e])
			if (line[s] > line[e])
				line[e] = line[s];
			else
				line[s] = line[e];
		++s;
		--e;
	}
}

void change_more(std::string& line, int k, int count) {
	int s = 0;
	int e = line.size() - 1;

	while (s < e) {
#if 0
		printf("-------------------------------- start ------------------------------------------\n");
		printf("s == [%c] || e == [%c] || k == [%d] || count == [%d]\n", line[s], line[e], k, count);
		printf("-------------------------------- start ------------------------------------------\n");
#endif
		
		if (k > count) {
			if (k - 2 >= count) {
				if (line[s] == line[e] && line[s] != '9') {
					line[s] = line[e] = '9';
					k -= 2;
				}
			}

			if (k - 1 >= count) {
				if (line[s] != line[e] && (line[s] != '9' && line[e] != '9')) {
					line[s] = line[e] = '9';
					k -= 2;
					--count;
				}
			}

			if (line[s] != line[e]) {
				if (line[s] > line[e])
					line[e] = line[s];
				else
					line[s] = line[e];
				--k;
				--count;
			}
		} else {
			if (line[s] != line[e]) {
				if (line[s] > line[e])
					line[e] = line[s];
				else
					line[s] = line[e];
				
				--k;
				--count;
			}
		}

#if 0
		printf("-------------------------------- end   ------------------------------------------\n");
		printf("s == [%c] || e == [%c] || k == [%d] || count == [%d]\n", line[s], line[e], k, count);
		printf("-------------------------------- end   ------------------------------------------\n");		
#endif
		++s;
		--e;
	}

	if (k)
		line[line.size() / 2] = '9';
}

int main() {
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	std::cin.ignore();

	if (n == 1 && k == 1) {
		printf("9\n");
		return 0;
	}
		

	std::string line;
	std::getline(std::cin, line);

	const int count = diff_count(line);
	if (count == k) {
		change_line(line);
	} else if (count < k) {
		change_more(line, k, count);
	} else {
		line = "-1";
	}

	printf("%s\n", line.c_str());
	
	return 0;
}
