/*
  Solution for Extra Long Factorial at Hacker Rank
  Rakesh Kumar @ cpp.rakesh@gmail.com
  Nov 4th, 2016
 */

#include <cstdio>
#include <string>

class Integer {
public:
    Integer(int value) {
        while (value) {
            m_data.push_back((value % 10) + '0');
            value /= 10;
        }
    }

    ~Integer() {}

    void operator * (int rhs) {
        int carry = 0;
        for (std::size_t i = 0; i < m_data.size(); ++i) {
            const int sum = carry + (rhs * (m_data[i] - '0'));
            m_data[i] = (sum % 10) + '0';
            carry = sum / 10;
        }

        while (carry) {
            m_data.push_back((carry % 10) + '0');
            carry /= 10;
        }
    }

    void Print() const {
        for (int i = m_data.size() - 1; i >= 0; --i)
            printf("%c", m_data[i]);
        printf("\n");
    }

private:
    std::string m_data;
};

int main() {
    Integer value(1);

    int N = 0;

    scanf("%d", &N);

    for (int i = 2; i <= N; ++i)
        value * i;

    value.Print();
    return 0;
}
