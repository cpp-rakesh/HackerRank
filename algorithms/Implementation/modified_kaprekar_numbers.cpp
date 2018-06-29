#include <iostream>
#include <deque>
#include <string>
#include <cstdlib>

class Integer {
public:
    Integer(int N) {
        while (N) {
            m_data.push_back(N % 10);
            N /= 10;
        }
    }

    ~Integer() {}

    void operator * (const int& N) {
        int carry = 0;
        for (std::size_t i = 0; i < m_data.size(); ++i) {
            int value = carry + N * m_data[i];
            if (value < 9) {
                carry = 0;
                m_data[i] = value;
            } else {
                m_data[i] = value % 10;
                carry = value / 10;
            }
        }

        while (carry) {
            m_data.push_back(carry % 10);
            carry /= 10;
        }
    }

    bool is_kaprekar(const int& N) {
        if (N == 1) return true;

        std::string number;
        for (int i = m_data.size() - 1; i >= 0; --i)
            number.push_back('0' + m_data[i]);

        const int mid = number.size() / 2;

        const int a = atoi(number.substr(0, mid).c_str());
        const int b = atoi(number.substr(mid, number.size() - mid).c_str());

        if (a + b == N) return true;

        return false;
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
    int found = 0;
    int P = 0;
    int Q = 0;

    std::cin >> P;
    std::cin >> Q;

    for (int i = P; i <= Q; ++i) {
        Integer number(i);
        number * i;
        if (number.is_kaprekar(i)) {
            std::cout << i << " ";
            ++found;
        }
    }

    if (found)
        std::cout << std::endl;
    else
        std::cout << "INVALID RANGE" << std::endl;

    return 0;
}
