#include <iostream>
#include <deque>

class Integer {
public:
	Integer(const int& val) {
		m_data.push_back(val);
	}

	~Integer() {}

	void operator * (const int& value) {
		int carry = 0;
		std::size_t iter = 0;
		while (iter < m_data.size()) {
			const int val = (value * m_data[iter]) + carry;
			if (val < 9) {
				m_data[iter] = val;
				carry = 0;
			} else {
				m_data[iter] = val % 10;
				carry = val / 10;
			}
			++iter;
		}

		while (carry) {
			m_data.push_back(carry % 10);
			carry /= 10;
		}
	}

	void Print() const {
		for (int i = m_data.size() - 1; i >= 0; --i)
			std::cout << m_data[i];
		std::cout << std::endl;
	}

private:
	std::deque<int> m_data;
};

int main() {
	Integer value(1);

	int N = 0;

	std::cin >> N;

	for (int i = 2; i <= N; ++i)
		value * i;

	value.Print();
	return 0;
}
