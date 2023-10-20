#include <iostream>

using namespace std;

void sieve_eratosthenes(int n) {
    bool* is_prime = new bool[n + 1];
    for (int i = 0; i <= n; i++) {
        is_prime[i] = true;
    }
    is_prime[0] = is_prime[1] = false;

    for (int p = 2; p * p <= n; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                is_prime[i] = false;
            }
        }
    }

    cout << "Простые числа в диапазоне от 2 до " << n << ": ";
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    delete[] is_prime; // Освобождаем выделенную память
}

int main() {
    int n;
    cout << "Введите натуральное число: ";
    cin >> n;

    if (n >= 2) {
        sieve_eratosthenes(n);
    }
    else {
        cout << "Пожалуйста, введите число больше или равное 2." << endl;
    }

    return 0;
}
