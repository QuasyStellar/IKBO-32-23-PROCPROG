#include <iostream>
using namespace std;


int pseudoRandomGenerator(int m, int b, int c, int s, int n) {
    if (n == 0) {
        return s;
    }

    s = (m * s + b) % c;
    cout << s << " ";
    return pseudoRandomGenerator(m, b, c, s, n - 1);
}

int main() {
    // Для I варианта:
    int m1 = 37;
    int b1 = 3;
    int c1 = 64;
    int s0_1 = 0;
    int n1 = 10;
    cout << "Sequence 1: ";
    pseudoRandomGenerator(m1, b1, c1, s0_1, n1);
    cout << endl;

    // Для II варианта:
    int m2 = 25173;
    int b2 = 13849;
    int c2 = 65537;
    int s0_2 = 0;
    int n2 = 10;
    cout << "Sequence 2: ";
    pseudoRandomGenerator(m2, b2, c2, s0_2, n2);
    cout << endl;
}
