/*
  Solution for Maxmium Parameter Triangle problem
  Author : Rakesh Kumar, cpp.rakesh@gmail.com
  Date: October 5th, 2016
*/

#include <cstdio>
#include <vector>

template <typename T>
void Merge(std::vector<T>& list, int start, int mid, int end) {
    std::vector<T> left;
    std::vector<T> right;

    for (int i = start; i <= mid; ++i)
        left.push_back(list[i]);
    for (int i = mid + 1; i <= end; ++i)
        right.push_back(list[i]);

    int left_iter = 0;
    int right_iter = 0;
    int iter = start;

    while (left_iter < left.size() && right_iter < right.size())
        if (left[left_iter] < right[right_iter])
            list[iter++] = left[left_iter++];
        else
            list[iter++] = right[right_iter++];

    while (left_iter < left.size())
        list[iter++] = left[left_iter++];
    while (right_iter < right.size())
        list[iter++] = right[right_iter++];
}

template <typename T>
void MergeSort(std::vector<T>& list, int start, int end) {
    if (start < end) {
        const int mid = (start + end) / 2;
        MergeSort<unsigned long>(list, start, mid);
        MergeSort<unsigned long>(list, mid + 1, end);
        Merge<unsigned long>(list, start, mid, end);
    }
}

int main() {
    int n = 0;
    scanf("%d", &n);

    std::vector<unsigned long> lengths;
    while (n--) {
        unsigned long length = 0;
        scanf("%lu", &length);
        lengths.push_back(length);
    }

    MergeSort<unsigned long>(lengths, 0, lengths.size() - 1);

    unsigned long perimeter = 0;
    int start_index = -1;
    int j = lengths.size() - 1;
    for (std::size_t i = 0; i < i + 2 < j; ++i, --j) {
        if (lengths[i] + lengths[i + 1] > lengths[i + 2]) {
            const unsigned long p = lengths[i] + lengths[i + 1] + lengths[i + 2];
            if (p > perimeter) {
                perimeter = p;
                start_index = i;
            }
        }
        if (lengths[j - 2] + lengths[j - 1] > lengths[j]) {
            const unsigned long p = lengths[j] + lengths[j - 1] + lengths[j - 2];
            if (p > perimeter) {
                perimeter = p;
                start_index = j - 2;
            }
        }
    }
    
    if (start_index == -1)
        printf("-1\n");
    else
        printf("%lu %lu %lu\n", lengths[start_index + 0], lengths[start_index + 1], lengths[start_index + 2]);
    return 0;
}
