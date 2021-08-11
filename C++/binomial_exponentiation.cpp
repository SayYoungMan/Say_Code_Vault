// Binomial Exponentiation method to achieve x^n calculation in O(log n) time instead of O(n)
// Reference: https://cp-algorithms.com/algebra/binary-exp.html

#include <iostream>

long long binpow(long long x, long long n) {
    long long rv = 1;

    while (n > 0) {
        if (n & 1) rv *= x; // If n is odd multiply by ans by x once
        x *= x;             // Keep doubling x
        n >>= 1;            // Divide n to half
    }

    return rv;
}

int main() {
    long long a = binpow(2, 3);
    std::cout << a;
}