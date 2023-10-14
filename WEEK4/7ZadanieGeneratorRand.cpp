#include <iostream>
using namespace std;


int pseudoRandomGenerator(int m, int b, int c, int s, int n) {
    if (n <= s) {
        return 0;
    }
    cout << (m * s + b) % c << " ";
    return pseudoRandomGenerator(m, b, c, s+1, n);
}

int main() { 
    setlocale(LC_ALL, "ru-RU");
    int s = 0;
    int m1 = 37;
    int b1 = 3;
    int c1 = 64;
    int n;
    cout << "Введите кол-во чисел: ";
    cin >> n;
    cout << "Числа вариант 1: ";
    pseudoRandomGenerator(m1, b1, c1, s, n);
    cout << endl;

    int m2 = 25173;
    int b2 = 13849;
    int c2 = 65537;
    cout << "Числа вариант 2: ";
    pseudoRandomGenerator(m2, b2, c2, s, n);
}
