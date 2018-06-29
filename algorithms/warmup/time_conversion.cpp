#include <iostream>
#include <string>

int main() {
    std::string T;
    std::cin >> T;

    if (T.substr(T.size() - 2, 2) == "PM" && T.substr(0, 2) != "12") {
        T[0] += 1;
        T[1] += 2;
    }

    if (T.substr(T.size() - 2, 2) == "AM" && T.substr(0, 2) == "12") {
        T[0]  = T[1] = '0';
    }

    T.erase(T.size() - 2, 2);

    std::cout << T << std::endl;

    return 0;
}
