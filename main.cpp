/*
 * task #0813
 * link https://robocontest.uz/tasks/0813
 */
#include <iostream>

int digitNumber(unsigned int n) {
    unsigned short int digitNum = 0;
    while (n != 0) {
        n /= 10;
        digitNum++;
    }
    return digitNum;
}

int main() {
    unsigned int n;
    unsigned long long res = 0;
    unsigned short int digitNum;
    unsigned long a = 10, b = 99;
    std::cin >> n;
    digitNum = digitNumber(n);
    if (digitNum != 1) {
        for (int i = 2; i <= digitNum; ++i) {
            if (a <= n and n <= b) {
                res += (n - a + 1) * i;
                break;

            } else {
                res += (b - a + 1) * i;
                a *= 10;
                b += a * 9;
            }
        }
        std::cout << res + 9;
    } else {
        std::cout << n;
    }

    return 0;
}
